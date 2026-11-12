import test from 'node:test';
import assert from 'node:assert/strict';
import * as browse from '../src/archive-browse.js';

const junior = ['and', 'card', 'string', 'travel'];
const senior = ['crystal', 'hub', 'migrate', 'subway'];

test('problem choices contain only the selected group, and the combined scope contains both', () => {
  assert.equal(typeof browse.contestProblemOptions, 'function');
  assert.deepEqual(browse.contestProblemOptions('S'), senior);
  assert.deepEqual(browse.contestProblemOptions('J'), junior);
  assert.deepEqual(browse.contestProblemOptions('all'), [...junior, ...senior]);
  const options = browse.contestProblemOptions('S'); options.pop();
  assert.deepEqual(browse.contestProblemOptions('S'), senior);
});

test('opposite-group or unknown URL filters reset without changing the province/sort scope', () => {
  for (const scope of ['scope=all', 'scope=single&province=ZJ', 'scope=multiple&provinces=AH,ZJ']) {
    for (const [group, invalid] of [['S', 'card'], ['J', 'hub'], ['S', 'unknown']]) {
      const route = browse.parseBrowseRoute(`?view=browse&${scope}&group=${group}&problem=${invalid}&sort=bytes&direction=desc&batch=120`, ['AH', 'ZJ']);
      assert.equal(route.problem, ''); assert.equal(route.group, group);
      assert.equal(route.sort, 'bytes'); assert.equal(route.direction, 'desc'); assert.equal(route.batch, 120);
    }
  }
  assert.equal(browse.parseBrowseRoute('?view=browse&group=S&problem=hub', ['ZJ']).problem, 'hub');
  assert.equal(browse.parseBrowseRoute('?view=browse&group=J&problem=card', ['ZJ']).problem, 'card');
  assert.equal(browse.parseBrowseRoute('?view=browse&group=all&problem=card', ['ZJ']).problem, 'card');
});
