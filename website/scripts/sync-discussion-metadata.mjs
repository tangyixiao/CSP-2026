import { mkdir, readFile, writeFile } from 'node:fs/promises';
import { dirname, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { associateDiscussionSnapshot, MAPPING_SCOPE } from './discussion-associations.mjs';

const MAPPING_KEY = /^csp-2026-v1-[a-f0-9]{64}$/;
const count = value => Number.isSafeInteger(value) && value >= 0;
const QUERY = `query ArchiveDiscussionMetadata($after: String) {
  repository(owner: "tangyixiao", name: "CSP-2026") {
    discussions(first: 100, after: $after) {
      nodes { id title url updatedAt comments { totalCount } reactions { totalCount } }
      pageInfo { hasNextPage endCursor }
    }
  }
}`;

/** Only a successful, exhaustive snapshot establishes zero activity.
 * Comments are top-level discussion comments; replies have not been queried.
 * Failed snapshots intentionally discard partial/stale counts.
 */
export function normalizeSnapshot({ nodes = [], complete = false, syncedAt = null, reason = null } = {}) {
  const base = { schemaVersion: 1, repository: 'tangyixiao/CSP-2026', availability: 'unavailable', complete: false, syncedAt: null, checkedAt: syncedAt, totalThreads: null, byKey: {}, measures: { threads: 'discussion threads', comments: 'top-level discussion comments; replies not queried', reactions: 'discussion reactions; comment reactions not queried' } };
  if (!complete || !Array.isArray(nodes)) return { ...base, reason: reason || 'incomplete' };
  const unique = new Map();
  for (const node of nodes) {
    if (!node || typeof node.id !== 'string' || typeof node.title !== 'string') return { ...base, reason: 'invalid-response' };
    unique.set(node.id, node);
  }
  const byKey = {};
  for (const node of unique.values()) {
    if (!MAPPING_KEY.test(node.title)) continue;
    if (!count(node.comments?.totalCount) || !count(node.reactions?.totalCount) || !/^https:\/\/github\.com\/tangyixiao\/CSP-2026\/discussions\/\d+$/.test(node.url) || !Number.isFinite(Date.parse(node.updatedAt))) return { ...base, reason: 'invalid-response' };
    const entry = byKey[node.title] ||= { threadCount: 0, commentCount: 0, reactionCount: 0, updatedAt: node.updatedAt, threads: [] };
    entry.threadCount++;
    entry.commentCount += node.comments.totalCount;
    entry.reactionCount += node.reactions.totalCount;
    if (Date.parse(node.updatedAt) > Date.parse(entry.updatedAt)) entry.updatedAt = node.updatedAt;
    entry.threads.push({ id: node.id, url: node.url, updatedAt: node.updatedAt });
  }
  return { ...base, availability: 'available', complete: true, syncedAt, totalThreads: unique.size, byKey };
}

/** Read only GitHub metadata, with the token confined to this server-side call. */
export async function fetchDiscussionSnapshot({ fetchImpl = fetch, token, now = () => new Date(), maxPages = 10 } = {}) {
  const timestamp = new Date(typeof now === 'function' ? now() : now).toISOString();
  const unavailable = reason => normalizeSnapshot({ syncedAt: timestamp, reason });
  if (typeof token !== 'string' || !token.trim()) return unavailable('no-token');
  if (!Number.isSafeInteger(maxPages) || maxPages < 1) return unavailable('page-limit');
  const nodes = [];
  const cursors = new Set();
  let after = null;
  try {
    for (let page = 0; page < maxPages; page++) {
      const response = await fetchImpl('https://api.github.com/graphql', { method: 'POST', headers: { Authorization: `Bearer ${token}`, 'Content-Type': 'application/json', Accept: 'application/vnd.github+json' }, body: JSON.stringify({ query: QUERY, variables: { after } }), signal: AbortSignal.timeout(15000) });
      if (!response.ok) return unavailable('http-error');
      const body = await response.json();
      const connection = body?.data?.repository?.discussions;
      if (body?.errors?.length || !Array.isArray(connection?.nodes) || typeof connection?.pageInfo?.hasNextPage !== 'boolean') return unavailable('invalid-response');
      nodes.push(...connection.nodes);
      if (!connection.pageInfo.hasNextPage) return normalizeSnapshot({ nodes, complete: true, syncedAt: timestamp });
      after = connection.pageInfo.endCursor;
      if (typeof after !== 'string' || !after || cursors.has(after)) return unavailable('invalid-pagination');
      cursors.add(after);
    }
    return unavailable('page-limit');
  } catch { return unavailable('request-failed'); }
}

async function main() {
  let snapshot = await fetchDiscussionSnapshot({ token: process.env.GH_TOKEN || process.env.GITHUB_TOKEN });
  const output = fileURLToPath(new URL('../public/discussion-metadata.json', import.meta.url));
  try {
    const index = JSON.parse(await readFile(new URL('../public/catalog/index.json', import.meta.url), 'utf8'));
    const files = [];
    if (snapshot.complete && snapshot.totalThreads > 0) {
      for (const group of index.groups) {
        if (!/^catalog\/[A-Z]{2}-[JS]\.json$/.test(group.url)) throw new Error('Invalid catalog URL');
        const shard = JSON.parse(await readFile(new URL(`../public/${group.url}`, import.meta.url), 'utf8'));
        if (!Array.isArray(shard.files)) throw new Error('Invalid catalog files');
        files.push(...shard.files);
      }
    }
    const cases = snapshot.complete && snapshot.totalThreads > 0 ? JSON.parse(await readFile(new URL('../src/cases.json', import.meta.url), 'utf8')) : [];
    snapshot = associateDiscussionSnapshot(snapshot, { revision: index.revision, files, cases });
  } catch {
    snapshot = { ...normalizeSnapshot({ syncedAt: snapshot.checkedAt, reason: 'catalog-unavailable' }), catalogRevision: null, mappingScope: MAPPING_SCOPE, byContestant: {}, mappedThreadCount: null, unmappedThreadCount: null };
  }
  await mkdir(dirname(output), { recursive: true });
  await writeFile(output, `${JSON.stringify(snapshot, null, 2)}\n`, 'utf8');
  console.log(JSON.stringify({ availability: snapshot.availability, complete: snapshot.complete, syncedAt: snapshot.syncedAt, totalThreads: snapshot.totalThreads, reason: snapshot.reason }));
}

if (process.argv[1] && import.meta.url === pathToFileURL(resolve(process.argv[1])).href) {
  main().catch(() => { console.error('Discussion metadata publication failed'); process.exitCode = 1; });
}
