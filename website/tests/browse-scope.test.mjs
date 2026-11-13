import test from 'node:test';
import assert from 'node:assert/strict';
import * as browse from '../src/archive-browse.js';

const codes = ['AH', 'BJ', 'ZJ'];
const groups = codes.flatMap(province => ['J', 'S'].map(group => ({ province, group, key: `${province}-${group}` })));
const file = (path, size = 10, problem = 'hub') => ({ path, size, problem, name: path.split('/').at(-1) });

test('legacy single-province links and explicit nationwide/multi-province routes stay distinct', () => {
  assert.deepEqual(browse.parseBrowseRoute?.('?view=browse&province=ZJ&group=all', codes), {
    view: 'browse', scope: 'single', province: 'ZJ', provinces: '', group: 'all', query: '', problem: '', sort: 'id', direction: 'asc', batch: 60, directory: '', file: '',
  });
  const multiple = browse.parseBrowseRoute?.('?scope=multiple&provinces=ZJ,BJ,ZJ,XX&sort=files&direction=desc&batch=120', codes);
  assert.equal(multiple?.scope, 'multiple');
  assert.equal(multiple?.provinces, 'BJ,ZJ');
  assert.equal(multiple?.batch, 120);
  const all = browse.parseBrowseRoute?.('?scope=all&province=ZJ&provinces=BJ&batch=100000&sort=invalid', codes);
  assert.equal(all?.province, '');
  assert.equal(all?.provinces, '');
  assert.equal(all?.batch, 60);
  assert.equal(all?.sort, 'id');
});

test('scope selection includes every selected province/group and never widens empty multi-selection to nationwide', () => {
  assert.deepEqual(browse.scopeGroups?.(groups, { scope: 'all', group: 'S' })?.map(g => g.key), ['AH-S', 'BJ-S', 'ZJ-S']);
  assert.deepEqual(browse.scopeGroups?.(groups, { scope: 'single', province: 'BJ', group: 'all' })?.map(g => g.key), ['BJ-J', 'BJ-S']);
  assert.deepEqual(browse.scopeGroups?.(groups, { scope: 'multiple', provinces: 'ZJ,BJ', group: 'J' })?.map(g => g.key), ['BJ-J', 'ZJ-J']);
  assert.deepEqual(browse.scopeGroups?.(groups, { scope: 'multiple', provinces: '', group: 'all' }), []);
});

test('filtered contestant folders keep all original files and whole-directory metrics', () => {
  const rows = Object.freeze([
    file('ZJ/S/ Zj-S2 /hub/hub.cpp', 20),
    file('ZJ/S/ Zj-S2 /crystal/crystal.cpp', 5, 'crystal'),
    { ...file('ZJ/S/ Zj-S2 /extra/original.bin', 8, ''), previewable: false },
    file('ZJ/S/ZJ-S20/hub/hub.cpp', 100),
  ].map(Object.freeze));
  const selected = browse.browseContestants?.(rows, { query: 'extra/original.bin' });
  assert.equal(selected?.length, 1);
  assert.equal(selected?.[0].id, 'ZJ/S/ Zj-S2 ');
  assert.equal(selected?.[0].files.length, 3);
  assert.equal(selected?.[0].totalBytes, 33);
  assert.equal(selected?.[0].matchedFileCount, 1);
  assert.equal(browse.browseContestants?.(rows, { problem: 'crystal' })?.[0].files.length, 3);
});

test('complete nationwide results sort across province boundaries instead of sorting one province at a time', () => {
  const files = [file('ZJ/S/ZJ-S1/hub/a.cpp', 5), file('BJ/S/BJ-S1/hub/a.cpp', 100), file('AH/S/AH-S1/hub/a.cpp', null)];
  const rows = browse.browseContestants?.(files);
  assert.deepEqual(rows && browse.sortContestants(rows, { by: 'bytes', direction: 'desc' }).map(r => r.province), ['BJ', 'ZJ', 'AH']);
  assert.deepEqual(rows && browse.sortContestants(rows, { by: 'bytes' }).map(r => r.province), ['ZJ', 'BJ', 'AH']);
});

test('folder trees preserve nested names, root files, backups, empty and download-only files without prefix collisions', () => {
  const files = [
    file('ZJ/S/ Zj-S2 /hub/原始 代码.cpp', 0),
    file('ZJ/S/ Zj-S2 /hub/nested/backup.cpp.bak'),
    { ...file('ZJ/S/ Zj-S2 /original.bin'), previewable: false },
    file('ZJ/S/ Zj-S2 extra/other.cpp'),
    file('ZJ/S/ Zj-S2 /../escape.cpp'),
  ];
  const tree = browse.contestantTree?.(files, 'ZJ/S/ Zj-S2 ');
  assert.equal(tree?.name, ' Zj-S2 ');
  assert.equal(tree?.files.length, 1);
  assert.equal(tree?.files[0].name, 'original.bin');
  assert.equal(tree?.directories[0].name, 'hub');
  assert.equal(tree?.directories[0].files[0].size, 0);
  assert.equal(tree?.directories[0].directories[0].files[0].name, 'backup.cpp.bak');
  assert.equal(tree?.fileCount, 3);
  assert.equal(browse.contestantTree?.(files, 'ZJ/S/..'), null);
});

test('exact directory route survives query encoding and rejects traversal', () => {
  const directory = 'ZJ/S/ Zj-S2 ';
  assert.equal(browse.parseBrowseRoute?.(`?view=contestant&directory=${encodeURIComponent(directory)}`, codes)?.directory, directory);
  assert.equal(browse.parseBrowseRoute?.('?view=contestant&directory=ZJ%2FS%2F..', codes)?.directory, '');
});

test('complete-scope loader bounds metadata concurrency, includes extras once and reports failures honestly', async () => {
  let active = 0, peak = 0;
  const progress = [];
  const result = await browse.loadScopeCatalogs?.(groups, async group => {
    active++; peak = Math.max(peak, active);
    await new Promise(resolve => setImmediate(resolve));
    active--;
    if (group.key === 'AH-J') throw new Error('offline');
    const path = `${group.province}/${group.group}/${group.key}1/hub/a.cpp`;
    return { files: [file(path), file('XX/S/wrong/hub/a.cpp')], extraFiles: [file(path), file(`${group.province}/${group.group}/${group.key}1/data.bin`)] };
  }, { onProgress: value => progress.push(value), concurrency: 100 });
  assert.ok(result, 'scope loader is implemented');
  assert.ok(peak <= 4 && peak > 1);
  assert.equal(result.files.length, 10);
  assert.equal(result.failedGroups.length, 1);
  assert.equal(result.failedGroups[0].group.key, 'AH-J');
  assert.equal(progress.at(-1).completed, groups.length);
  assert.equal(result.files.filter(f => f.previewable === false).length, 5);
  assert.ok(!result.files.some(f => f.path.startsWith('XX/')));
});

test('obsolete scope loads stop scheduling work and do not report stale progress', async () => {
  let current = true, requests = 0, reported = 0;
  const result = await browse.loadScopeCatalogs?.(groups, async () => {
    requests++;
    current = false;
    return { files: [] };
  }, { isCurrent: () => current, onProgress: () => reported++, concurrency: 1 });
  assert.equal(result?.cancelled, true);
  assert.equal(requests, 1);
  assert.equal(reported, 0);
});

test('the generated catalog preserves extra files inside unusual raw contestant directory names', async () => {
  const { buildCatalog } = await import('../scripts/generate-catalog.mjs');
  const paths = ['ZJ/S/ Zj-S1 /hub/hub.cpp', 'ZJ/S/ Zj-S1 /nested/original.bin', 'ZJ/S/ZJ-S1/hub/hub.cpp', 'ZJ/S/Zj-S1/hub/hub.cpp'];
  const { index, shards } = buildCatalog(paths.map(path => ({ path, blob: '1'.repeat(40), mode: '100644', type: 'blob', size: 10 })), 'a'.repeat(40));
  assert.equal(index.totalContestants, 3, 'folder identities must not collapse case or whitespace variants');
  assert.equal(shards['ZJ-S'].extraFiles?.[0].path, paths[1]);
});
