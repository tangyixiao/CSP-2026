import test from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
import { createHash } from 'node:crypto';
import { REGIONS, regionArtwork, regionImage } from '../src/regions.js';

function webpDimensions(bytes) {
  assert.equal(bytes.toString('ascii', 0, 4), 'RIFF');
  assert.equal(bytes.toString('ascii', 8, 12), 'WEBP');
  assert.equal(bytes.readUInt32LE(4) + 8, bytes.length, 'complete WebP RIFF container');
  let dimensions;
  let raster = false;
  for (let offset = 12; offset + 8 <= bytes.length;) {
    const type = bytes.toString('ascii', offset, offset + 4);
    const length = bytes.readUInt32LE(offset + 4);
    const start = offset + 8;
    assert.ok(start + length <= bytes.length, 'complete WebP chunk');
    if (type === 'VP8X') {
      assert.ok(length >= 10);
      dimensions = { width: bytes.readUIntLE(start + 4, 3) + 1, height: bytes.readUIntLE(start + 7, 3) + 1 };
    } else if (type === 'VP8 ') {
      assert.ok(length >= 10);
      assert.equal(bytes.toString('hex', start + 3, start + 6), '9d012a');
      dimensions ||= { width: bytes.readUInt16LE(start + 6) & 0x3fff, height: bytes.readUInt16LE(start + 8) & 0x3fff };
      raster = true;
    } else if (type === 'VP8L') {
      assert.ok(length >= 5);
      assert.equal(bytes[start], 0x2f);
      const bits = bytes.readUInt32LE(start + 1);
      dimensions ||= { width: (bits & 0x3fff) + 1, height: ((bits >>> 14) & 0x3fff) + 1 };
      raster = true;
    }
    offset = start + length + length % 2;
  }
  assert.ok(raster && dimensions, 'actual WebP raster payload');
  return dimensions;
}

test('all 29 collected regions retain metadata and have unique explicit WebP mappings', () => {
  assert.equal(Object.keys(REGIONS).length, 29);
  assert.equal(REGIONS.NX, undefined);
  assert.equal(REGIONS.XZ, undefined);
  const images = new Set();
  for (const [code, region] of Object.entries(REGIONS)) {
    assert(region.name && region.motif);
    assert.match(region.accent, /^#[a-f0-9]{6}$/);
    assert.match(regionImage(code), new RegExp(`/assets/regions/${code}\\.webp$`));
    const markup = regionArtwork(code);
    assert.match(markup, /^<img /);
    assert.match(markup, new RegExp(`data-region="${code}"`));
    assert.match(markup, /alt="" aria-hidden="true"/);
    assert(!/onload|<svg|<script/.test(markup));
    images.add(regionImage(code));
  }
  assert.equal(images.size, 29);
});

test('all 29 actual optimized regional raster assets are parseable, distinct and bounded', async () => {
  let totalBytes = 0;
  const hashes = new Set();
  for (const code of Object.keys(REGIONS)) {
    const bytes = await readFile(new URL(regionImage(code)));
    const { width, height } = webpDimensions(bytes);
    assert.ok(width >= 600 && height >= 240 && width <= 1280 && height <= 960, `${code}: ${width}x${height}`);
    assert.ok(bytes.length <= 240 * 1024, `${code}: asset exceeds 240 KiB`);
    totalBytes += bytes.length;
    hashes.add(createHash('sha256').update(bytes).digest('hex'));
  }
  assert.equal(hashes.size, 29, 'no repeated placeholder image across regions');
  assert.ok(totalBytes <= 5 * 1024 * 1024, `regional artwork total ${totalBytes} exceeds 5 MiB`);
});

test('unsupported or hostile codes have no fallback landmark or interpolated input', () => {
  for (const code of ['NX', 'XZ', 'ZZ', 'sh', '__proto__', 'constructor', '"><script>', null, {}, ['SH']]) {
    assert.equal(regionImage(code), '');
    assert.equal(regionArtwork(code), '');
  }
  assert.equal(REGIONS.SH.name, '上海');
  assert.equal(REGIONS.SC.name, '四川');
  assert.notEqual(regionImage('SC'), regionImage('SH'));
});
