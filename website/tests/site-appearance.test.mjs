import test from 'node:test';
import assert from 'node:assert/strict';
import { applyAppearance, getSavedAppearance, APPEARANCE_STORAGE_KEY, APPEARANCE_TOKENS } from '../src/site-appearance.js';

test('NOI appearance persists without changing light/dark mode or the editor profile', () => {
  const values = new Map([['csp-project-theme', 'dark'], ['editor-profile', 'devcpp']]);
  const storage = { getItem: key => values.get(key), setItem: (key, value) => values.set(key, value) };
  const root = { dataset: { theme: 'dark', colorMode: 'dark', editorProfile: 'devcpp' } };
  assert.equal(applyAppearance('noi', { root, storage }), 'noi');
  assert.deepEqual(root.dataset, { theme: 'dark', colorMode: 'dark', editorProfile: 'devcpp', appearance: 'noi' });
  assert.equal(getSavedAppearance(storage), 'noi');
  assert.equal(values.get('csp-project-theme'), 'dark');
  assert.equal(values.get('editor-profile'), 'devcpp');
  assert.equal(values.get(APPEARANCE_STORAGE_KEY), 'noi');
});

test('blocked storage or unsupported saved appearance still allows an in-session choice', () => {
  const blocked = { getItem() { throw new Error('blocked'); }, setItem() { throw new Error('blocked'); } };
  const root = { dataset: { theme: 'light' } };
  assert.equal(getSavedAppearance(blocked), 'csp');
  assert.equal(applyAppearance('noi', { root, storage: blocked }), 'noi');
  assert.equal(root.dataset.appearance, 'noi');
  assert.equal(root.dataset.theme, 'light');
  assert.equal(getSavedAppearance({ getItem: () => 'geany' }), 'csp');
  assert.equal(applyAppearance('unknown', { root, storage: null }), 'csp');
  assert.equal(APPEARANCE_TOKENS.noi.dark.accent, '#ff999e');
});
