import test from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
import vm from 'node:vm';
import { REGIONS } from '../src/regions.js';
import { renderRootHome, ROOT_FEATURED_REGIONS } from '../scripts/root-home.mjs';

const revision = 'a'.repeat(40);
const groups = Object.keys(REGIONS).flatMap((province, index) => ['J', 'S'].map(group => ({ key: `${province}-${group}`, province, group, fileCount: index + (group === 'J' ? 1 : 2), contestantCount: index + (group === 'J' ? 10 : 20) })));
const catalog = { revision, groups, totalFiles: groups.reduce((sum, group) => sum + group.fileCount, 0) };
const template = await readFile(new URL('../landing/index.html', import.meta.url), 'utf8');
const examplePath = 'ZJ/S/ZJ-S00007/mycode/pre_hub.cpp';

test('root home gives every region an illustrated card while retaining the five featured covers first', () => {
  const html = renderRootHome(template, catalog, { shards: { 'ZJ-S': { files: [{ path: examplePath }] } } });
  const cards = [...html.matchAll(/<article class="region" data-code="([A-Z]{2})">([\s\S]*?)<\/article>/g)];
  assert.equal(cards.length, 29);
  assert.deepEqual(cards.slice(0, 5).map(match => match[1]), ROOT_FEATURED_REGIONS);
  assert.equal(new Set(cards.map(match => match[1])).size, 29);
  for (const [, code, card] of cards) {
    assert.ok(card.includes(`src="assets/regions/${code}.webp"`), `${code} has its own illustration`);
    for (const group of ['J', 'S']) assert.ok(card.includes(`province=${code}&amp;group=${group}`));
  }
  const expanded = html.match(/<details class="directory" id="all-regions">([\s\S]*?)<\/details>/)?.[1];
  assert.equal((expanded.match(/<article class="region"/g) || []).length, 24);
  assert.match(html, /29 个地区 · 58 个组别/);
  assert.ok(html.includes(`${catalog.totalFiles.toLocaleString('en-US')} 个源码或文本条目`));
  for (const code of Object.keys(REGIONS)) {
    for (const group of ['J', 'S']) assert.ok(html.includes(`province=${code}&amp;group=${group}`));
  }
  const zj = groups.filter(group => group.province === 'ZJ').reduce((sum, group) => sum + group.contestantCount, 0);
  assert.ok(html.includes(`${zj} 份档案`));
  assert.ok(!/__HOME_|http-equiv="refresh"|location\.replace/.test(html));
  assert.ok(html.includes('href="docs.html"'));
  assert.ok(!html.includes('href="#"'));
  const example = [...html.matchAll(/href="([^"]+)"/g)].map(match => match[1].replaceAll('&amp;', '&')).find(url => url.startsWith('code/?left='));
  assert.equal(new URL(example, 'https://tangyixiao.github.io/CSP-2026/').searchParams.get('left'), examplePath);
  assert.equal(new URL(example, 'https://tangyixiao.github.io/CSP-2026/').searchParams.get('focus'), '1');
});

test('root navigation, national random and native search retain the GitHub Pages project prefix and both groups', () => {
  const html = renderRootHome(template, catalog);
  const base = 'https://tangyixiao.github.io/CSP-2026/';
  const links = [...html.matchAll(/(?:href|src|action)="([^"]+)"/g)].map(match => match[1].replaceAll('&amp;', '&'));
  for (const value of links) {
    const url = new URL(value, base);
    if (url.origin === new URL(base).origin) assert.ok(url.pathname.startsWith('/CSP-2026/'), value);
  }
  for (const random of ['person', 'problem']) {
    const url = new URL(links.find(link => link.includes(`random=${random}`)), base);
    assert.equal(url.pathname, '/CSP-2026/code/browse.html');
    assert.equal(url.searchParams.get('group'), 'all');
    assert.equal(url.searchParams.get('view'), 'browse');
  }
  assert.match(html, /action="code\/browse\.html" method="get"/);
  assert.match(html, /name="group" value="all"/);
  assert.match(html, /name="q" type="search"/);
  assert.ok(html.includes('可用文件以当前归档目录为准'));
});

test('root renderer rejects missing catalog coverage and never fabricates group counts', () => {
  assert.throws(() => renderRootHome(template, { ...catalog, groups: [] }), /pinned catalog/);
  assert.throws(() => renderRootHome(template, { ...catalog, groups: [{ ...groups[0], fileCount: null }] }), /catalog group/);
  assert.throws(() => renderRootHome(template, { ...catalog, groups: [groups[0], groups[0]] }), /Duplicate/);
  assert.throws(() => renderRootHome(template, { ...catalog, revision: '../invalid' }), /pinned catalog/);
  const html = renderRootHome(template, { ...catalog, totalFiles: null });
  assert.ok(html.includes('— 个源码或文本条目'));
  const missingDirectoryCount = renderRootHome(template, { ...catalog, groups: groups.map(group => group.province === 'ZJ' ? { ...group, contestantCount: null } : group) });
  assert.ok(missingDirectoryCount.includes('— 份档案'));
  const invalidDirectoryCount = renderRootHome(template, { ...catalog, groups: groups.map(group => group.province === 'ZJ' ? { ...group, contestantCount: -1 } : group) });
  assert.ok(invalidDirectoryCount.includes('— 份档案'));
});

test('root appearance and darkness use the shared cross-page theme preference', async () => {
  const callbacks = new Map(), windowCallbacks = new Map();
  const makeElement = () => ({ value: '', content: '', textContent: '', open: false, handlers: new Map(), attrs: {}, addEventListener(name, action) { this.handlers.set(name, action); }, setAttribute(name, value) { this.attrs[name] = value; }, contains() { return false; }, focus() {} });
  const root = { dataset: {} }, appearance = makeElement(), color = makeElement(), label = makeElement(), toggle = makeElement(), nav = makeElement(), panel = makeElement(), meta = makeElement();
  const nodes = { 'home-appearance': appearance, 'home-color-mode': color, 'appearance-label': label, 'home-navigation': nav };
  const saved = new Map([['csp-code-theme', 'light']]);
  const context = {
    document: { documentElement: root, getElementById: id => nodes[id], querySelector: selector => selector === '.hamburger' ? toggle : selector === '.appearance' ? panel : meta, addEventListener: (name, action) => callbacks.set(name, action) },
    window: { matchMedia: () => ({ matches: false, addEventListener() {} }), addEventListener: (name, action) => windowCallbacks.set(name, action) },
    localStorage: { getItem: key => saved.get(key), setItem: (key, value) => saved.set(key, value) },
  };
  context.matchMedia = context.window.matchMedia;
  context.CustomEvent = class { constructor(type, options) { this.type = type; this.detail = options.detail; } };
  context.document.dispatchEvent = () => {};
  context.mountSiteShell = () => {};
  vm.runInNewContext(await readFile(new URL('../shared/theme.js', import.meta.url), 'utf8'), context);
  vm.runInNewContext((await readFile(new URL('../landing/assets/home.js', import.meta.url), 'utf8')).replace(/^import .*;\n/m, ''), context);
  assert.equal(root.dataset.appearance, 'noi');
  assert.equal(root.dataset.theme, 'light');
  context.window.CspProjectTheme.setAppearance('noi');
  assert.equal(root.dataset.appearance, 'noi');
  assert.equal(root.dataset.theme, 'light');
  context.window.CspProjectTheme.setChoice('dark');
  assert.equal(root.dataset.theme, 'dark');
  assert.equal(saved.get('csp-site-appearance'), 'noi');
  assert.equal(saved.get('csp-project-theme'), 'dark');
  assert.equal(saved.get('csp-code-theme'), 'dark');

});
