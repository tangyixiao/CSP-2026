import test from 'node:test';
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { validateSource, githubUrl, decodeSource, languageFor, loadSource, hashBytes, MAX_SOURCE_BYTES } from '../src/source.js';

const revision = 'a'.repeat(40);
function gitHash(bytes) { return createHash('sha1').update(`blob ${bytes.length}\0`).update(bytes).digest('hex'); }
function snapshot(bytes) { return JSON.stringify({ [gitHash(bytes)]: Buffer.from(bytes).toString('base64') }); }
test('only pinned source paths are accepted and path components are encoded', () => {
  assert.throws(() => validateSource('AH/S/../secret.cpp', revision));
  assert.throws(() => validateSource('AH/S/a.cpp', 'main'));
  assert.throws(() => validateSource('https://evil.example/a.cpp', revision));
  assert.match(githubUrl('AH/S/AH-S00001/空 格/a#b.cpp', revision), /%E7%A9%BA%20%E6%A0%BC\/a%23b.cpp$/);
});
test('decode UTF-8 and GB18030 without changing source whitespace', () => {
  assert.deepEqual(decodeSource(new TextEncoder().encode('\t// 中文\r\n')), { text:'\t// 中文\r\n', encoding:'UTF-8' });
  assert.equal(decodeSource(new Uint8Array([0xd6,0xd0,0xce,0xc4])).text, '中文');
  assert.throws(() => decodeSource(new Uint8Array([0,1,2,3,4,5])), /二进制/);
  assert.equal(languageFor('SC/J/A/card.cpp.gz'), 'cpp');
});
test('loads exact bytes and hashes them, including line endings', async t => {
  const bytes = new TextEncoder().encode('int main(){}\r\n');
  t.mock.method(globalThis, 'fetch', async url => {
    assert.match(url, /source-packs\/[a-f0-9]{3}\.json/);
    assert.match(url, new RegExp(revision)); return new Response(snapshot(bytes));
  });
  const result = await loadSource({path:'SC/J/SC-J00020/card/card.cpp',blob:gitHash(bytes)}, {revision});
  assert.equal(result.text, 'int main(){}\r\n');
  assert.equal(result.contentSha256, await hashBytes(bytes));
  assert.equal(result.byteLength, bytes.length);
});
test('rejects sources excluded from a snapshot for exceeding the preview limit', async t => {
  t.mock.method(globalThis, 'fetch', async () => new Response('{}'));
  await assert.rejects(loadSource({path:'SC/J/A/card.cpp',blob:'b'.repeat(40)}, {revision}), /2 MiB/);
});
test('detects a corrupted same-origin byte snapshot against the catalog Git blob', async t => {
  t.mock.method(globalThis, 'fetch', async () => new Response(JSON.stringify({['c'.repeat(40)]:btoa('corrupt')})));
  await assert.rejects(loadSource({path:'SC/J/A/card.cpp',blob:'c'.repeat(40)}, {revision}), /校验失败/);
});
test('caps decompressed gzip and compares original source bytes', async t => {
  const text = 'int n;\r\n';
  const stream = new Blob([text]).stream().pipeThrough(new CompressionStream('gzip'));
  const zipped = await new Response(stream).arrayBuffer();
  const bytes = new Uint8Array(zipped);
  t.mock.method(globalThis, 'fetch', async () => new Response(snapshot(bytes)));
  const result = await loadSource({path:'SC/J/A/card.cpp.gz',blob:gitHash(bytes)}, {revision});
  assert.equal(result.text, text);
  assert.equal(result.contentSha256, await hashBytes(new TextEncoder().encode(text)));
  assert.equal(result.compressed, true);
});
test('caps expanded gzip data before it reaches the code editor', async t => {
  const stream = new Blob([new Uint8Array(MAX_SOURCE_BYTES + 1)]).stream().pipeThrough(new CompressionStream('gzip'));
  const bytes = new Uint8Array(await new Response(stream).arrayBuffer());
  t.mock.method(globalThis, 'fetch', async () => new Response(snapshot(bytes)));
  await assert.rejects(loadSource({path:'SC/J/A/large.cpp.gz',blob:gitHash(bytes)}, {revision}), /2 MiB/);
});
