import test from 'node:test';
import assert from 'node:assert/strict';
import { DISCOVERY_LIMITS, selectDiscoveryGroups, selectDiscoveryFiles, discoveryKind } from '../src/discovery.js';

const fixed = () => .51;
const group = (province, value = 'S') => ({ key: `${province}-${value}`, province, group: value });
const file = (province, contestant, problem = 'hub', name = `${problem}.cpp`, value = 'S') => ({ path: `${province}/${value}/${contestant}/${problem}/${name}`, problem, name, size: 10 });
const shard = (province, files, value = 'S') => ({ group: group(province, value), files });

test('group sampling clamps metadata requests and spreads provinces without mutating the catalog', () => {
  const input = Object.freeze(['ZJ', 'BJ', 'SH', 'AH', 'SC', 'GD', 'HB'].flatMap(province => ['J', 'S'].map(value => Object.freeze(group(province, value)))));
  const before = JSON.stringify(input);
  const selected = selectDiscoveryGroups(input, { limit: 1000, random: fixed });
  assert.equal(selected.length, DISCOVERY_LIMITS.groups);
  assert.equal(new Set(selected.map(item => item.province)).size, 6);
  assert.equal(JSON.stringify(input), before);
  assert.equal(selectDiscoveryGroups(input, { limit: 0 }).length, 0);
  assert.equal(selectDiscoveryGroups(input, { limit: -5 }).length, 0);
});

test('group scopes and official problem ownership work independently of catalog order', () => {
  const input = [group('ZJ', 'J'), group('ZJ'), group('BJ', 'J'), group('BJ'), group('BAD'), { province: 'ZJ', group: 'X' }, null];
  assert.deepEqual(selectDiscoveryGroups(input, { province: 'ZJ', group: 'J', random: fixed }), [input[0]]);
  assert.deepEqual(new Set(selectDiscoveryGroups(input, { problem: 'hub', random: fixed }).map(item => item.group)), new Set(['S']));
  assert.deepEqual(new Set(selectDiscoveryGroups(input, { problem: 'card', random: fixed }).map(item => item.group)), new Set(['J']));
  assert.deepEqual(selectDiscoveryGroups(input, { group: 'J', problem: 'hub' }), []);
  assert.deepEqual(selectDiscoveryGroups(input, { problem: 'made-up' }), []);
});

test('groups avoid the previous batch whenever fresh groups can fill the bounded selection', () => {
  const previous = [group('ZJ'), group('BJ'), group('SC')];
  const fresh = [group('ZJ', 'J'), group('BJ', 'J'), group('SC', 'J')];
  const result = selectDiscoveryGroups([...previous, ...fresh], { previousKeys: previous.map(item => item.key), limit: 3, random: fixed });
  assert.deepEqual(new Set(result.map(item => item.key)), new Set(fresh.map(item => item.key)));
  assert.equal(selectDiscoveryGroups(previous, { previousKeys: previous.map(item => item.key), random: fixed }).length, 3);
  assert.equal(selectDiscoveryGroups([...fresh, ...fresh], { random: fixed }).length, 3);
});

test('file sampling bounds source reads and first spreads groups and contestant directories', () => {
  const input = ['ZJ', 'BJ', 'SH', 'AH', 'SC', 'GD', 'HB'].map(province => shard(province, Array.from({ length: 20 }, (_, index) => file(province, `${province}-${Math.floor(index / 2)}`, 'hub', `${index}.cpp`))));
  const result = selectDiscoveryFiles(input, { limit: 1000, random: fixed });
  assert.equal(result.files.length, DISCOVERY_LIMITS.files);
  assert.equal(new Set(result.files.map(item => item.path.split('/')[0])).size, 6);
  assert.equal(new Set(result.files.map(item => item.path.split('/').slice(0, 3).join('/'))).size, 9);
  assert.ok(result.files.every(item => !item.path.startsWith('HB/')));
  assert.equal(selectDiscoveryFiles(input, { limit: DISCOVERY_LIMITS.homeFiles, random: fixed }).files.length, 3);
});

test('file sampling avoids prior paths, allows honest small batches, and falls back only when all paths repeat', () => {
  const old = file('ZJ', 'one'), fresh = file('ZJ', 'two');
  const result = selectDiscoveryFiles([shard('ZJ', [old, fresh])], { previousPaths: [old.path], random: fixed });
  assert.deepEqual(result, { files: [fresh], repeated: 0 });
  assert.deepEqual(selectDiscoveryFiles([shard('ZJ', [old])], { previousPaths: [old.path], random: fixed }), { files: [old], repeated: 1 });
  assert.deepEqual(selectDiscoveryFiles([], { random: fixed }), { files: [], repeated: 0 });
});

test('official task filters reject mismatched groups while unfiltered exploration preserves unknown metadata and raw paths', () => {
  const original = Object.freeze({ path: 'ZJ/S/ Zj-S0001 /Odd Folder/Save Failed.CPP~', size: null });
  const known = Object.freeze(file('ZJ', 'ZJ-S2'));
  const wrongGroup = Object.freeze(file('ZJ', 'ZJ-J1', 'hub', 'hub.cpp', 'J'));
  const unknown = Object.freeze(file('ZJ', 'ZJ-S3', 'unknown'));
  const files = Object.freeze([original, known, unknown]);
  const input = Object.freeze([Object.freeze(shard('ZJ', files)), Object.freeze(shard('ZJ', Object.freeze([wrongGroup]), 'J'))]);
  const before = JSON.stringify(input);
  assert.deepEqual(selectDiscoveryFiles(input, { problem: 'hub', random: fixed }).files, [known]);
  const result = selectDiscoveryFiles(input, { random: fixed });
  assert.ok(result.files.includes(original));
  assert.equal(result.files.find(item => item === original).path, 'ZJ/S/ Zj-S0001 /Odd Folder/Save Failed.CPP~');
  assert.equal(original.size, null);
  assert.equal(JSON.stringify(input), before);
});

test('bad paths, shard mismatches and duplicate records never become preview requests', () => {
  const good = file('ZJ', 'one');
  const input = [shard('ZJ', [good, good, null, { path: 'ZJ/S/a/../evil.cpp' }, { path: 'ZJ/S/a/b\\evil.cpp' }, { path: 'ZJ/S/a//evil.cpp' }, { path: 'ZJ/S/a/evil\u0000.cpp' }, file('BJ', 'other')])];
  assert.deepEqual(selectDiscoveryFiles(input, { random: fixed }).files, [good]);
  assert.deepEqual(selectDiscoveryFiles(input, { limit: -1 }).files, []);
});

test('descriptive labels use only observable path or byte metadata', () => {
  assert.equal(discoveryKind({ ...file('ZJ', 'one'), size: 0 }), '0 字节文件');
  assert.equal(discoveryKind(file('ZJ', 'one', 'hub', 'hub.cpp.bak')), '带备份后缀');
  assert.equal(discoveryKind({ path: 'ZJ/S/one/extra/nested/a.cpp' }), '嵌套目录');
  assert.equal(discoveryKind({ path: 'ZJ/S/one/mycode/a.cpp', problem: 'hub' }), '题目目录之外');
  assert.equal(discoveryKind({ ...file('ZJ', 'one'), size: null }), '随机阅读');
});
