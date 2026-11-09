import test from 'node:test';
import assert from 'node:assert/strict';
import { REGIONS, regionArtwork } from '../src/regions.js';

test('all 29 collected regions have independent original silhouettes', () => {
  assert.equal(Object.keys(REGIONS).length, 29);
  assert.equal(REGIONS.NX, undefined);
  assert.equal(REGIONS.XZ, undefined);
  const silhouettes = new Set();
  for (const [code, region] of Object.entries(REGIONS)) {
    assert(region.name && region.motif);
    assert.match(region.accent, /^#[a-f0-9]{6}$/);
    const svg = regionArtwork(code);
    assert.match(svg, /viewBox="0 0 600 240"/);
    assert.match(svg, new RegExp(`data-region="${code}"`));
    assert.match(svg, /aria-hidden="true"/);
    assert(!/script|href|foreignObject|onload|<text|<image/.test(svg));
    silhouettes.add(svg.match(/<path d="([^"]+)"/)[1]);
  }
  assert.equal(silhouettes.size, 29);
});

test('unsupported or hostile codes have no fallback landmark or interpolated input', () => {
  for (const code of ['NX', 'XZ', 'ZZ', 'sh', '__proto__', 'constructor', '"><script>', null, {}, ['SH']]) {
    assert.equal(regionArtwork(code), '');
  }
  assert.equal(REGIONS.SH.name, '上海');
  assert.equal(REGIONS.SC.name, '四川');
  assert.notEqual(regionArtwork('SC'), regionArtwork('SH'));
});
