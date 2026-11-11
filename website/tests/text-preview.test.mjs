import test from 'node:test';
import assert from 'node:assert/strict';
import { gzipSync } from 'node:zlib';
import { Readable } from 'node:stream';
import { mkdtemp, readFile, mkdir, rm } from 'node:fs/promises';
import { fileURLToPath } from 'node:url';
import path from 'node:path';
import * as browse from '../src/archive-browse.js';
import { enrichCatalogSizes } from '../scripts/catalog-sizes.mjs';
import { writeSourcePacks } from '../scripts/generate-source-packs.mjs';

const sha = value => value.repeat(40), revision = sha('f');
const file = (name, extra = {}) => ({ path: `ZJ/S/ZJ-S1/hub/${name}`, blob: sha('1'), size: 40, ...extra });

test('plain-text extra files enter both the folder and reader without extension overrides', async () => {
  const text = file('hack.1', { previewable: true, previewKind: 'text' });
  const binary = file('program.cpp', { blob: sha('2'), previewable: true, previewKind: 'hex' });
  const group = { key: 'ZJ-S', province: 'ZJ', group: 'S' };
  const loaded = await browse.loadScopeCatalogs([group], async () => ({ files: [binary], extraFiles: [text] }));
  assert.equal(loaded.files.find(f => f.path === text.path).previewable, true);
  assert.equal(loaded.files.find(f => f.path === binary.path).previewable, true);
  assert.deepEqual(browse.catalogPreviewFiles?.({ files: [binary], extraFiles: [text] })?.map(f => f.path), [binary.path, text.path]);
});

test('preview metadata follows inspected bytes and reports concrete failure reasons', () => {
  const index = { revision, groups: [{ url: 'catalog/ZJ-S.json' }] };
  const shards = { 'catalog/ZJ-S.json': { files: [file('normal.cpp'), file('binary.cpp', { blob: sha('2') })], extraFiles: [file('input.1', { blob: sha('3') }), file('large', { blob: sha('4') })] } };
  const sizes = new Map([[sha('1'), 20], [sha('2'), 30], [sha('3'), 40], [sha('4'), 3 * 1024 * 1024]]);
  const preview = new Map([[sha('1'), { previewable: true, previewKind: 'text' }], [sha('2'), { previewable: true, previewKind: 'hex' }], [sha('3'), { previewable: true, previewKind: 'text' }], [sha('4'), { previewable: false, previewReason: 'too-large' }]]);
  const enriched = enrichCatalogSizes(index, shards, sizes, revision, preview);
  assert.equal(enriched.shards['catalog/ZJ-S.json'].extraFiles[0].previewable, true);
  assert.equal(enriched.shards['catalog/ZJ-S.json'].files[1].previewKind, 'hex');
  assert.equal(enriched.index.previewAvailability, 'complete');
  assert.deepEqual(enriched.index.previewCoverage, { textFiles: 2, hexFiles: 1, unavailableFiles: 1, uncheckedFiles: 0, reasons: { 'too-large': 1 } });
});

test('every packed blob is inspected without changing its original bytes', async context => {
  const scratch = fileURLToPath(new URL('../../work/', import.meta.url));
  await mkdir(scratch, { recursive: true });
  const dir = await mkdtemp(path.join(scratch, 'text-preview-test-'));
  context.after(() => rm(dir, { recursive: true, force: true }));
  const original = Buffer.from('0 100\r\n135 125\r\n');
  const seen = [];
  await writeSourcePacks(Readable.from([{ sha: sha('a'), bytes: original }]), dir, { onObject: object => seen.push({ sha: object.sha, bytes: Buffer.from(object.bytes) }) });
  assert.equal(seen.length, 1);
  assert.deepEqual(seen[0].bytes, original);
  const pack = JSON.parse(await readFile(path.join(dir, 'aaa.json'), 'utf8'));
  assert.deepEqual(Buffer.from(pack[sha('a')], 'base64'), original);
});

test('unverified extra files stay explicit while existing legacy source candidates still work', () => {
  const code = file('hub.cpp'), unknown = file('unknown');
  assert.deepEqual(browse.catalogPreviewFiles?.({ files: [code], extraFiles: [unknown] }).map(f => f.path), [code.path]);
  assert.equal(browse.previewUnavailableLabel?.({ previewReason: 'binary' }), '二进制文件');
  assert.equal(browse.previewUnavailableLabel?.({ previewReason: 'too-large' }), '超过 2 MiB 预览上限');
  assert.equal(browse.previewUnavailableLabel?.({ previewReason: 'not-in-snapshot' }), '阅读能力待核验');
});

test('content inspection recognizes plain, UTF-16, compressed text, empty files and binary independently of names', async () => {
  let inspect;
  try { ({ inspectPreviewContent: inspect } = await import('../scripts/preview-content.mjs')); } catch { /* Missing implementation is asserted below. */ }
  assert.equal(typeof inspect, 'function');
  for (const text of ['0 100\r\n135 125\r\n', '#!/bin/sh\necho hello\n', '{"data":1}\n', '日志：已完成\n', '']) {
    assert.deepEqual(inspect(Buffer.from(text)), { previewable: true, previewKind: 'text' });
  }
  assert.deepEqual(inspect(Buffer.concat([Buffer.from([0xff, 0xfe]), Buffer.from('中文\n', 'utf16le')])), { previewable: true, previewKind: 'text' });
  assert.deepEqual(inspect(gzipSync(Buffer.from('123\r\n'))), { previewable: true, previewKind: 'text' });
  assert.deepEqual(inspect(Buffer.from([0x7f, 0x45, 0x4c, 0x46, 2, 1, 1, 0])), { previewable: true, previewKind: 'hex' });
  assert.deepEqual(inspect(Buffer.alloc(2 * 1024 * 1024 + 1, 65)), { previewable: false, previewReason: 'too-large' });
  assert.deepEqual(inspect(gzipSync(Buffer.alloc(2 * 1024 * 1024 + 1, 65))), { previewable: true, previewKind: 'hex', previewReason: 'expanded-too-large' });
});
