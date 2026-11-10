import test from 'node:test';
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { normalizeSnapshot } from '../scripts/sync-discussion-metadata.mjs';
import { associateDiscussionSnapshot, MAPPING_SCOPE } from '../scripts/discussion-associations.mjs';

const revision = 'a'.repeat(40);
const key = term => `csp-2026-v1-${createHash('sha256').update(term).digest('hex')}`;
const record = (id, term) => ({ id, title: key(term), url: `https://github.com/tangyixiao/CSP-2026/discussions/${id}`, updatedAt: '2026-11-09T16:00:00Z', comments: { totalCount: 2 }, reactions: { totalCount: 1 } });
const files = [
  { path: 'ZJ/S/ Zj-S1/hub/hub.cpp', contestant: 'ZJ-S1', problem: 'hub' },
  { path: 'ZJ/S/ Zj-S1/crystal/crystal.cpp', contestant: 'ZJ-S1', problem: 'crystal' },
  { path: 'SH/S/SH-S2/hub/hub.cpp', contestant: 'SH-S2', problem: 'hub' },
];
const side = (province, contestant, problem) => ({ province, group: 'S', contestant, problem });
const cases = [{ id: 'same-person', left: side('ZJ', 'ZJ-S1', 'hub'), right: side('ZJ', 'ZJ-S1', 'crystal') }];

test('single files, recorded cases and their exact pairs map to raw directories without counting one thread twice for one person', () => {
  const nodes = [record('1', `files:${files[0].path}`), record('2', 'case:same-person'), record('3', `files:${[files[1].path, files[0].path].sort().join('|')}`)];
  const snapshot = normalizeSnapshot({ nodes, complete: true, syncedAt: '2026-11-09T16:00:00Z' });
  const result = associateDiscussionSnapshot(snapshot, { revision, files, cases });
  assert.equal(result.catalogRevision, revision);
  assert.equal(result.mappingScope, MAPPING_SCOPE);
  assert.deepEqual(result.byContestant['ZJ/S/ Zj-S1'], { threadCount: 3, commentCount: 6, reactionCount: 3, updatedAt: '2026-11-09T16:00:00Z', threadIds: ['1', '2', '3'] });
  assert.equal(result.mappedThreadCount, 3);
  assert.equal(result.unmappedThreadCount, 0);
});

test('arbitrary hashed pairs stay unmapped and ambiguous case paths do not invent an exact file pair', () => {
  const unknownPair = `files:${[files[0].path, files[2].path].sort().join('|')}`;
  const snapshot = normalizeSnapshot({ nodes: [record('1', unknownPair), record('2', 'case:missing')], complete: true });
  const result = associateDiscussionSnapshot(snapshot, { revision, files, cases });
  assert.deepEqual(result.byContestant, {});
  assert.equal(result.unmappedThreadCount, 2);
  const duplicates = [...files, { ...files[0], path: 'ZJ/S/ Zj-S1/hub/backup.cpp' }];
  const pair = `files:${[files[0].path, files[1].path].sort().join('|')}`;
  assert.equal(associateDiscussionSnapshot(normalizeSnapshot({ nodes: [record('3', pair)], complete: true }), { revision, files: duplicates, cases }).unmappedThreadCount, 1);
});

test('catalog revision guards and complete-zero distinction survive association', () => {
  const zero = normalizeSnapshot({ nodes: [], complete: true });
  const result = associateDiscussionSnapshot(zero, { revision });
  assert.equal(result.unmappedThreadCount, 0);
  assert.equal(result.complete, true);
  const unavailable = associateDiscussionSnapshot(normalizeSnapshot({ complete: false }), { revision });
  assert.equal(unavailable.mappedThreadCount, null);
  assert.equal(unavailable.unmappedThreadCount, null);
  assert.throws(() => associateDiscussionSnapshot({ ...zero, catalogRevision: 'b'.repeat(40) }, { revision }), /revision/);
  assert.throws(() => associateDiscussionSnapshot(zero, { revision: 'bad' }), /revision/);
});
