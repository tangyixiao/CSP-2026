import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, readFile, readdir, rm } from 'node:fs/promises';
import { join, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { Readable } from 'node:stream';

async function implementation() {
  try {
    return await import('../scripts/generate-source-packs.mjs');
  } catch (error) {
    assert.fail(`Source pack generator must be importable without reading Git: ${error.message}`);
  }
}

test('source SHA chooses its first three hex digits as the bucket', async () => {
  const { sourceBucket } = await implementation();
  assert.equal(sourceBucket(`abc${'0'.repeat(37)}`), 'abc');
  assert.equal(sourceBucket(`00f${'1'.repeat(37)}`), '00f');
  assert.throws(() => sourceBucket('../unsafe'), /SHA/i);
});

test('batch check distinguishes available, oversize and missing objects', async () => {
  const { classifyBatchCheck, SOURCE_LIMIT } = await implementation();
  const sha = 'a'.repeat(40);
  assert.deepEqual(classifyBatchCheck(`${sha} blob ${SOURCE_LIMIT}`), { sha, status: 'available', size: SOURCE_LIMIT });
  assert.deepEqual(classifyBatchCheck(`${sha} blob ${SOURCE_LIMIT + 1}`), { sha, status: 'skipped', size: SOURCE_LIMIT + 1 });
  assert.deepEqual(classifyBatchCheck(`${sha} missing`), { sha, status: 'missing', size: null });
  assert.throws(() => classifyBatchCheck(`${sha} tree 100`), /blob/i);
});

test('strict completeness rejects missing sources and cases-only previews', async () => {
  const { assertSourcePolicy } = await implementation();
  const complete = { expected: 3, selected: 3, available: 2, skipped: 1, missing: 0, selection: 'all' };
  assert.equal(assertSourcePolicy(complete), true);
  const missing = { ...complete, available: 1, missing: 1 };
  assert.throws(() => assertSourcePolicy(missing), /missing|incomplete/i);
  assert.equal(assertSourcePolicy(missing, true), false);
  const preview = { ...complete, expected: 20, selection: 'cases' };
  assert.throws(() => assertSourcePolicy(preview), /incomplete|preview/i);
  assert.equal(assertSourcePolicy(preview, true), false);
});

test('batch binary parser preserves NUL, CRLF and invalid UTF-8 across arbitrary chunks', async () => {
  const { readBatchObjects } = await implementation();
  const firstSha = '1'.repeat(40);
  const secondSha = '2'.repeat(40);
  const bytes = Buffer.from([0x00, 0xff, 0x0d, 0x0a, 0x80, 0x41]);
  const wire = Buffer.concat([
    Buffer.from(`${firstSha} blob ${bytes.length}\n`), bytes, Buffer.from('\n'),
    Buffer.from(`${secondSha} blob 0\n\n`),
  ]);
  const chunks = Array.from(wire, (byte) => Buffer.from([byte]));
  const objects = [];
  for await (const object of readBatchObjects(Readable.from(chunks))) objects.push(object);
  assert.equal(objects.length, 2);
  assert.equal(objects[0].sha, firstSha);
  assert.deepEqual(objects[0].bytes, bytes);
  assert.deepEqual(objects[1].bytes, Buffer.alloc(0));
  await assert.rejects(async () => {
    for await (const object of readBatchObjects(Readable.from([wire.subarray(0, 45)]))) void object;
  }, /truncated|incomplete/i);
});

test('written bucket JSON round trips raw binary bytes through base64', async (context) => {
  const { writeSourcePacks } = await implementation();
  const directory = await mkdtemp(join(tmpdir(), 'csp-source-packs-test-'));
  context.after(async () => {
    assert.ok(resolve(directory).startsWith(resolve(tmpdir()) + '\\') || resolve(directory).startsWith(resolve(tmpdir()) + '/'));
    await rm(directory, { recursive: true, force: true });
  });
  const shaA = `abc${'0'.repeat(37)}`;
  const shaB = `abc${'1'.repeat(37)}`;
  const shaC = `def${'2'.repeat(37)}`;
  const binary = Buffer.from([0xff, 0x00, 0x81, 0x0d, 0x0a]);
  const objects = [
    { sha: shaA, bytes: binary }, { sha: shaB, bytes: Buffer.alloc(0) },
    { sha: shaC, bytes: Buffer.from('中文\r\n', 'utf8') },
  ];
  const result = await writeSourcePacks(Readable.from(objects), directory);
  assert.deepEqual(result, { available: 3, buckets: 2 });
  assert.deepEqual((await readdir(directory)).sort(), ['abc.json', 'def.json']);
  const first = JSON.parse(await readFile(join(directory, 'abc.json'), 'utf8'));
  assert.deepEqual(Buffer.from(first[shaA], 'base64'), binary);
  assert.deepEqual(Buffer.from(first[shaB], 'base64'), Buffer.alloc(0));
  const second = JSON.parse(await readFile(join(directory, 'def.json'), 'utf8'));
  assert.equal(Buffer.from(second[shaC], 'base64').toString('utf8'), '中文\r\n');
});
