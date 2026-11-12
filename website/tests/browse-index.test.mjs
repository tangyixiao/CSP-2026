import test from 'node:test';
import assert from 'node:assert/strict';
import { buildBrowseIndex, decodeBrowseIndex, createBrowseLoader } from '../src/browse-index.js';
import { browseContestants, loadScopeCatalogs, sortContestants } from '../src/archive-browse.js';

const revision = 'a'.repeat(40);
const groups = ['AH', 'BJ', 'ZJ'].map(province => ({ key: `${province}-S`, province, group: 'S', url: `catalog/${province}-S.json`, fileCount: 2, extraFileCount: 1 }));
const index = { revision, groups, browseIndex: { schemaVersion: 1 } };
const shards = Object.fromEntries(groups.map((g, i) => [g.url, {
  files: [{ path: `${g.province}/S/ ${g.key}1 /hub/中文.cpp`, name: '中文.cpp', problem: 'hub', size: i * 10, blob: 'f'.repeat(40) }, { path: `${g.province}/S/ ${g.key}1 /crystal/old.cpp.bak`, name: 'old.cpp.bak', problem: 'crystal', size: null }],
  extraFiles: [{ path: `${g.province}/S/ ${g.key}1 /extra/raw.bin`, name: 'raw.bin', size: 0, previewable: false }],
}]));
const signature = files => browseContestants(files).map(({ id, files, totalBytes, knownBytes, unknownSizes, problems }) => ({ id, paths: files.map(f => f.path), totalBytes, knownBytes, unknownSizes, problems }));

test('compact nationwide index preserves raw folder/file identity, full metrics and search semantics', async () => {
  const packed = await buildBrowseIndex(index, shards, 'S');
  assert.ok(!JSON.stringify(packed).includes('f'.repeat(40)));
  const decoded = decodeBrowseIndex(packed, index, 'S');
  const old = await loadScopeCatalogs(groups, g => shards[g.url]);
  const next = await loadScopeCatalogs(groups, g => decoded.get(g.key));
  assert.deepEqual(signature(next.files), signature(old.files));
  for (const query of ['', '中文.cpp', 'extra/raw.bin', 'ZJ/S/', 'crystal']) for (const problem of ['', 'hub', 'crystal']) {
    const before = browseContestants(old.files, { query, problem });
    const after = browseContestants(next.files, { query, problem });
    for (const by of ['id', 'files', 'bytes']) for (const direction of ['asc', 'desc']) {
      assert.deepEqual(sortContestants(after, { by, direction }).map(r => [r.id, r.matchedFileCount, r.files.length]), sortContestants(before, { by, direction }).map(r => [r.id, r.matchedFileCount, r.files.length]));
    }
  }
  assert.throws(() => decodeBrowseIndex({ ...packed, revision: 'b'.repeat(40) }, index, 'S'), /版本/);
  assert.throws(() => decodeBrowseIndex({ ...packed, groups: packed.groups.slice(1) }, index, 'S'), /缺少/);
});

test('one nationwide request is coalesced across provinces, searches and later small-scope switches', async () => {
  const packed = await buildBrowseIndex(index, shards, 'S');
  let requests = 0, full = 0;
  const load = createBrowseLoader(index, async () => { requests++; return packed; }, g => { full++; return shards[g.url]; });
  const first = await load(groups);
  const second = await load(groups.slice(1));
  assert.equal(first.files.length, 9); assert.equal(second.files.length, 6);
  assert.equal(requests, 1); assert.equal(full, 0);
});

test('small cold scopes and old deployments retain full catalogs; failed compact requests retry without a download storm', async () => {
  const packed = await buildBrowseIndex(index, shards, 'S');
  let requests = 0, full = 0, reject = true;
  const load = createBrowseLoader(index, async () => { requests++; if (reject) throw Error('offline'); return packed; }, g => { full++; return shards[g.url]; });
  assert.equal((await load(groups.slice(0, 1))).files.length, 3);
  const failed = await load(groups);
  assert.equal(failed.failedGroups.length, 3); assert.equal(failed.files.length, 0); assert.equal(requests, 1);
  reject = false;
  assert.equal((await load(groups)).files.length, 9); assert.equal(requests, 2); assert.equal(full, 1);
  const legacy = createBrowseLoader({ ...index, browseIndex: undefined }, () => { throw Error('unexpected'); }, g => shards[g.url]);
  assert.equal((await legacy(groups)).files.length, 9);
  assert.equal((await load(groups, { isCurrent: () => false })).cancelled, true);
});

test('one failed index request stays failed for the whole multi-worker pass and can retry on the next pass', async () => {
  const many = Array.from({ length: 29 }, (_, i) => ({ key: `test${i}`, group: 'S' }));
  let requests = 0;
  const load = createBrowseLoader(index, async () => { requests++; throw Error('offline'); }, () => { throw Error('unexpected'); });
  assert.equal((await load(many)).failedGroups.length, 29);
  assert.equal(requests, 1);
  await load(many);
  assert.equal(requests, 2);
});
