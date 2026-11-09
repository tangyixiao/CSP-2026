import test from 'node:test';
import assert from 'node:assert/strict';
import { groupContestants, sortContestants, sampleContestant, sampleProblem } from '../src/archive-browse.js';

const file = (contestant, problem = 'hub', size = 10, province = 'ZJ', group = 'S', name = `${problem}.cpp`) => ({ path: `${province}/${group}/${contestant}/${problem}/${name}`, contestant: contestant.trim().toUpperCase(), problem, size, name });

test('directory identities preserve original casing and whitespace instead of merging normalized labels', () => {
  const rows = groupContestants([file('ZJ-S00002'), file(' ZJ-S00002'), file('Zj-S00002')]);
  assert.equal(rows.length, 3);
  assert.deepEqual(new Set(rows.map(row => row.id)), new Set(['ZJ/S/ZJ-S00002', 'ZJ/S/ ZJ-S00002', 'ZJ/S/Zj-S00002']));
  assert.ok(rows.every(row => row.contestant === 'ZJ-S00002'));
});

test('filters aggregate only included files, keep known subtotals honest, and do not mutate frozen input', () => {
  const input = Object.freeze([file('ZJ-S2', 'hub', 0), file('ZJ-S2', 'crystal', null), file('ZJ-S10'), file('ZJ-S2', 'hub', 7, 'SH'), file('ZJ-S2', 'hub', 2, 'ZJ', 'J')].map(Object.freeze));
  const rows = groupContestants(input, { province: 'zj', group: 's', query: 'zj-s2' });
  assert.equal(rows.length, 1);
  assert.deepEqual(rows[0].problems, ['hub', 'crystal']);
  assert.equal(rows[0].totalBytes, null);
  assert.equal(rows[0].knownBytes, 0);
  assert.equal(rows[0].unknownSizes, 1);
  assert.equal(rows[0].discussionCount, null);
  assert.equal(groupContestants(input, { province: 'ZJ', group: 'S', problem: 'hub', query: 'zj-s2' })[0].totalBytes, 0);
  assert.equal(input.length, 5);
});

test('numeric-aware ID ordering and metadata sorting preserve unknown-last and deterministic ties in both directions', () => {
  const rows = groupContestants([file('ZJ-S10', 'hub', null), file('ZJ-S2', 'hub', 20), file('ZJ-S1', 'hub', 5)]);
  assert.deepEqual(rows.map(row => row.contestant), ['ZJ-S1', 'ZJ-S2', 'ZJ-S10']);
  assert.deepEqual(sortContestants(rows, { by: 'id', direction: 'desc' }).map(row => row.contestant), ['ZJ-S10', 'ZJ-S2', 'ZJ-S1']);
  assert.deepEqual(sortContestants(rows, { by: 'bytes', direction: 'desc' }).map(row => row.totalBytes), [20, 5, null]);
  assert.deepEqual(sortContestants(rows, { by: 'bytes' }).map(row => row.totalBytes), [5, 20, null]);
  const discussionRows = rows.map((row, index) => ({ ...row, discussionCount: [0, null, 4][index] }));
  assert.deepEqual(sortContestants(discussionRows, { by: 'discussions', direction: 'desc' }).map(row => row.discussionCount), [4, 0, null]);
  assert.deepEqual(sortContestants([...rows].reverse(), { by: 'files', direction: 'desc' }).map(row => row.id), [...rows].map(row => row.id).sort());
  assert.deepEqual(rows.map(row => row.contestant), ['ZJ-S1', 'ZJ-S2', 'ZJ-S10']);
});

test('random people are equally weighted directory identities regardless of file count and skip previous when possible', () => {
  const rows = groupContestants([...Array.from({ length: 10 }, (_, index) => file('ZJ-S1', `p${index}`)), file('ZJ-S2')]);
  const draws = Array.from({ length: 100 }, (_, index) => sampleContestant(rows, { random: () => (index + .5) / 100 }).id);
  assert.equal(draws.filter(id => id === rows[0].id).length, 50);
  assert.equal(draws.filter(id => id === rows[1].id).length, 50);
  assert.equal(sampleContestant([...rows, rows[0]], { random: () => .75 }).id, rows[1].id);
  assert.equal(sampleContestant(rows, { previousId: rows[0].id, random: () => 0 }).id, rows[1].id);
  assert.equal(sampleContestant([rows[0]], { previousId: rows[0].id }).id, rows[0].id);
  assert.equal(sampleContestant([]), null);
});

test('random problems deduplicate variants and respect exact contestant scope without file-count weighting', () => {
  const files = [...Array.from({ length: 10 }, (_, index) => file('ZJ-S1', 'hub', 1, 'ZJ', 'S', `hub${index}.cpp`)), file('ZJ-S1', 'crystal'), file('ZJ-S2', 'subway')];
  assert.equal(sampleProblem(files, { contestant: 'ZJ/S/ZJ-S1', random: () => .75 }), 'crystal');
  assert.equal(sampleProblem(files, { contestant: groupContestants(files)[0], previousProblem: 'hub', random: () => 0 }), 'crystal');
  assert.equal(sampleProblem(files, { contestant: 'ZJ/S/ZJ-S2', previousProblem: 'subway' }), 'subway');
  assert.equal(sampleProblem(files, { contestant: 'missing' }), null);
  assert.equal(sampleProblem([]), null);
});

test('malformed records get explicit fallbacks and invalid sizes never become zeros', () => {
  const rows = groupContestants([{ path: 'odd/a.cpp', size: '20', problem: 'x' }, { path: 'other.cpp', size: -1 }, null]);
  assert.equal(rows.length, 2);
  assert.ok(rows.every(row => row.identityValid === false && row.totalBytes === null && row.knownBytes === 0));
  assert.equal(sampleContestant(rows, { random: () => 1 }), rows[1]);
  assert.equal(sampleContestant(rows, { random: () => Number.NaN }), rows[0]);
});
