import '../shared/site-shell.css';
import { createBrowseLoader } from './browse-index.js';
import { mountSiteShell } from '../shared/site-shell.js';
import { previewUnavailableLabel } from './archive-browse.js';
import './browse.css';
import { groupContestants, sortContestants, sampleContestant, sampleProblem, contestProblemFiles, contestProblemOptions, parseBrowseRoute, scopeGroups, browseContestants, contestantTree, loadScopeCatalogs } from './archive-browse.js';
import { REGIONS, regionImage } from './regions.js';
import { loadSource, githubUrl } from './source.js';
import { SOURCE_INDEX_REVISION } from './provenance.js';
import { saveContestantDirectory } from './downloads.js';

const siteShell = mountSiteShell({ root: '../', active: 'browse' });
const $ = id => document.getElementById(id);
// The root homepage can hand off one explicit random action. Consume the flag
// before loading data so reload/back navigation cannot repeat the draw.
const entryURL = new URL(location.href);
const entryRandomAction = ['person', 'problem'].includes(entryURL.searchParams.get('random')) ? entryURL.searchParams.get('random') : null;
if (entryURL.searchParams.has('random')) {
  entryURL.searchParams.delete('random');
  history.replaceState(history.state, '', `${entryURL.pathname}${entryURL.search}${entryURL.hash}`);
}
const cache = new Map(), scrollPositions = new Map();
let loadBrowseScope;
const state = { catalog: null, discussions: null, token: 0, cards: [], compare: [], busy: false, previousPerson: null, previousProblem: null };
let previews = [], previewActive = 0, searchTimer;
let navigationVersion = 0;
const number = value => Number(value).toLocaleString('zh-CN');
const bytes = value => value == null ? '大小待补' : value < 1024 ? `${value} B` : value < 1048576 ? `${(value / 1024).toFixed(1)} KiB` : `${(value / 1048576).toFixed(1)} MiB`;
const node = (tag, className, text) => { const value = document.createElement(tag); if (className) value.className = className; if (text !== undefined) value.textContent = text; return value; };
const link = (label, href, className) => { const value = node('a', className, label); value.href = href; return value; };
const button = (label, action, className) => { const value = node('button', className, label); value.type = 'button'; value.addEventListener('click', action); return value; };
const sourceIndex = `https://github.com/tangyixiao/CSP-2026/blob/${SOURCE_INDEX_REVISION}/SOURCES.md`;
function announce(message) { $('notice').textContent = message; $('notice').hidden = false; clearTimeout(announce.timer); announce.timer = setTimeout(() => { $('notice').hidden = true; }, 5000); }
function params() { return parseBrowseRoute(location.search, Object.keys(REGIONS)); }
function routeURL(next = {}) {
  const values = { ...params(), ...next };
  if (Object.hasOwn(next, 'province') && !Object.hasOwn(next, 'scope')) { values.scope = next.province ? 'single' : 'all'; values.provinces = ''; }
  const url = new URL(location.href); url.search = '';
  for (const [key, value] of Object.entries(values)) if (value !== '' && value != null) url.searchParams.set(key === 'query' ? 'q' : key, value);
  return `${url.pathname}${url.search}`;
}
function navigate(next) { navigationVersion++; scrollPositions.set(location.href, scrollY); history.pushState({}, '', routeURL(next)); void renderRoute(); }
function directoryURL(directory) { return routeURL({ view: 'contestant', directory }); }
function readerURL(file, other) { const query = new URLSearchParams({ left: file.path, mode: other ? 'split' : 'view', focus: '1', returnTo: directoryURL(file.path.split('/').slice(0, 3).join('/')) }); if (other) query.set('right', other.path); return `./?${query}`; }
async function json(url) { const response = await fetch(url); if (!response.ok) throw new Error(`目录读取失败（${response.status}）`); return response.json(); }
async function groupData(group) {
  if (!group || !/^catalog\/[A-Z]{2}-[JS]\.json$/.test(group.url)) throw new Error('地区目录无效');
  const key = `${state.catalog.revision}/${group.key}`;
  if (!cache.has(key)) {
    const request = json(`./${group.url}?v=${state.catalog.revision}`).then(data => { if (!Array.isArray(data.files) || (data.extraFiles !== undefined && !Array.isArray(data.extraFiles))) throw new Error('文件目录格式无效'); return data; }).catch(error => { cache.delete(key); throw error; });
    cache.set(key, request);
    while (cache.size > state.catalog.groups.length) cache.delete(cache.keys().next().value);
  }
  return cache.get(key);
}
async function groupFiles(group) { return (await groupData(group)).files; }
function regionCodes() { return [...new Set(state.catalog.groups.map(item => item.province))]; }
function regionName(code) { return REGIONS[code]?.name || code; }
function putArtwork(container, code, { cover = false, eager = false } = {}) {
  const url = regionImage(code); if (!url) return;
  const art = node('img', `region-art${cover ? ' region-cover-image' : ''}`);
  art.src = url; art.alt = ''; art.setAttribute('aria-hidden', 'true'); art.dataset.region = code;
  art.loading = eager ? 'eager' : 'lazy'; art.decoding = 'async';
  container.append(art); container.style.setProperty('--region-color', REGIONS[code]?.accent || 'currentColor');
}
function intro(title, text, eyebrow) { const header = node('section', 'intro'); if (eyebrow) header.append(node('p', 'eyebrow', eyebrow)); header.append(node('h1', '', title)); if (text) header.append(node('p', 'lede', text)); return header; }
function sectionHeading(title, destination, label = '查看全部 →') { const row = node('div', 'section-heading'); row.append(node('h2', '', title)); if (destination) row.append(link(label, destination)); return row; }
function regionCover(code) {
  const cover = node('article', 'region-cover');
  const heading = node('div'), title = node('h3', 'region-title', regionName(code)); title.append(node('span', 'region-code', code));
  const groups = state.catalog.groups.filter(item => item.province === code);
  heading.append(title, node('p', 'region-count', `${number(groups.reduce((sum, item) => sum + item.contestantCount, 0))} 份档案`));
  const actions = node('div', 'region-links');
  for (const group of groups) actions.append(link(`进入 ${group.group} →`, routeURL({ view: 'browse', province: code, group: group.group, query: '', problem: '' })));
  cover.append(heading); putArtwork(cover, code, { cover: true, eager: ['ZJ', 'BJ'].includes(code) }); cover.append(actions); return cover;
}
function renderHome() {
  const header = intro('全国代码归档', 'CSP-J/S 2026 · 第二轮'); header.classList.add('home-intro'); putArtwork(header, 'ZJ', { eager: true });
  header.append(node('p', 'facts', `${regionCodes().length} 个地区 · J / S`));
  const actions = node('div', 'intro-actions');
  actions.append(link('浏览归档 →', routeURL({ view: 'browse', province: '', query: '', problem: '' }), 'primary-action'), button('随机一人 ↗', () => void randomPerson({ province: '', group: 'all', query: '', problem: '' }), 'quiet-action'), button('随机一题 ↗', () => void randomProblem({ province: '', group: 'all', query: '', problem: '' }), 'quiet-action'));
  header.append(actions); $('content').append(header);
  const preferred = ['ZJ', 'BJ', 'SC', 'SH', 'GD'];
  const codes = preferred.filter(code => regionCodes().includes(code));
  const covers = node('div', 'region-grid'); covers.append(...codes.slice(0, 5).map(regionCover)); $('content').append(covers);
  $('content').append(button(`全部 ${regionCodes().length} 个地区 ↓`, openRegions, 'all-regions'), sectionHeading('发现文件', routeURL({ view: 'discover' }), '前往发现 →'));
  void renderDiscoveries(false);
}
const discoveries = [
  { id: 'ZJ-S00007', title: '题目目录之外', path: 'ZJ/S/ZJ-S00007/mycode/pre_hub.cpp', kind: 'directory', description: '打开 mycode 子目录，阅读其中的多份程序。' },
  { id: 'ZJ-S00004', title: '一段函数实现', path: 'ZJ/S/ZJ-S00004/crystal/crystal.cpp', kind: 'source', description: '查看 ch(int k) 的实现及其所在文件。' },
  { id: 'ZJ-S00006', title: '注释中的样例', path: 'ZJ/S/ZJ-S00006/hub/hub.cpp', kind: 'comment', description: '阅读代码中的长样例注释及其上下文。' },
];
async function renderDiscoveries(full) {
  const token = state.token, grid = node('div', 'discover-grid'); $('content').append(grid);
  if (full) $('content').append(node('p', 'method-note', '从这些文件开始阅读；每项都附有原始路径和来源。'));
  for (const item of discoveries) {
    const card = node('article', 'discovery'), pre = node('pre', '', '正在读取原文件…');
    card.append(node('span', 'label', item.id), node('h3', '', item.title), pre, node('p', '', item.description));
    grid.append(card);
    try {
      const [province, group] = item.path.split('/');
      const files = await groupFiles(state.catalog.groups.find(value => value.province === province && value.group === group));
      if (token !== state.token) return;
      const file = files.find(value => value.path === item.path);
      if (item.kind === 'directory') {
        const entries = files.filter(value => value.path.startsWith(`${province}/${group}/${item.id}/mycode/`));
        pre.textContent = `mycode/\n${entries.map((value, index) => `${index === entries.length - 1 ? '└─' : '├─'} ${value.name}`).join('\n')}`;
      } else if (file) {
        queuePreview(async () => { try { const source = await loadSource(file, { revision: state.catalog.revision }); if (token !== state.token) return; const lines = source.text.split(/\r?\n/); const start = item.kind === 'comment' ? Math.max(0, lines.findIndex(line => /^\s*\/\*/.test(line))) : Math.max(0, lines.findIndex(line => /bool\s+ch\(/.test(line))); pre.textContent = lines.slice(start, start + 8).join('\n'); } catch { pre.textContent = '此预览暂不可用\n可继续打开归档原文件。'; } });
      } else pre.textContent = '此版本中未找到对应路径。';
      if (file) card.append(link('打开原文件 →', readerURL(file)));
      card.append(link('GitHub 归档 ↗', githubUrl(item.path, state.catalog.revision)));
    } catch { pre.textContent = '目录暂不可用，请稍后重试。'; }
  }
}
function queuePreview(action) { previews.push(action); pumpPreviews(); }
function pumpPreviews() { while (previewActive < 2 && previews.length) { previewActive++; const action = previews.shift(); Promise.resolve().then(action).finally(() => { previewActive--; pumpPreviews(); }); } }
function shortSource(text) {
  const lines = text.split(/\r?\n/);
  let start = lines.findIndex(line => /\b(?:bool|void|int|ll|long\s+long)\s+(?!main\b)[a-zA-Z_]\w*\s*\([^;]*\)\s*\{/.test(line));
  if (start < 0) start = lines.findIndex(line => line.trim() && !/^\s*(?:#include|using namespace|\/\/|freopen\b)/.test(line));
  if (start < 0) start = 0;
  return { snippet: lines.slice(start, start + 4).join('\n'), start: start + 1, end: Math.min(lines.length, start + 4) };
}
function addDiscussionCounts(items) {
  const snapshot = state.discussions;
  if (snapshot?.availability !== 'available' || snapshot.complete !== true || snapshot.catalogRevision !== state.catalog.revision) return items;
  return items.map(item => ({ ...item, discussionCount: snapshot.byContestant?.[item.id]?.threadCount || 0, discussionUpdatedAt: snapshot.byContestant?.[item.id]?.updatedAt || null }));
}
function contestantTile(item, current) {
  const tile = node('article', 'contestant-tile folder-tile');
  const entry = link('', directoryURL(item.id), 'folder-entry');
  entry.setAttribute('aria-label', `打开选手 ${item.contestant} 的全部 ${item.files.length} 个文件`);
  const heading = node('div', 'tile-top'), name = node('h3', '', item.contestant), icon = node('span', 'folder-glyph');
  icon.setAttribute('aria-hidden', 'true');
  heading.append(icon, name);
  const metric = current.sort === 'bytes' ? bytes(item.totalBytes) : current.sort === 'discussions' ? item.discussionCount == null ? '讨论待同步' : `${item.discussionCount} 场讨论` : `${item.files.length} 个文件`;
  heading.append(node('span', '', metric));
  const paths = node('ul', 'folder-file-preview');
  for (const file of item.files.slice(0, 4)) paths.append(node('li', '', file.path.slice(item.id.length + 1)));
  if (item.files.length > 4) paths.append(node('li', 'folder-more-files', `另有 ${item.files.length - 4} 个文件`));
  const bottom = node('div', 'tile-bottom');
  bottom.append(node('span', 'folder-region', `${regionName(item.province)} · CSP-${item.group}`), node('span', 'tile-open', '打开文件夹 →'));
  entry.append(heading, paths);
  if (current.query || current.problem) entry.append(node('p', 'folder-match', `${item.matchedFileCount} 个文件符合筛选，进入后显示全部文件`));
  entry.append(bottom); tile.append(entry);
  return tile;
}
function addCompare(file) {
  if (!state.compare.some(item => item.path === file.path)) state.compare.push(file);
  state.compare = state.compare.slice(-2); renderCompareTray();
}
function renderCompareTray() { document.querySelector('.compare-tray')?.remove(); if (!state.compare.length) return; const tray = node('aside', 'compare-tray'); tray.setAttribute('aria-label', '待比较文件'); tray.append(node('span', '', state.compare.map(file => file.contestant || file.path.split('/')[2]).join(' / '))); if (state.compare.length === 2) tray.append(link('并排比较 →', readerURL(state.compare[0], state.compare[1]))); else tray.append(node('span', '', '再选一份文件')); tray.append(button('×', () => { state.compare = []; renderCompareTray(); })); tray.lastChild.setAttribute('aria-label', '清空比较选择'); document.body.append(tray); }
function scopeLabel(current) {
  if (current.scope === 'single') return regionName(current.province);
  if (current.scope === 'multiple') return `${current.provinces.split(',').filter(Boolean).length} 个省份合并`;
  return '全国';
}
function renderScopeControls(toolbar, current, change) {
  const label = node('label', '', '范围'), select = node('select'); select.setAttribute('aria-label', '浏览范围');
  for (const [value, title] of [['all', '全国统一'], ['single', '固定省份'], ['multiple', '多省合并']]) select.add(new Option(title, value));
  select.value = current.scope;
  select.addEventListener('change', () => {
    const fallback = current.province || current.provinces.split(',')[0] || (regionCodes().includes('ZJ') ? 'ZJ' : regionCodes()[0]);
    change({ scope: select.value, province: select.value === 'single' ? fallback : '', provinces: select.value === 'multiple' ? current.provinces || fallback : '' });
  });
  label.append(select); toolbar.append(label);
  if (current.scope === 'single') {
    const wrapper = node('label', '', '省份'), province = node('select'); province.setAttribute('aria-label', '固定省份');
    for (const code of regionCodes()) province.add(new Option(regionName(code), code));
    province.value = current.province;
    province.addEventListener('change', () => change({ scope: 'single', province: province.value, provinces: '' }));
    wrapper.append(province); toolbar.append(wrapper);
  } else if (current.scope === 'multiple') {
    const picker = node('details', 'province-picker'), summary = node('summary', '', `选择省份（${current.provinces.split(',').filter(Boolean).length}）`), panel = node('div', 'province-picker-panel');
    const choices = node('fieldset', 'province-checkboxes'); choices.append(node('legend', '', '合并浏览的省份'));
    const selected = new Set(current.provinces.split(',')), checkboxes = [];
    for (const code of regionCodes()) {
      const wrapper = node('label'), checkbox = node('input'); checkbox.type = 'checkbox'; checkbox.value = code; checkbox.checked = selected.has(code);
      wrapper.append(checkbox, node('span', '', regionName(code))); choices.append(wrapper); checkboxes.push(checkbox);
    }
    const apply = button('应用所选省份', () => change({ scope: 'multiple', province: '', provinces: checkboxes.filter(input => input.checked).map(input => input.value).sort().join(',') }), 'primary-action');
    const update = () => { apply.disabled = !checkboxes.some(input => input.checked); };
    for (const checkbox of checkboxes) checkbox.addEventListener('change', update);
    const actions = node('div', 'province-picker-actions');
    actions.append(button('全选', () => { for (const input of checkboxes) input.checked = true; update(); }, 'quiet-action'), button('清空', () => { for (const input of checkboxes) input.checked = false; update(); }, 'quiet-action'), apply);
    panel.append(choices, actions); picker.append(summary, panel); toolbar.append(picker); update();
  }
}
function renderBrowse() {
  const current = params(), code = current.scope === 'single' ? current.province : '';
  const header = intro(`${scopeLabel(current)} / CSP-${current.group === 'all' ? 'J·S' : current.group}`, '按选手浏览文件，在全国、单省或多个省份中搜索和排序。'); header.classList.add('browse-intro');
  if (code) putArtwork(header, code, { eager: true });
  const toolbar = node('form', 'browse-toolbar archive-toolbar'); toolbar.addEventListener('submit', event => event.preventDefault());
  const searchLabel = node('label'), search = node('input'); search.type = 'search'; search.placeholder = '搜索考号、题目或文件名'; search.value = current.query; search.setAttribute('aria-label', '搜索归档'); searchLabel.append(search);
  toolbar.append(searchLabel);
  renderScopeControls(toolbar, current, next => navigate({ ...next, query: search.value, directory: '' }));
  const selects = [['group', '组别', [['S', 'CSP-S'], ['J', 'CSP-J'], ['all', 'J / S']]], ['problem', '题目', [['', '全部题目'], ...contestProblemOptions(current.group).map(value => [value, value])]], ['sort', '排序', [['id', '考号'], ['bytes', '字节数'], ['files', '文件数'], ['discussions', '已关联讨论'], ['recent', '最近讨论']]], ['direction', '方向', [['asc', '升序'], ['desc', '降序']]], ['batch', '每批', [[60, '60 位选手'], [120, '120 位选手'], [240, '240 位选手']]]];
  for (const [key, label, options] of selects) {
    const wrapper = node('label', '', label), select = node('select'); select.setAttribute('aria-label', label);
    for (const [value, name] of options) select.add(new Option(name, value)); select.value = current[key];
    select.addEventListener('change', () => navigate({ [key]: select.value, ...(key === 'group' ? { problem: '' } : {}), query: search.value, directory: '' })); wrapper.append(select); toolbar.append(wrapper);
  }
  toolbar.append(button('随机一人', () => void randomPerson(), 'quiet-action'), button('随机一题', () => void randomProblem(), 'quiet-action'));
  $('content').append(header, toolbar);
  const measureDetails = node('details', 'scope-note'); measureDetails.append(node('summary', '', '排序与目录范围'));
  const note = node('p', '', '排序覆盖所选范围。文件数与字节数按完整选手目录计算，未知大小排在末尾；讨论数按关联线程去重。搜索和题目筛选用于查找选手，打开后显示全部文件。'); measureDetails.append(note); $('content').append(measureDetails);
  const result = node('div', 'scope-results'); $('content').append(result);
  search.addEventListener('input', () => { clearTimeout(searchTimer); searchTimer = setTimeout(() => {
    if (!result.isConnected) return;
    history.replaceState({}, '', routeURL({ query: search.value })); void renderBrowseResults(result, params());
  }, 220); });
  void renderBrowseResults(result, current);
}
async function renderBrowseResults(container, current) {
  const started = performance.now();
  const token = ++state.token, active = () => token === state.token && container.isConnected;
  container.replaceChildren(); container.setAttribute('aria-busy', 'true');
  const status = node('p', 'browse-summary', '正在加载选手索引…'); status.setAttribute('role', 'status'); status.setAttribute('aria-live', 'polite'); container.append(status);
  const groups = scopeGroups(state.catalog.groups, current);
  if (!groups.length) { status.textContent = '当前范围没有选手目录，请调整省份或组别。多省合并时需至少选中一个省份。'; container.removeAttribute('aria-busy'); return; }
  loadBrowseScope ||= createBrowseLoader(state.catalog, json, groupData);
  const loaded = await loadBrowseScope(groups, { isCurrent: active, onProgress: value => { status.textContent = `正在加载 ${scopeLabel(current)} 选手索引${value.failed ? `（${value.failed} 份目录暂不可用）` : ''}…`; } });
  if (!active() || loaded.cancelled) return;
  container.removeAttribute('aria-busy');
  const items = sortContestants(addDiscussionCounts(browseContestants(loaded.files, current)), { by: current.sort, direction: current.direction });
  if (loaded.failedGroups.length) {
    const warning = node('div', 'scope-warning');
    warning.append(node('p', '', `${loaded.failedGroups.map(item => item.group.label || item.group.key).join('、')} 加载失败。当前显示其余地区的排序结果，重试后可补齐。`), button('重试缺少的目录', () => void renderBrowseResults(container, params()), 'quiet-action')); container.append(warning);
  }
  const grid = node('div', 'contestant-grid'); container.append(grid); let count = 0;
  const showMore = () => {
    const next = items.slice(count, count + current.batch); count += next.length;
    grid.append(...next.map(item => contestantTile(item, current)));
    pager.hidden = count >= items.length;
    pager.textContent = `再显示 ${Math.min(current.batch, items.length - count)} 位选手 ↓`;
    status.textContent = `${scopeLabel(current)} · ${loaded.failedGroups.length ? '已读取部分：' : ''}${number(items.length)} 个选手文件夹，已显示 ${number(count)} 个${current.query || current.problem ? '（按当前条件筛选）' : ''}`;
  };
  const pager = button('显示更多选手', showMore, 'load-more'); container.append(pager); showMore();
  if (!items.length) container.append(node('p', 'empty', '没有符合当前条件的选手目录，可调整搜索或筛选。'));
  performance.clearMeasures('browse-scope');
  performance.measure('browse-scope', { start: started, end: performance.now() });
}
function archivePathURL(path, tree = false) { return `https://github.com/tangyixiao/CSP-2026/${tree ? 'tree' : 'blob'}/${state.catalog.revision}/${path.split('/').map(encodeURIComponent).join('/')}`; }
async function renderContestant() {
  const current = params(), directory = current.directory, token = state.token;
  const [province, group, name] = directory.split('/'), catalogGroup = state.catalog.groups.find(item => item.province === province && item.group === group);
  const back = link('← 返回选手列表', routeURL({ view: 'browse', directory: '' }), 'folder-back'); $('content').append(back);
  if (!directory || !catalogGroup) { $('content').append(intro('选手目录无效', '请从归档列表重新选择选手。')); return; }
  const header = intro(name, `${regionName(province)} · CSP-${group} · 该选手归档的全部文件`); header.classList.add('contestant-intro'); $('content').append(header);
  const result = node('div', 'directory-content'); result.setAttribute('aria-busy', 'true'); result.append(node('p', 'loading', '正在加载选手的全部文件…')); $('content').append(result);
  const active = () => token === state.token && result.isConnected;
  const loaded = await loadScopeCatalogs([catalogGroup], groupData, { isCurrent: active });
  if (!active()) return;
  result.removeAttribute('aria-busy'); result.replaceChildren();
  if (loaded.failedGroups.length) { result.append(node('p', 'empty error', loaded.failedGroups[0].message), button('重试选手目录', () => void renderRoute(), 'quiet-action')); return; }
  const tree = contestantTree(loaded.files, directory), files = loaded.files.filter(file => file.path.startsWith(`${directory}/`));
  if (!tree?.fileCount) { result.append(node('p', 'empty', '当前归档版本中没有这个选手目录。')); return; }
  header.append(node('p', 'facts', `${number(tree.fileCount)} 个文件 · 原始子目录与文件名均保留`));
  const actions = node('div', 'directory-actions'), listing = node('div', 'file-tree'); listing.setAttribute('aria-label', `${name} 的全部文件`);
  actions.append(button('展开全部', () => { for (const item of listing.querySelectorAll('details')) item.open = true; }, 'quiet-action'), button('折叠目录', () => { for (const item of listing.querySelectorAll('details')) item.open = false; }, 'quiet-action'));
  const download = button('下载选手目录 ZIP', async () => {
    download.disabled = true;
    try { announce('正在打包选手目录 ZIP…'); const count = await saveContestantDirectory(files[0], files, state.catalog.revision); announce(`已下载选手目录 ZIP，共 ${count} 个文件。`); }
    catch (error) { announce(error.message); } finally { download.disabled = false; }
  }, 'quiet-action');
  actions.append(download, link('GitHub 原目录 ↗', archivePathURL(directory, true), 'quiet-action'));
  result.append(actions, listing);
  function appendTree(parent, branch) {
    for (const child of branch.directories) {
      const section = node('details', 'file-tree-directory'); section.open = true;
      const summary = node('summary'), icon = node('span', 'folder-glyph'); icon.setAttribute('aria-hidden', 'true');
      summary.append(icon, node('span', 'directory-name', child.name), node('span', 'directory-count', `${child.fileCount} 个文件`));
      const children = node('div', 'file-tree-children'); appendTree(children, child); section.append(summary, children); parent.append(section);
    }
    for (const file of branch.files) {
      const row = node('div', 'directory-file'), filename = link(file.name, file.previewable === false ? archivePathURL(file.path) : readerURL(file), 'directory-filename');
      filename.title = file.path; row.dataset.path = file.path;
      row.append(filename, node('span', 'directory-file-size', bytes(file.size)));
      const actions = node('div', 'directory-file-actions');
      if (file.previewable !== false) actions.append(link(file.previewKind === 'hex' ? '十六进制' : '阅读', readerURL(file)), button('加入比较', () => addCompare(file)));
      else actions.append(node('span', 'archive-only-label', previewUnavailableLabel(file)));
      actions.append(link('原文件 ↗', archivePathURL(file.path)));
      row.append(actions); parent.append(row);
    }
  }
  appendTree(listing, tree);
}
function renderSources() {
  $('content').append(intro('来源与许可', '查看归档来源、核对记录和内容许可。', 'SOURCES / ATTRIBUTION'));
  const grid = node('div', 'source-grid');
  const entries = [
    ['省份原始资料', '查找各省的发布公告、资料包来源和核对记录。待补来源列在对应条目中。', sourceIndex, '查看来源索引 ↗'],
    ['洛谷参考与比较材料', '查看讨论原帖、作者和日期，以及相似度记录与文件比对结果。缺失的原帖链接标为待补。', `${sourceIndex}#attributed-luogu-comparison-materials`, '查看署名与材料 ↗'],
    ['项目代码与第三方内容', '项目自行拥有的网站、脚本与原创文档使用 Apache-2.0。选手代码、官方数据、引用与第三方资产保留各自权利。', `https://github.com/tangyixiao/CSP-2026/blob/${SOURCE_INDEX_REVISION}/NOTICE`, '查看许可范围 ↗'],
    ['主题、编辑器与地区配图', '站点外观参考 NOI 官网，阅读配色参考 Dev-C++ 和 Geany。地区插画由项目生成，来源见配图清单。', 'https://github.com/tangyixiao/CSP-2026/blob/main/website/src/assets/regions/manifest.json', '查看配图来源与说明 ↗'],
  ];
  for (const [title, text, href, label] of entries) { const card = node('section', 'source-card'); card.append(node('h2', '', title), node('p', '', text), link(label, href)); grid.append(card); }
  $('content').append(grid, node('p', 'method-note', `当前目录：${regionCodes().length} 地区、${state.catalog.groups.length} 组别、${number(state.catalog.totalFiles)} 个源码或文本条目。数量按归档路径统计，包含备份与空文件；统计口径见来源说明。`));
  const links = node('div', 'source-links'); links.append(link('报告来源问题 ↗', 'https://github.com/tangyixiao/CSP-2026/issues/new/choose'), link('NOI 官网参考 ↗', 'https://noi.cn/'), link('组件许可 ↗', './third-party-licenses.txt')); $('content').append(links);
}
async function randomPerson(scope = {}) {
  if (state.busy) return;
  state.busy = true; const token = state.token, current = { ...params(), ...scope, ...(Object.hasOwn(scope, 'province') ? { scope: scope.province ? 'single' : 'all' } : {}) }, groups = scopeGroups(state.catalog.groups, current); let winner = null, count = 0;
  try {
    for (const [index, group] of groups.entries()) {
      announce(`正在抽取目录 · ${regionName(group.province)} ${group.group}（${index + 1}/${groups.length}）`);
      const items = groupContestants(await groupFiles(group), { query: current.query, problem: current.problem }).filter(item => item.identityValid);
      if (token !== state.token) return;
      for (const item of items) { if (item.id === state.previousPerson) continue; count++; if (Math.random() < 1 / count) winner = item; }
    }
    if (!winner && state.previousPerson) { const [province, group] = state.previousPerson.split('/'); if (groups.some(item => item.province === province && item.group === group)) winner = sampleContestant(groupContestants(await groupFiles(groups.find(item => item.province === province && item.group === group)), { query: current.query, problem: current.problem })); }
    if (token !== state.token) return;
    if (!winner) { announce('当前范围内没有可抽取的目录。'); return; }
    if (winner.id === state.previousPerson) { announce('当前范围只有这一个可用目录。'); return; }
    state.previousPerson = winner.id; navigate({ view: 'contestant', directory: winner.id });
  } catch (error) { announce(`抽取未完成：${error.message}。请重试。`); } finally { state.busy = false; }
}
async function randomProblem(scope = {}) {
  const current = { ...params(), ...scope, ...(Object.hasOwn(scope, 'province') ? { scope: scope.province ? 'single' : 'all' } : {}) }, token = state.token;
  if (state.busy) return; state.busy = true;
  try { const pool = new Map(); for (const group of scopeGroups(state.catalog.groups, current)) { announce(`正在汇集可用题目 · ${regionName(group.province)} ${group.group}`); const files = await groupFiles(group); if (token !== state.token) return; for (const item of groupContestants(contestProblemFiles(files), { query: current.query })) for (const file of item.files) if (!pool.has(file.problem)) pool.set(file.problem, file); } const problem = sampleProblem([...pool.values()], { previousProblem: state.previousProblem }); if (!problem) { announce('当前范围内没有可用题目。'); return; } state.previousProblem = problem; navigate({ view: 'browse', scope: current.scope, province: current.province, provinces: current.provinces, group: current.group, query: current.query, problem, directory: '' }); announce(`随机题目：${problem}`); } catch (error) { announce(error.message); } finally { state.busy = false; }
}
function openRegions() { const directory = $('region-directory'); directory.replaceChildren(link('全部地区', routeURL({ view: 'browse', province: '', query: '', problem: '' })), ...regionCodes().map(code => link(`${regionName(code)} ${code}`, routeURL({ view: 'browse', province: code, query: '', problem: '' })))); $('regions-dialog').showModal(); }
async function renderRoute() {
  closeNavigation();
  document.querySelector('.appearance-menu').open = false;
  $('regions-dialog').close();
  if (!state.catalog) { $('content').replaceChildren(node('div', 'loading', '正在打开归档…')); return; }
  state.token++; previews = [];
  clearTimeout(searchTimer);
  $('content').replaceChildren();
  const current = params();
  if (new URLSearchParams(location.search).has('problem') && !current.problem) { const url = new URL(location.href); url.searchParams.delete('problem'); history.replaceState(history.state, '', url); }
  for (const item of document.querySelectorAll('[data-view]')) { if (item.dataset.view === (current.view === 'contestant' ? 'browse' : current.view)) item.setAttribute('aria-current', 'page'); else item.removeAttribute('aria-current'); }
  if (current.view === 'browse') renderBrowse(); else if (current.view === 'contestant') void renderContestant(); else if (current.view === 'discover') { $('content').append(intro('发现文件', '浏览程序、注释和子目录，打开原文件查看上下文。', 'DISCOVER / READ CLOSELY')); void renderDiscoveries(true); } else if (current.view === 'sources') renderSources(); else renderHome();
  scrollTo(0, scrollPositions.get(location.href) || 0);
}
function closeNavigation() { siteShell.closeMenu(); }
$('close-regions').addEventListener('click', () => $('regions-dialog').close());
if (import.meta.env.DEV) document.querySelector('a[href="../preview/downloads.html"]').href = 'https://tangyixiao.github.io/CSP-2026/preview/downloads.html';
document.addEventListener('click', event => { const target = event.target.closest('a'); if (!target || event.button || event.metaKey || event.ctrlKey || event.shiftKey || event.altKey) return; const url = new URL(target.href, location.href); if (url.origin === location.origin && url.pathname === location.pathname && url.search) { event.preventDefault(); navigationVersion++; $('regions-dialog').close(); scrollPositions.set(location.href, scrollY); history.pushState({}, '', url); void renderRoute(); } });
window.addEventListener('popstate', () => { navigationVersion++; void renderRoute(); });
try {
  state.catalog = await json('./catalog/index.json');
  if (!state.catalog.groups?.length || !/^[a-f0-9]{40}$/.test(state.catalog.revision)) throw new Error('归档目录格式无效');
  $('revision').textContent = `归档 ${state.catalog.revision.slice(0, 8)} · ${regionCodes().length} 地区`;
  state.discussions = await json('./discussion-metadata.json').catch(() => null);
  await renderRoute();
  if (navigationVersion === 0 && entryRandomAction === 'person') await randomPerson();
  else if (navigationVersion === 0 && entryRandomAction === 'problem') await randomProblem();
} catch (error) { $('content').replaceChildren(node('h1', '', '归档暂未打开'), node('p', 'empty error', error.message), button('重新读取', () => location.reload(), 'quiet-action')); }
