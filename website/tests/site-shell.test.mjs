import test from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
import vm from 'node:vm';

test('every page depth uses the same navigation with valid project-prefixed links', async () => {
  let render;
  try { ({ renderSiteHeader: render } = await import('../shared/site-header.js')); } catch { /* asserted below */ }
  assert.equal(typeof render, 'function');
  for (const root of ['./', '../', '../../']) {
    const html = render({ root, active: 'downloads' });
    for (const path of ['code/browse.html?view=browse', 'code/browse.html?view=discover', 'code/?mode=view', 'code/?mode=split', 'code/browse.html?view=sources', 'preview/downloads.html', 'docs.html']) assert.ok(html.includes(`href="${root}${path}"`));
    assert.match(html, /class="nav-downloads"[^>]*aria-current="page"/);
    assert.match(html, /站点主题/); assert.match(html, /跟随系统/);
    assert.match(html, /<svg class="csp-mark"/);
    assert.doesNotMatch(html, /id="theme-toggle"/);
  }
  assert.throws(() => render({ root: 'javascript:alert(1)' }));
});

test('new visitors get the approved red navigation while saved appearance remains respected', async () => {
  const source = await readFile(new URL('../shared/theme.js', import.meta.url), 'utf8');
  for (const saved of [null, 'csp', 'noi']) {
    const root = { dataset: {} };
    const context = { document: { documentElement: root, dispatchEvent() {} }, localStorage: { getItem: key => key === 'csp-site-appearance' ? saved : null }, matchMedia: () => ({ matches: false, addEventListener() {} }), CustomEvent: class {}, addEventListener() {} };
    context.window = context; vm.runInNewContext(source, context);
    assert.equal(root.dataset.appearance, saved || 'noi');
  }
});

test('shared appearance and system color settings persist independently of the editor profile', async () => {
  let source = ''; try { source = await readFile(new URL('../shared/theme.js', import.meta.url), 'utf8'); } catch { /* asserted below */ }
  assert.ok(source.length);
  const values = new Map([['csp-site-appearance', 'noi'], ['csp-project-theme', 'system'], ['csp-reading-profile', 'devcpp']]);
  const root = { dataset: {} }, events = [], media = { matches: true, addEventListener() {} };
  const context = { document: { documentElement: root, dispatchEvent: event => events.push(event) }, localStorage: { getItem: key => values.get(key), setItem: (key, value) => values.set(key, value) }, matchMedia: () => media, CustomEvent: class { constructor(type, options) { this.type = type; this.detail = options.detail; } }, addEventListener() {} };
  context.window = context;
  vm.runInNewContext(source, context);
  assert.equal(root.dataset.appearance, 'noi'); assert.equal(root.dataset.theme, 'dark'); assert.equal(root.dataset.colorMode, 'dark');
  context.CspProjectTheme.setChoice('light'); context.CspProjectTheme.setAppearance('csp');
  assert.equal(values.get('csp-project-theme'), 'light'); assert.equal(root.dataset.theme, 'light');
  assert.equal(values.get('csp-site-appearance'), 'csp'); assert.equal(values.get('csp-reading-profile'), 'devcpp');
  assert.ok(events.some(event => event.type === 'csp-project-theme'));
});
