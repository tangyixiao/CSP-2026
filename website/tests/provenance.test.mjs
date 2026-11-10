import test from 'node:test';
import assert from 'node:assert/strict';
import { getProvenance, SOURCE_INDEX_REVISION } from '../src/provenance.js';

const revision = 'e55a367faa8b689ad26e152af821fdfce43c24b1';

test('regional provenance links to the pinned curated index and distinguishes archive copy from publisher', () => {
  const item = getProvenance('CQ/S/CQ-S00001/crystal/crystal.cpp', revision);
  assert.equal(item.archiveUrl, `https://github.com/tangyixiao/CSP-2026/blob/${revision}/CQ/S/CQ-S00001/crystal/crystal.cpp`);
  assert.equal(item.sourceUrl, `https://github.com/tangyixiao/CSP-2026/blob/${SOURCE_INDEX_REVISION}/SOURCES.md#contestant-files-and-official-material`);
  assert.notEqual(SOURCE_INDEX_REVISION, revision);
  assert.match(item.verificationScope, /原始发布者尚未独立核实/);
  assert.match(item.licenseScope, /不授予这些文件的再分发权/);
});

test('a group-specific supplement never claims all regional files have been checked', () => {
  const supplement = getProvenance('AH/S/AH-S00001/crystal.cpp', revision);
  assert.match(supplement.verificationScope, /不能据省份和组别认定当前文件/);
  const unrelated = getProvenance('AH/J/AH-J00001/a.cpp', revision);
  assert.equal(unrelated.hasRegionalRecord, false);
  assert.equal(unrelated.title, '原始发布记录待补');
  assert.equal(getProvenance('HI/S/HI-S00001/a.cpp', revision).hasRegionalRecord, false);
});

test('unknown records stay explicitly incomplete and archive URL validation applies', () => {
  const item = getProvenance('SH/S/SH-S01518/crystal/crystal.cpp', revision);
  assert.equal(item.hasRegionalRecord, false);
  assert.match(item.verificationScope, /GitHub 归档副本/);
  assert.match(item.verificationScope, /尚未整理/);
  assert.throws(() => getProvenance('SH/S/../a.cpp', revision));
  assert.throws(() => getProvenance('SH/S/a.cpp', 'main'));
});
