import test from 'node:test';
import assert from 'node:assert/strict';
import { READING_PROFILES, READING_THEMES, normalizeReadingProfile, getReadingProfileOptions, getReadingTheme } from '../src/reading-profiles.js';

test('unknown or inherited profile names resolve to the CSP default', () => {
  for (const value of [undefined, null, '', 'windows', 'constructor', '__proto__']) {
    assert.equal(normalizeReadingProfile(value), 'csp');
  }
  for (const value of ['csp', 'devcpp', 'geany']) assert.equal(normalizeReadingProfile(value), value);
});

test('profile and light/dark theme form independent valid combinations', () => {
  assert.equal(getReadingTheme('csp', 'vs'), 'vs');
  assert.equal(getReadingTheme('csp', 'vs-dark'), 'vs-dark');
  for (const profile of ['devcpp', 'geany']) {
    for (const base of ['vs', 'vs-dark']) {
      const definition = READING_THEMES[getReadingTheme(profile, base)];
      assert.equal(definition.base, base);
      assert.ok(definition.rules.some(rule => rule.token === 'keyword'));
      assert.match(definition.colors['editor.background'], /^#[0-9a-f]{6}$/i);
    }
  }
  assert.equal(getReadingTheme('invalid', 'vs'), 'vs');
});

test('profiles expose only presentation options and return fresh values', () => {
  for (const profile of Object.keys(READING_PROFILES)) {
    const options = getReadingProfileOptions(profile);
    assert.deepEqual(Object.keys(options).sort(), ['fontFamily', 'fontSize', 'lineHeight']);
    assert.ok(options.lineHeight > options.fontSize);
    options.fontSize = 99;
    assert.notEqual(getReadingProfileOptions(profile).fontSize, 99);
  }
  assert.notDeepEqual(getReadingProfileOptions('devcpp'), getReadingProfileOptions('geany'));
});
