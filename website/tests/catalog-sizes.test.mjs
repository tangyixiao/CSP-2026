import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdir, mkdtemp, readFile, rm, writeFile } from 'node:fs/promises';
import { fileURLToPath } from 'node:url';
import { resolve, sep } from 'node:path';
import { enrichCatalogSizes, updateCatalogSizes } from '../scripts/catalog-sizes.mjs';
import { classifyBatchCheck, SOURCE_LIMIT } from '../scripts/generate-source-packs.mjs';

const revision = 'a'.repeat(40);
const url = 'catalog/ZJ-S.json';
const index = { revision, groups: [{ key: 'ZJ-S', url }], sizeAvailability: 'not-collected' };
const sha = value => value.repeat(40);

test('catalog enrichment reuses blob sizes for repeated paths, empty files and download-only oversized extras', () => {
  const files = Object.freeze([{ path: 'one.cpp', blob: sha('1'), size: null }, { path: 'copy.cpp', blob: sha('1'), size: null }, { path: 'empty.cpp', blob: sha('2'), size: null }].map(Object.freeze));
  const extraFiles = Object.freeze([Object.freeze({ path: 'original.bin', blob: sha('3'), size: null })]);
  const shards = Object.freeze({ [url]: Object.freeze({ files, extraFiles }) });
  const records = [`${sha('1')} blob 20`, `${sha('2')} blob 0`, `${sha('3')} blob ${SOURCE_LIMIT + 1}`].map(line => classifyBatchCheck(line));
  const observed = new Map(records.map(record => [record.sha, record.size]));
  const result = enrichCatalogSizes(index, shards, observed, revision);
  assert.deepEqual(result.shards[url].files.map(file => file.size), [20, 20, 0]);
  assert.equal(result.shards[url].extraFiles[0].size, SOURCE_LIMIT + 1);
  assert.equal(result.index.sizeAvailability, 'complete');
  assert.deepEqual(result.index.sizeCoverage, { knownFiles: 4, unknownFiles: 0 });
  assert.equal(files[0].size, null);
  assert.equal(index.sizeAvailability, 'not-collected');
});

test('partial selected/missing/invalid blob metadata remains unknown instead of stale or fabricated zero', () => {
  const shards = { [url]: { files: ['1', '2', '3', '4'].map(value => ({ blob: sha(value), size: 999 })) } };
  const observed = new Map([[sha('1'), 0], [sha('2'), null], [sha('3'), -1]]);
  const result = enrichCatalogSizes(index, shards, observed, revision);
  assert.deepEqual(result.shards[url].files.map(file => file.size), [0, null, null, null]);
  assert.equal(result.index.sizeAvailability, 'partial');
  assert.deepEqual(result.index.sizeCoverage, { knownFiles: 1, unknownFiles: 3 });
});

test('catalog sizes refuse revision mismatch and unsafe shard URLs before producing updates', () => {
  assert.throws(() => enrichCatalogSizes(index, {}, new Map(), 'b'.repeat(40)), /revision/);
  assert.throws(() => enrichCatalogSizes({ ...index, groups: [{ url: '../elsewhere.json' }] }, {}, new Map(), revision), /URL/);
  assert.throws(() => enrichCatalogSizes(index, { [url]: { files: [] } }, {}, revision), /Map/);
});

test('size publication updates only a matching local catalog and rejects a new revision without overwriting it', async context => {
  const scratch = fileURLToPath(new URL('../../work/', import.meta.url));
  await mkdir(scratch, { recursive: true });
  const directory = await mkdtemp(resolve(scratch, 'catalog-sizes-test-'));
  context.after(async () => {
    assert.ok(resolve(directory).startsWith(resolve(scratch) + sep));
    await rm(directory, { recursive: true, force: true });
  });
  await mkdir(resolve(directory, 'catalog'));
  await writeFile(resolve(directory, 'catalog/index.json'), JSON.stringify(index));
  await writeFile(resolve(directory, url), JSON.stringify({ files: [{ blob: sha('1'), size: null }], extraFiles: [{ blob: sha('2'), size: null }] }));
  const observed = new Map([[sha('1'), 30], [sha('2'), 0]]);
  assert.deepEqual(await updateCatalogSizes(directory, observed, revision), { knownFiles: 2, unknownFiles: 0 });
  const published = JSON.parse(await readFile(resolve(directory, url), 'utf8'));
  assert.equal(published.files[0].size, 30);
  assert.equal(published.extraFiles[0].size, 0);
  const changed = JSON.stringify({ ...index, revision: 'b'.repeat(40) });
  await writeFile(resolve(directory, 'catalog/index.json'), changed);
  await assert.rejects(updateCatalogSizes(directory, new Map([[sha('1'), 90]]), revision), /revision/);
  assert.equal(await readFile(resolve(directory, 'catalog/index.json'), 'utf8'), changed);
  assert.equal(JSON.parse(await readFile(resolve(directory, url), 'utf8')).files[0].size, 30);
});
