import test from 'node:test';
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { readFile } from 'node:fs/promises';
import { loadSource } from '../src/source.js';

const reviewedExtensionlessSources = [
  ['HI/J/HI-J00346/string/and', '93f22b8abc69341c6e27992a3ffe64c3be1dd26d'],
  ['HI/J/HI-J00346/string/card', '93f22b8abc69341c6e27992a3ffe64c3be1dd26d'],
  ['HI/J/HI-J00346/string/string', '93f22b8abc69341c6e27992a3ffe64c3be1dd26d'],
  ['HI/J/HI-J00346/travel/travel', '62e77c53c22e0e8415bb063af8ae8c9b14d87107'],
];

async function generator() {
  let implementation;
  try {
    implementation = await import('../scripts/generate-catalog.mjs');
  } catch (error) {
    assert.fail(`Catalog generator must be importable without running Git: ${error.message}`);
  }
  return implementation;
}

test('NUL tree parsing preserves spaces, Chinese text and tabs in paths', async () => {
  const { parseLsTree } = await generator();
  const blob = '1'.repeat(40);
  const path = 'AH/J/  AH-J00752/纸牌 游戏/card\t副本.cpp';
  assert.deepEqual(parseLsTree(`100644 blob ${blob}\t${path}\0`), [
    { mode: '100644', type: 'blob', blob, size: null, path },
  ]);
  assert.equal(parseLsTree(`100644 blob ${blob}      123\tFJ/S/FJ-S00001/subway/subway.cpp\0`)[0].size, 123);
});

test('source classification keeps original unusual paths and derives the problem', async () => {
  const { parseSourcePath } = await generator();
  const path = 'GX/J/ GX-J00482/纸牌游戏/card .cpp.bak.gz';
  assert.deepEqual(parseSourcePath(path), {
    path, province: 'GX', group: 'J', contestant: 'GX-J00482',
    contestantDirectory: ' GX-J00482', problem: 'card', name: 'card .cpp.bak.gz',
  });
  assert.equal(parseSourcePath('AH/S/AH-S00578/新建文件夹/crystal.cpp').problem, 'crystal');
  assert.equal(parseSourcePath('FJ/S/FJ-S00001/迁徙/solution.txt').problem, 'migrate');
  assert.equal(parseSourcePath('FJ/S/FJ-S00001/subway/subway.in.cpp').problem, 'subway');
  const mixedCase = parseSourcePath('TJ/S/Tj-S00542/crystal/crystal.cpp');
  assert.equal(mixedCase.contestant, 'TJ-S00542');
  assert.equal(mixedCase.path, 'TJ/S/Tj-S00542/crystal/crystal.cpp');
  assert.equal(mixedCase.contestantDirectory, 'Tj-S00542');
});

test('catalog excludes input/output, archives, statistics and non-contest roots', async () => {
  const { parseSourcePath } = await generator();
  const excluded = [
    'test-data/and/and.cpp', 'website/src/main.cpp', 'FJ/X/FJ-X00001/test.cpp',
    'FJ/S/FJ-S00001/subway/subway.in', 'FJ/S/FJ-S00001/subway/subway.out',
    'FJ/S/FJ-S00001/subway/subway.ans', 'FJ/S/FJ-S00001/subway/subway.in.txt',
    'FJ/S/FJ-S00001/subway/subway.out.txt', 'FJ/S/FJ-S00001/subway/subway.ans.gz',
    'FJ/S/FJ-S00001/subway/code.zip', 'FJ/S/archive/subway/old.cpp',
    'FJ/S/统计汇总/subway/results.txt',
  ];
  for (const path of excluded) assert.equal(parseSourcePath(path), null, path);
});

test('reviewed extensionless sources require both their original path and Git blob', async () => {
  const { parseSourcePath } = await generator();
  for (const [path, blob] of reviewedExtensionlessSources) {
    const source = parseSourcePath(path, blob);
    assert.equal(source?.path, path);
    assert.equal(source?.language, 'cpp');
    assert.equal(parseSourcePath(path), null, `missing blob: ${path}`);
    assert.equal(parseSourcePath(path, '0'.repeat(40)), null, `wrong blob: ${path}`);
  }
  assert.equal(parseSourcePath('HI/J/HI-J00346/string/other', reviewedExtensionlessSources[0][1]), null);
  assert.equal(parseSourcePath('HI/J/HI-J00346/string/and.cpp', '0'.repeat(40)).name, 'and.cpp');
});

test('catalog includes reviewed extensionless C++ files with their language and excludes changed blobs', async () => {
  const { buildCatalog } = await generator();
  const reviewed = reviewedExtensionlessSources.map(([path, blob]) => ({ path, blob, type: 'blob', mode: '100644' }));
  const ordinaryPath = 'HI/J/HI-J00001/and/and.cpp';
  const { index, shards } = buildCatalog([
    ...reviewed,
    { ...reviewed[0], blob: '0'.repeat(40) },
    { ...reviewed[0], path: 'HI/J/HI-J00346/string/other' },
    { ...reviewed[0], path: ordinaryPath },
  ], 'a'.repeat(40));
  assert.equal(index.totalFiles, 5);
  assert.equal(index.totalContestants, 2);
  const files = shards['HI-J'].files;
  for (const [path, blob] of reviewedExtensionlessSources) {
    const file = files.find((item) => item.path === path);
    assert.equal(file?.blob, blob);
    assert.equal(file?.language, 'cpp');
  }
  assert.ok(files.some((file) => file.path === ordinaryPath));
});

test('source loading uses the catalog language for extensionless files and keeps extension fallback', async (t) => {
  const bytes = new TextEncoder().encode('int main() { return 0; }\n');
  const blob = createHash('sha1').update(`blob ${bytes.length}\0`).update(bytes).digest('hex');
  const revision = 'f'.repeat(40);
  t.mock.method(globalThis, 'fetch', async () => new Response(JSON.stringify({ [blob]: Buffer.from(bytes).toString('base64') })));
  const reviewed = await loadSource({ path: reviewedExtensionlessSources[0][0], blob, language: 'cpp' }, { revision });
  assert.equal(reviewed.language, 'cpp');
  assert.equal(reviewed.text, 'int main() { return 0; }\n');
  const ordinary = await loadSource({ path: 'HI/J/HI-J00001/and/and.cpp', blob }, { revision });
  assert.equal(ordinary.language, 'cpp');
});

test('group counts count contestants once across multiple files and keep J/S separate', async () => {
  const { buildCatalog } = await generator();
  const paths = [
    'FJ/S/FJ-S00001/subway/subway.cpp', 'FJ/S/FJ-S00001/crystal/crystal.cpp',
    'FJ/S/FJ-S00002/subway/subway.cpp', 'FJ/J/FJ-J00001/and/and.cpp',
    'FJ/S/FJ-S00002/subway/subway.in', 'README.md',
  ];
  const entries = paths.map((path, i) => ({ path, mode: '100644', type: 'blob', blob: String(i).repeat(40), size: null }));
  const { index, shards } = buildCatalog(entries, 'a'.repeat(40));
  assert.equal(index.totalFiles, 4);
  assert.equal(index.totalContestants, 3);
  assert.deepEqual(index.groups.map(({ key, fileCount, contestantCount }) => ({ key, fileCount, contestantCount })), [
    { key: 'FJ-J', fileCount: 1, contestantCount: 1 },
    { key: 'FJ-S', fileCount: 3, contestantCount: 2 },
  ]);
  assert.equal(index.groups[1].label, '福建 · CSP-S');
  assert.equal(index.groups[1].url, 'catalog/FJ-S.json');
  assert.equal(shards['FJ-S'].files.length, 3);
  assert.equal(shards['FJ-S'].files[0].blob.length, 40);
  assert.equal(index.sizeAvailability, 'not-collected');
});

test('case records keep all pairs without duplicating a pair/problem or inventing a source', async () => {
  const cases = JSON.parse(await readFile(new URL('../src/cases.json', import.meta.url), 'utf8'));
  assert.equal(cases.length, 39);
  assert.equal(cases.filter((item) => item.left.group === 'S').length, 27);
  assert.equal(cases.filter((item) => item.left.group === 'J').length, 12);
  assert.equal(new Set(cases.map((item) => item.id)).size, 39);
  const comparisons = cases.map(({ left, right }) => `${[left.contestant, right.contestant].sort().join('/')}/${left.problem}`);
  assert.equal(new Set(comparisons).size, 39);
  const multiProblem = cases.filter((item) => item.left.contestant === 'SD-S00639');
  assert.deepEqual(multiProblem.map((item) => item.left.problem).sort(), ['crystal', 'migrate']);
  assert.equal(new Set(cases.map(({ left, right }) => [left.contestant, right.contestant].sort().join('/'))).size, 31);
  for (const item of cases) {
    assert.equal(item.left.problem, item.right.problem);
    assert.equal(item.left.group, item.right.group);
    assert.ok(item.claim.length > 0);
    assert.equal(typeof item.note, 'string');
  }
  const secondJPost = cases.filter((item) => item.left.province === 'SC');
  const unknownSources = secondJPost.filter((item) => item.left.group === 'J');
  assert.equal(unknownSources.length, 2);
  assert.ok(unknownSources.every((item) => item.sourceUrl === null));
  const supplementary = cases.filter((item) => item.sourceUrl?.includes('/1427323'));
  assert.equal(supplementary.length, 1);
  assert.equal(supplementary[0].left.contestant, 'LN-S00088');
  assert.equal(supplementary[0].right.contestant, 'LN-S00089');
  assert.equal(supplementary[0].left.problem, 'migrate');
});
