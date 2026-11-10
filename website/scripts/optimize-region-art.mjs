import { spawn } from 'node:child_process';
import { access, mkdir, readFile, stat } from 'node:fs/promises';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { isAbsolute, resolve } from 'node:path';
import { REGIONS } from '../src/regions.js';

/** Sequential format/size optimization only. This does not generate or edit art. */
function runCodec(ffmpeg, args) {
  return new Promise((accept, reject) => {
    const child = spawn(ffmpeg, ['-hide_banner', '-loglevel', 'error', ...args], { windowsHide: true, stdio: ['ignore', 'ignore', 'pipe'] });
    let diagnostic = '';
    child.stderr.on('data', chunk => { if (diagnostic.length < 4096) diagnostic += chunk.toString(); });
    child.once('error', reject);
    child.once('exit', status => status === 0 ? accept() : reject(new Error(`WebP codec failed: ${diagnostic.trim()}`)));
  });
}

export async function optimizeRegionArt({ codes, manifest, directory = fileURLToPath(new URL('../src/assets/regions/', import.meta.url)), ffmpeg = process.env.FFMPEG_PATH || 'ffmpeg', onProgress = () => {} } = {}) {
  const inputs = new Map();
  if (manifest) {
    const data = JSON.parse(await readFile(manifest, 'utf8'));
    const entries = Array.isArray(data) ? data : data.entries;
    if (!Array.isArray(entries)) throw new Error('Image manifest must contain entries');
    for (const entry of entries) {
      if (!Object.hasOwn(REGIONS, entry.code) || typeof entry.path !== 'string' || !isAbsolute(entry.path) || inputs.has(entry.code)) throw new Error('Invalid or duplicate regional image input');
      inputs.set(entry.code, entry.path);
    }
  }
  codes ||= manifest ? [...inputs.keys()] : Object.keys(REGIONS);
  await mkdir(directory, { recursive: true });
  const results = [];
  for (const code of codes) {
    if (!Object.hasOwn(REGIONS, code)) throw new Error(`Unsupported region: ${code}`);
    const input = inputs.get(code) || (!manifest ? resolve(directory, `${code}.png`) : null);
    if (!input) throw new Error(`Missing manifest entry for ${code}`);
    const output = resolve(directory, `${code}.webp`);
    await access(input);
    try {
      const { size } = await stat(output);
      if (size > 0 && size <= 240 * 1024) {
        await runCodec(ffmpeg, ['-i', output, '-threads', '1', '-frames:v', '1', '-f', 'null', '-']);
        const result = { code, bytes: size, skipped: true };
        results.push(result); onProgress(result); continue;
      }
    } catch { /* Missing or invalid output is replaced from the native original. */ }
    let result;
    for (const quality of [82, 74, 66]) {
      await runCodec(ffmpeg, ['-y', '-i', input, '-vf', 'scale=w=min(1280\\,iw):h=min(960\\,ih):force_original_aspect_ratio=decrease', '-c:v', 'libwebp', '-quality', String(quality), '-compression_level', '6', '-threads', '1', '-frames:v', '1', output]);
      const { size } = await stat(output);
      if (size <= 240 * 1024) { result = { code, bytes: size, quality, skipped: false }; break; }
    }
    if (!result) throw new Error(`Optimized ${code} exceeds the 240 KiB per-image budget`);
    results.push(result); onProgress(result);
  }
  if (results.length === 29 && results.reduce((sum, result) => sum + result.bytes, 0) > 5 * 1024 * 1024) throw new Error('Regional images exceed the 5 MiB total budget');
  return results;
}

if (process.argv[1] && import.meta.url === pathToFileURL(resolve(process.argv[1])).href) {
  const args = process.argv.slice(2);
  const manifestIndex = args.indexOf('--manifest');
  const manifest = manifestIndex < 0 ? undefined : args.splice(manifestIndex, 2)[1];
  if (manifestIndex >= 0 && !manifest) throw new Error('--manifest requires a file path');
  optimizeRegionArt({ manifest, codes: args.length ? args : undefined, onProgress: result => console.log(JSON.stringify(result)) }).then(results => console.log(JSON.stringify({ images: results.length, totalBytes: results.reduce((sum, result) => sum + result.bytes, 0) }))).catch(error => { console.error(error.message); process.exitCode = 1; });
}
