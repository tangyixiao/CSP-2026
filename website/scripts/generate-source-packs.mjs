import { spawn } from 'node:child_process';
import { once } from 'node:events';
import { mkdir, open, readFile, readdir, unlink, writeFile } from 'node:fs/promises';
import { dirname, resolve } from 'node:path';
import { createInterface } from 'node:readline';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { inspectPreviewContent } from './preview-content.mjs';
import { updateCatalogSizes } from './catalog-sizes.mjs';

export const SOURCE_LIMIT = 2 * 1024 * 1024;
export const PACK_LIMIT = 32 * 1024 * 1024;
const SHA = /^[a-f0-9]{40,64}$/;

export function sourceBucket(sha) {
  if (!SHA.test(sha)) throw new Error(`Invalid source SHA: ${sha}`);
  return sha.slice(0, 3);
}

export function classifyBatchCheck(line, limit = SOURCE_LIMIT) {
  const parts = line.split(' ');
  const sha = parts[0];
  sourceBucket(sha);
  if (parts.length === 2 && parts[1] === 'missing') return { sha, status: 'missing', size: null };
  if (parts.length !== 3 || parts[1] !== 'blob' || !/^\d+$/.test(parts[2])) {
    throw new Error(`Expected a blob from git cat-file --batch-check: ${line}`);
  }
  const size = Number(parts[2]);
  if (!Number.isSafeInteger(size)) throw new Error(`Invalid blob size for ${sha}`);
  return { sha, status: size > limit ? 'skipped' : 'available', size };
}

export function assertSourcePolicy(summary, allowPartial = false) {
  const complete = summary.selection === 'all' && summary.selected === summary.expected
    && summary.missing === 0 && summary.available + summary.skipped === summary.expected;
  if (!complete && !allowPartial) {
    throw new Error(`Incomplete source snapshot: ${summary.missing} missing objects; ${summary.selected}/${summary.expected} selected. ALLOW_PARTIAL_SOURCES=1 is for local preview only.`);
  }
  return complete;
}

/** Parse Git's binary framing without decoding or concatenating source bytes. */
export async function* readBatchObjects(stream, { limit = SOURCE_LIMIT } = {}) {
  let header = '';
  let object = null;
  let received = 0;
  let needsTrailer = false;
  for await (const chunk of stream) {
    const bytes = Buffer.isBuffer(chunk) ? chunk : Buffer.from(chunk);
    let offset = 0;
    while (offset < bytes.length) {
      if (needsTrailer) {
        if (bytes[offset++] !== 10) throw new Error('Invalid git cat-file blob trailer');
        needsTrailer = false;
        const finished = object;
        object = null;
        yield finished;
        continue;
      }
      if (!object) {
        const newline = bytes.indexOf(10, offset);
        if (newline < 0) {
          header += bytes.toString('ascii', offset);
          if (header.length > 256) throw new Error('Invalid git cat-file header');
          break;
        }
        header += bytes.toString('ascii', offset, newline);
        offset = newline + 1;
        const checked = classifyBatchCheck(header, limit);
        header = '';
        if (checked.status !== 'available') throw new Error(`Unavailable or oversize object during source read: ${checked.sha}`);
        object = { sha: checked.sha, bytes: Buffer.allocUnsafe(checked.size) };
        received = 0;
        needsTrailer = checked.size === 0;
        continue;
      }
      const count = Math.min(object.bytes.length - received, bytes.length - offset);
      bytes.copy(object.bytes, received, offset, offset + count);
      received += count;
      offset += count;
      needsTrailer = received === object.bytes.length;
    }
  }
  if (header || object || needsTrailer) throw new Error('Truncated or incomplete git cat-file response');
}

/** SHA ordering makes each bucket a single streaming write, with one open file. */
export async function writeSourcePacks(objects, outputDirectory, { onObject = () => {} } = {}) {
  await mkdir(outputDirectory, { recursive: true });
  let currentBucket = null;
  let handle = null;
  let previousSha = '';
  let first = true;
  let available = 0;
  let buckets = 0;
  let bucketBytes = 0;
  try {
    for await (const object of objects) {
      await onObject(object);
      const bucket = sourceBucket(object.sha);
      if (object.sha <= previousSha) throw new Error('Source objects must have unique, sorted SHAs');
      previousSha = object.sha;
      if (object.bytes.length > SOURCE_LIMIT) throw new Error(`Source exceeds raw byte limit: ${object.sha}`);
      if (bucket !== currentBucket) {
        if (handle) { await handle.write('\n}\n'); await handle.close(); handle = null; }
        handle = await open(resolve(outputDirectory, `${bucket}.json`), 'w');
        await handle.write('{');
        bucketBytes = 1;
        first = true;
        currentBucket = bucket;
        buckets++;
      }
      const entry = `${first ? '' : ','}\n"${object.sha}":"${object.bytes.toString('base64')}"`;
      bucketBytes += Buffer.byteLength(entry);
      if (bucketBytes + 3 > PACK_LIMIT) throw new Error(`Source bucket ${bucket} exceeds the 32 MiB browser limit`);
      await handle.write(entry);
      first = false;
      available++;
    }
    if (handle) { await handle.write('\n}\n'); await handle.close(); handle = null; }
  } finally {
    if (handle) await handle.close();
  }
  return { available, buckets };
}

function startGit(args, repositoryRoot) {
  const child = spawn('git', args, {
    cwd: repositoryRoot, env: { ...process.env, GIT_NO_LAZY_FETCH: '1' },
    windowsHide: true, stdio: ['pipe', 'pipe', 'pipe'],
  });
  let diagnostic = '';
  child.stderr.on('data', (chunk) => { if (diagnostic.length < 65536) diagnostic += chunk.toString('utf8'); });
  child.stdin.on('error', () => {});
  const done = new Promise((resolveDone, rejectDone) => {
    child.on('error', rejectDone);
    child.on('close', (code) => code === 0 ? resolveDone() : rejectDone(new Error(`git cat-file failed (${code}): ${diagnostic.trim()}`)));
  });
  done.catch(() => {});
  return { child, done };
}

async function feedHashes(child, hashes) {
  for (const sha of hashes) {
    if (!child.stdin.write(`${sha}\n`)) await once(child.stdin, 'drain');
  }
  child.stdin.end();
}

async function loadCatalogSelection(repositoryRoot, casesOnly) {
  const publicDirectory = resolve(repositoryRoot, 'website/public');
  const index = JSON.parse(await readFile(resolve(publicDirectory, 'catalog/index.json'), 'utf8'));
  sourceBucket(index.revision);
  const all = new Set();
  const selected = casesOnly ? new Set() : all;
  const caseKeys = new Set();
  if (casesOnly) {
    const cases = JSON.parse(await readFile(resolve(repositoryRoot, 'website/src/cases.json'), 'utf8'));
    for (const item of cases) for (const side of [item.left, item.right]) {
      caseKeys.add(`${side.province}-${side.group}/${side.contestant.toUpperCase()}/${side.problem}`);
    }
  }
  for (const group of index.groups) {
    if (!/^catalog\/[A-Z]{2}-[JS]\.json$/.test(group.url)) throw new Error(`Invalid catalog group URL: ${group.url}`);
    const text = await readFile(resolve(publicDirectory, group.url), 'utf8');
    let count = 0;
    for (const match of text.matchAll(/"blob"\s*:\s*"([a-f0-9]{40,64})"/g)) { all.add(match[1]); count++; }
    if (count !== group.fileCount + (group.extraFileCount ?? 0)) throw new Error(`Catalog blob count mismatch in ${group.url}`);
    if (casesOnly && [...caseKeys].some((key) => key.startsWith(`${group.key}/`))) {
      for (const file of JSON.parse(text).files) {
        if (caseKeys.has(`${group.key}/${file.contestant.toUpperCase()}/${file.problem}`)) selected.add(file.blob);
      }
    }
  }
  return { revision: index.revision, expected: all.size, hashes: [...selected].sort() };
}

async function main() {
  const repositoryRoot = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
  const allowPartial = process.env.ALLOW_PARTIAL_SOURCES === '1';
  const casesOnly = process.env.SOURCE_CASES_ONLY === '1';
  const selection = casesOnly ? 'cases' : 'all';
  const outputDirectory = resolve(repositoryRoot, 'website/public/source-packs');
  await mkdir(outputDirectory, { recursive: true });
  // A failed run must never leave an old complete manifest to pass packaging.
  await unlink(resolve(outputDirectory, 'index.json')).catch((error) => { if (error.code !== 'ENOENT') throw error; });
  if (casesOnly && !allowPartial) throw new Error('Cases-only source preview requires ALLOW_PARTIAL_SOURCES=1');
  const { revision, expected, hashes } = await loadCatalogSelection(repositoryRoot, casesOnly);
  if (!expected || !hashes.length) throw new Error('Catalog has no selected source blobs');
  const summary = {
    schemaVersion: 1, revision, expected, selected: hashes.length,
    available: 0, skipped: 0, missing: 0, limit: SOURCE_LIMIT,
    bucketPrefixLength: 3, buckets: 0, selection, complete: false, partial: true,
    missingSamples: [], skippedSamples: [],
  };
  const availableHashes = [];
  const blobSizes = new Map();
  const previews = new Map();
  const checking = startGit(['cat-file', '--batch-check=%(objectname) %(objecttype) %(objectsize)'], repositoryRoot);
  const feedingCheck = feedHashes(checking.child, hashes);
  feedingCheck.catch(() => {});
  let checkedCount = 0;
  try {
    const lines = createInterface({ input: checking.child.stdout, crlfDelay: Infinity });
    for await (const line of lines) {
      const record = classifyBatchCheck(line);
      if (record.sha !== hashes[checkedCount++]) throw new Error('Unexpected git cat-file check order');
      summary[record.status]++;
      if (record.status !== 'available') previews.set(record.sha, { previewable: false, previewReason: record.status === 'skipped' ? 'too-large' : 'not-in-snapshot' });
      if (record.size !== null) blobSizes.set(record.sha, record.size);
      if (record.status === 'available') availableHashes.push(record.sha);
      else if (summary[`${record.status}Samples`].length < 8) summary[`${record.status}Samples`].push(record.sha);
    }
    await Promise.all([feedingCheck, checking.done]);
  } catch (error) { checking.child.kill(); throw error; }
  if (checkedCount !== hashes.length) throw new Error('Incomplete git cat-file check output');
  summary.complete = assertSourcePolicy(summary, allowPartial);
  summary.partial = !summary.complete;
  for (const name of await readdir(outputDirectory)) {
    if (/^[a-f0-9]{3}\.json$/.test(name)) await unlink(resolve(outputDirectory, name));
  }
  const reading = startGit(['cat-file', '--batch'], repositoryRoot);
  const feedingRead = feedHashes(reading.child, availableHashes);
  feedingRead.catch(() => {});
  try {
    const packed = await writeSourcePacks(readBatchObjects(reading.child.stdout), outputDirectory, { onObject: ({ sha, bytes }) => previews.set(sha, inspectPreviewContent(bytes)) });
    await Promise.all([feedingRead, reading.done]);
    if (packed.available !== summary.available) throw new Error('Source pack count differs from Git check');
    summary.buckets = packed.buckets;
  } catch (error) { reading.child.kill(); throw error; }
  await updateCatalogSizes(resolve(repositoryRoot, 'website/public'), blobSizes, revision, previews);
  summary.previewCoverage = JSON.parse(await readFile(resolve(repositoryRoot, 'website/public/catalog/index.json'), 'utf8')).previewCoverage;
  await writeFile(resolve(outputDirectory, 'index.json'), `${JSON.stringify(summary, null, 2)}\n`, 'utf8');
  console.log(JSON.stringify({ ...summary, peakRssMiB: Math.round(process.resourceUsage().maxRSS / 1024) }));
}

if (process.argv[1] && import.meta.url === pathToFileURL(resolve(process.argv[1])).href) {
  main().catch((error) => { console.error(error.message); process.exitCode = 1; });
}
