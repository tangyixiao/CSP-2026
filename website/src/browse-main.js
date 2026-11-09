import './browse.css';
import { groupContestants, sortContestants, sampleContestant, sampleProblem } from './archive-browse.js';
import { REGIONS, regionArtwork } from './regions.js';
import { applyAppearance, getSavedAppearance } from './site-appearance.js';
import { loadSource, githubUrl } from './source.js';
import { SOURCE_INDEX_REVISION } from './provenance.js';

const $ = id => document.getElementById(id);
const pageSize = 18, cache = new Map(), scrollPositions = new Map();
const state = { catalog: null, discussions: null, token: 0, cards: [], compare: [], busy: false, previousPerson: null, previousProblem: null };
let previews = [], previewActive = 0, artworkObserver, searchTimer;
const regionObservers = new Set();
function clearRegionObservers() { for (const observer of regionObservers) observer.disconnect(); regionObservers.clear(); }
const number = value => Number(value).toLocaleString('zh-CN');
const bytes = value => value == null ? '大小待补' : value < 1024 ? `${value} B` : value < 1048576 ? `${(value / 1024).toFixed(1)} KiB` : `${(value / 1048576).toFixed(1)} MiB`;
const node = (tag, className, text) => { const value = document.createElement(tag); if (className) value.className = className; if (text !== undefined) value.textContent = text; return value; };
const link = (label, href, className) => { const value = node('a', className, label); value.href = href; return value; };
const button = (label, action, className) => { const value = node('button', className, label); value.type = 'button'; value.addEventListener('click', action); return value; };
const sourceIndex = `https://github.com/tangyixiao/CSP-2026/blob/${SOURCE_INDEX_REVISION}/SOURCES.md`;
function announce(message) { $('notice').textContent = message; $('notice').hidden = false; clearTimeout(announce.timer); announce.timer = setTimeout(() => { $('notice').hidden = true; }, 5000); }
function params() { const query = new URLSearchParams(location.search); return { view: query.get('view') || 'home', province: query.get('province') || '', group: ['J', 'S', 'all'].includes(query.get('group')) ? query.get('group') : 'S', query: query.get('q') || '', problem: query.get('problem') || '', sort: query.get('sort') || 'id', direction: query.get('direction') === 'desc' ? 'desc' : 'asc' }; }
function routeURL(next = {}) { const values = { ...params(), ...next }; const url = new URL(location.href); url.search = ''; for (const [key, value] of Object.entries(values)) if (value !== '' && value != null) url.searchParams.set(key === 'query' ? 'q' : key, value); return `${url.pathname}${url.search}`; }
function navigate(next) { scrollPositions.set(location.href, scrollY); history.pushState({}, '', routeURL(next)); void renderRoute(); }
function readerURL(file, other) { const query = new URLSearchParams({ left: file.path, mode: other ? 'split' : 'view', focus: '1' }); if (other) query.set('right', other.path); return `./?${query}`; }
async function json(url) { const response = await fetch(url); if (!response.ok) throw new Error(`目录读取失败（${response.status}）`); return response.json(); }
async function groupFiles(group) {
  if (!group || !/^catalog\/[A-Z]{2}-[JS]\.json$/.test(group.url)) throw new Error('地区目录无效');
  const key = `${state.catalog.revision}/${group.key}`;
  if (!cache.has(key)) {
    const request = json(`./${group.url}?v=${state.catalog.revision}`).then(data => { if (!Array.isArray(data.files)) throw new Error('文件目录格式无效'); return data.files; }).catch(error => { cache.delete(key); throw error; });
    cache.set(key, request);
    while (cache.size > 6) cache.delete(cache.keys().next().value);
  }
  return cache.get(key);
}
function groupsFor(province, group) { return state.catalog.groups.filter(item => (!province || item.province === province) && (group === 'all' || item.group === group)); }
function regionCodes() { return [...new Set(state.catalog.groups.map(item => item.province))]; }
function regionName(code) { return REGIONS[code]?.name || code; }
function putArtwork(container, code) { const art = node('div'); art.innerHTML = regionArtwork(code); container.append(...art.childNodes); container.style.setProperty('--region-color', REGIONS[code]?.accent || 'currentColor'); }
function intro(title, text, eyebrow) { const header = node('section', 'intro'); if (eyebrow) header.append(node('p', 'eyebrow', eyebrow)); header.append(node('h1', '', title)); if (text) header.append(node('p', 'lede', text)); return header; }
function sectionHeading(title, destination, label = '查看全部 →') { const row = node('div', 'section-heading'); row.append(node('h2', '', title)); if (destination) row.append(link(label, destination)); return row; }
function regionCover(code) {
  const cover = node('article', 'region-cover'); putArtwork(cover, code);
  const heading = node('div'), title = node('h3', 'region-title', regionName(code)); title.append(node('span', 'region-code', code));
  const groups = state.catalog.groups.filter(item => item.province === code);
  heading.append(title, node('p', 'region-count', `${number(groups.reduce((sum, item) => sum + item.contestantCount, 0))} 个组别目录标识`));
  const actions = node('div', 'region-links');
  for (const group of groups) actions.append(link(`${group.group} 归档 ↗`, routeURL({ view: 'browse', province: code, group: group.group, query: '', problem: '' })));
  cover.append(heading, actions); return cover;
}
function renderHome() {
  const header = intro('全国代码归档', 'CSP-J/S 2026 第二轮选手文件，按地区归档。', 'CSP 2026 / SOURCE ARCHIVE');
  header.append(node('p', 'facts', `已收录 ${regionCodes().length} 个地区 · J / S`));
  const actions = node('div', 'intro-actions');
  actions.append(link('浏览归档 →', routeURL({ view: 'browse', province: '', query: '', problem: '' }), 'primary-action'), button('随机一人 ↗', () => void randomPerson({ province: '', group: 'all', query: '', problem: '' }), 'quiet-action'), button('随机一题 ↗', () => void randomProblem({ province: '', group: 'all', query: '', problem: '' }), 'quiet-action'));
  header.append(actions); $('content').append(header);
  const preferred = ['ZJ', 'BJ', 'SC', 'FJ', 'GD', 'JS', 'LN', 'SH'];
  const codes = preferred.filter(code => regionCodes().includes(code));
  const covers = node('div', 'region-grid'); covers.append(...codes.slice(0, 5).map(regionCover)); $('content').append(covers);
  const small = node('div', 'region-grid compact'); small.append(...codes.slice(5).map(regionCover)); small.style.marginTop = '18px'; $('content').append(small);
  $('content').append(button(`全部 ${regionCodes().length} 个地区 ↓`, openRegions, 'all-regions'), sectionHeading('从文件里看看', routeURL({ view: 'discover' }), '前往发现 →'));
  void renderDiscoveries(false);
}
const discoveries = [
  { id: 'ZJ-S00007', title: '题目目录之外', path: 'ZJ/S/ZJ-S00007/mycode/pre_hub.cpp', kind: 'directory', description: 'mycode 中保留了多份程序。目录结构可以直接回查，不据文件名推定改写顺序。' },
  { id: 'ZJ-S00004', title: '从一段实现开始', path: 'ZJ/S/ZJ-S00004/crystal/crystal.cpp', kind: 'source', description: '查看 ch(int k) 的原始实现与上下文。这里是一条阅读入口，尚非特色定论。' },
  { id: 'ZJ-S00006', title: '注释中的样例', path: 'ZJ/S/ZJ-S00006/hub/hub.cpp', kind: 'comment', description: '文件中保留了长样例注释。物理行数与算法长度需要分开看。' },
];
async function renderDiscoveries(full) {
  const token = state.token, grid = node('div', 'discover-grid'); $('content').append(grid);
  if (full) $('content').append(node('p', 'method-note', '这里先展示已经回查的阅读入口；它们不是全国精选结论。后续发现由实际源码阅读与证据核对形成，每条材料保留路径和范围。'));
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
  return { snippet: lines.slice(start, start + 6).join('\n'), start: start + 1, end: Math.min(lines.length, start + 6) };
}
function addDiscussionCounts(items) {
  const snapshot = state.discussions;
  if (snapshot?.availability !== 'available' || snapshot.complete !== true || snapshot.catalogRevision !== state.catalog.revision) return items;
  return items.map(item => ({ ...item, discussionCount: snapshot.byContestant?.[item.id]?.threadCount || 0, discussionUpdatedAt: snapshot.byContestant?.[item.id]?.updatedAt || null }));
}
function contestantTile(item, current, token) {
  const tile = node('article', 'contestant-tile'), first = item.files.find(file => file.problem === current.problem) || item.files[0];
  const heading = node('div', 'tile-top'); heading.append(link(item.contestant, readerURL(first)));
  if (current.sort === 'bytes') heading.append(node('span', '', bytes(item.totalBytes)));
  else if (current.sort === 'files') heading.append(node('span', '', `${item.files.length} 个文件`));
  else if (current.sort === 'discussions') heading.append(node('span', '', item.discussionCount == null ? '讨论待同步' : `${item.discussionCount} 场关联讨论`));
  else if (current.sort === 'recent') heading.append(node('span', '', item.discussionUpdatedAt ? new Date(item.discussionUpdatedAt).toLocaleDateString('zh-CN') : '暂无讨论时间'));
  const pre = node('pre', 'tile-preview', item.files.slice(0, 6).map(file => file.path.slice(item.id.length + 1)).join('\n'));
  const caption = node('p', 'preview-caption', '原目录中的文件');
  const bottom = node('div', 'tile-bottom'), problems = node('div', 'tile-problems');
  for (const problem of item.problems.slice(0, 4)) { const file = item.files.find(value => value.problem === problem); problems.append(link(problem, readerURL(file))); }
  const menu = node('details', 'tile-menu'); menu.append(node('summary', '', '⋯')); menu.firstChild.setAttribute('aria-label', `${item.contestant} 的文件和比较操作`);
  const details = node('div');
  for (const file of item.files) {
    const row = node('div', 'file-detail-row'); row.append(link(`${file.path.slice(item.id.length + 1)} · ${bytes(file.size)}`, readerURL(file)));
    const compare = button('比较', () => { addCompare(file); menu.open = false; }); compare.setAttribute('aria-label', `将 ${file.path} 加入比较`); row.append(compare); details.append(row);
  }
  menu.append(details); bottom.append(problems, menu);
  tile.append(heading, pre, caption, bottom);
  artworkObserver.observe(tile);
  tile.loadPreview = () => { queuePreview(async () => { try { const source = await loadSource(first, { revision: state.catalog.revision }); if (state.token !== token || !tile.isConnected) return; const snippet = shortSource(source.text); pre.textContent = snippet.snippet; pre.classList.add('code-preview'); caption.textContent = `${first.problem} · 原文 L${snippet.start}–${snippet.end}`; } catch { /* Keep the real directory preview, not a fabricated code cover. */ } }); };
  return tile;
}
function addCompare(file) {
  if (!state.compare.some(item => item.path === file.path)) state.compare.push(file);
  state.compare = state.compare.slice(-2); renderCompareTray();
}
function renderCompareTray() { document.querySelector('.compare-tray')?.remove(); if (!state.compare.length) return; const tray = node('aside', 'compare-tray'); tray.setAttribute('aria-label', '待比较文件'); tray.append(node('span', '', state.compare.map(file => file.contestant).join(' / '))); if (state.compare.length === 2) tray.append(link('并排比较 →', readerURL(state.compare[0], state.compare[1]))); else tray.append(node('span', '', '再选一份文件')); tray.append(button('×', () => { state.compare = []; renderCompareTray(); })); tray.lastChild.setAttribute('aria-label', '清空比较选择'); document.body.append(tray); }
function renderBrowse() {
  const current = params(), code = regionCodes().includes(current.province) ? current.province : '';
  const header = intro(code ? `${regionName(code)}归档` : '按地区，慢慢翻阅', code ? `CSP-${current.group === 'all' ? 'J / S' : current.group} · 保留原始文件与目录` : '按省份连续浏览；进入一名选手，再展开他的文件。', 'BROWSE THE ARCHIVE');
  const actions = node('div', 'intro-actions'); actions.append(button('随机跳人 ↗', () => void randomPerson(), 'quiet-action'), button('随机跳题 ↗', () => void randomProblem(), 'quiet-action')); header.append(actions);
  const toolbar = node('form', 'browse-toolbar'); toolbar.addEventListener('submit', event => event.preventDefault());
  toolbar.append(button(code ? `${regionName(code)} ${code} · 更换地区` : '全部地区 · 选择地区', openRegions, 'scope-button'));
  const searchLabel = node('label'), search = node('input'); search.type = 'search'; search.placeholder = '搜索考号、题目或文件名'; search.value = current.query; search.setAttribute('aria-label', '搜索归档'); searchLabel.append(search);
  const selects = [['group', '组别', [['S', 'CSP-S'], ['J', 'CSP-J'], ['all', 'J / S']]], ['problem', '题目', [['', '全部题目'], ...['and', 'card', 'string', 'travel', 'crystal', 'hub', 'migrate', 'subway'].map(value => [value, value])]], ['sort', '排序', [['id', '考号'], ['bytes', '字节数'], ['files', '文件数'], ['discussions', '已关联讨论'], ['recent', '最近讨论']]], ['direction', '方向', [['asc', '升序'], ['desc', '降序']]]];
  toolbar.append(searchLabel);
  for (const [key, label, options] of selects) { const wrapper = node('label', '', label), select = node('select'); select.setAttribute('aria-label', label); for (const [value, name] of options) select.add(new Option(name, value)); select.value = current[key]; select.addEventListener('change', () => navigate({ [key]: select.value, query: search.value })); wrapper.append(select); toolbar.append(wrapper); }
  $('content').append(header, toolbar);
  const measureDetails = node('details', 'scope-note'); measureDetails.append(node('summary', '', '口径与同步状态'));
  const note = node('p', '', '排序范围为每个地区的完整当前筛选结果；字节数为筛选中源码/文本及备份的存储字节合计，不含下载目录中的其他格式，未知值置后。讨论按已关联线程去重，不是引用案例数。'); measureDetails.append(note); $('content').append(measureDetails);
  if (current.sort === 'discussions') note.textContent += state.discussions?.complete && state.discussions.catalogRevision === state.catalog.revision ? ` 同步于 ${new Date(state.discussions.syncedAt).toLocaleString('zh-CN')}；关联范围为单文件与已记录案例，${state.discussions.unmappedThreadCount || 0} 场讨论尚未关联。` : ' 讨论数据尚未成功同步，当前数值保持未知。';
  const result = node('div'); $('content').append(result);
  let viewToken = state.token;
  const redraw = () => { if (viewToken !== state.token || !result.isConnected) return; history.replaceState({}, '', routeURL({ query: search.value })); state.token++; viewToken = state.token; previews = []; artworkObserver.disconnect(); clearRegionObservers(); result.replaceChildren(); void appendRegions(result, code ? [code] : regionCodes(), params(), state.token); };
  search.addEventListener('input', () => { clearTimeout(searchTimer); searchTimer = setTimeout(redraw, 220); });
  void appendRegions(result, code ? [code] : regionCodes(), current, state.token);
}
async function appendRegions(container, codes, current, token) {
  let index = 0;
  const more = button('继续浏览下一个地区 ↓', () => void appendNext(), 'load-more');
  const sentinelObserver = new IntersectionObserver(entries => { if (entries.some(entry => entry.isIntersecting)) void appendNext(); }, { rootMargin: '200px' });
  regionObservers.add(sentinelObserver);
  let loading = false;
  async function fillSection(section, code, heading) {
    section.replaceChildren(heading);
    heading.querySelector('.region-result-count')?.remove();
    try {
      const files = (await Promise.all(groupsFor(code, current.group).map(groupFiles))).flat();
      if (token !== state.token) return;
      const items = sortContestants(addDiscussionCounts(groupContestants(files, { query: current.query, problem: current.problem })), { by: current.sort, direction: current.direction });
      if (codes.length === 1) { section.classList.add('single-region'); heading.querySelector('h2').textContent = `${number(items.length)} 个目录`; heading.querySelector('p').hidden = true; }
      else heading.append(node('span', 'region-result-count', `${number(items.length)} 个目录`));
      const grid = node('div', 'contestant-grid'); section.append(grid); let count = 0;
      const showMore = () => { const next = items.slice(count, count + pageSize); count += next.length; grid.append(...next.map(item => contestantTile(item, current, token))); pager.hidden = count >= items.length; pager.textContent = `继续看 ${Math.min(pageSize, items.length - count)} 个目录 ↓`; };
      const pager = button('更多目录', showMore, 'load-more'); section.append(pager); showMore();
      if (!items.length) section.append(node('p', 'empty', '没有符合当前筛选的文件。'));
    } catch (error) { if (token !== state.token) return; section.append(node('p', 'empty error', error.message), button('重试这个地区', () => void fillSection(section, code, heading), 'quiet-action')); }
  }
  async function appendNext() {
    if (token !== state.token) { sentinelObserver.disconnect(); regionObservers.delete(sentinelObserver); return; }
    if (loading || index >= codes.length) return;
    loading = true; const code = codes[index++]; more.disabled = true; more.textContent = '正在读取地区…';
    const section = node('section', 'region-section'), heading = node('div', 'region-heading'), title = node('div'); title.append(node('h2', '', regionName(code)), node('p', '', `${code} · CSP-${current.group === 'all' ? 'J / S' : current.group}`)); heading.append(title); putArtwork(heading, code); section.append(heading);
    container.append(section);
    await fillSection(section, code, heading);
    if (token !== state.token) return;
    loading = false; more.disabled = false; more.textContent = '继续浏览下一个地区 ↓';
    if (index < codes.length) { container.append(more); sentinelObserver.observe(more); } else { more.remove(); sentinelObserver.disconnect(); regionObservers.delete(sentinelObserver); }
  }
  await appendNext();
}
function renderSources() {
  $('content').append(intro('来源与许可', '回到原始发布记录，区分引用、归档与核验范围。', 'SOURCES / ATTRIBUTION'));
  const grid = node('div', 'source-grid');
  const entries = [
    ['省份原始资料', '来源索引整理官方入口、提供的资料包与实际核验范围。没有原始发布记录的地区明确保留缺口。', sourceIndex, '查看来源索引 ↗'],
    ['洛谷参考与比较材料', '保留原作者、发布时间和原链接。引用的相似度主张与独立字节核对分别呈现；缺原链接的摘录不补造网址。', `${sourceIndex}#attributed-luogu-comparison-materials`, '查看署名与材料 ↗'],
    ['项目代码与第三方内容', '项目自行拥有的网站、脚本与原创文档使用 Apache-2.0。选手代码、官方数据、引用与第三方资产保留各自权利。', `https://github.com/tangyixiao/CSP-2026/blob/${SOURCE_INDEX_REVISION}/NOTICE`, '查看许可范围 ↗'],
    ['主题、编辑器与地区配图', 'NOI 官网与 Dev-C++、Geany 是已注明的视觉参考。本站地区轮廓为原创抽象线稿，不是官方标识；阅读视图不提供编译或系统模拟。', `${sourceIndex}#reading-view-reference-material`, '查看参考与组件声明 ↗'],
  ];
  for (const [title, text, href, label] of entries) { const card = node('section', 'source-card'); card.append(node('h2', '', title), node('p', '', text), link(label, href)); grid.append(card); }
  $('content').append(grid, node('p', 'method-note', `当前目录：${regionCodes().length} 地区、${state.catalog.groups.length} 组别、${number(state.catalog.totalFiles)} 个源码或文本候选路径。文件包含备份、空文件及异常内容；目录身份不是自然人数或官方有效提交数。全国内容研究尚在进行。`));
  const links = node('div', 'source-links'); links.append(link('报告来源问题 ↗', 'https://github.com/tangyixiao/CSP-2026/issues/new/choose'), link('NOI 官网参考 ↗', 'https://noi.cn/'), link('组件许可 ↗', './third-party-licenses.txt')); $('content').append(links);
}
async function randomPerson(scope = {}) {
  if (state.busy) return;
  state.busy = true; const token = state.token, current = { ...params(), ...scope }, groups = groupsFor(current.province, current.group); let winner = null, count = 0;
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
    state.previousPerson = winner.id; location.href = readerURL(winner.files[0]);
  } catch (error) { announce(`抽取未完成：${error.message}。请重试。`); } finally { state.busy = false; }
}
async function randomProblem(scope = {}) {
  const current = { ...params(), ...scope }, token = state.token;
  if (state.busy) return; state.busy = true;
  try { const pool = new Set(); for (const group of groupsFor(current.province, current.group)) { announce(`正在汇集可用题目 · ${regionName(group.province)} ${group.group}`); const files = await groupFiles(group); if (token !== state.token) return; for (const item of groupContestants(files, { query: current.query })) for (const problem of item.problems) pool.add(problem); } const problem = sampleProblem([...pool].map(problem => ({ path: 'XX/S/p/file.cpp', problem })), { previousProblem: state.previousProblem }); if (!problem) { announce('当前范围内没有可用题目。'); return; } state.previousProblem = problem; navigate({ view: 'browse', province: current.province, group: current.group, query: current.query, problem }); announce(`随机题目：${problem}`); } catch (error) { announce(error.message); } finally { state.busy = false; }
}
function openRegions() { const directory = $('region-directory'); directory.replaceChildren(link('全部地区', routeURL({ view: 'browse', province: '', query: '', problem: '' })), ...regionCodes().map(code => link(`${regionName(code)} ${code}`, routeURL({ view: 'browse', province: code, query: '', problem: '' })))); $('regions-dialog').showModal(); }
async function renderRoute() {
  state.token++; previews = []; artworkObserver?.disconnect();
  clearTimeout(searchTimer); clearRegionObservers();
  artworkObserver = new IntersectionObserver(entries => { for (const entry of entries) if (entry.isIntersecting) { artworkObserver.unobserve(entry.target); entry.target.loadPreview?.(); } }, { rootMargin: '80px' });
  $('content').replaceChildren();
  const current = params(); for (const item of document.querySelectorAll('[data-view]')) { if (item.dataset.view === current.view) item.setAttribute('aria-current', 'page'); else item.removeAttribute('aria-current'); }
  if (current.view === 'browse') renderBrowse(); else if (current.view === 'discover') { $('content').append(intro('在原文件里，找线索', '从具体内容开始阅读，保留上下文，也保留疑问。', 'DISCOVER / READ CLOSELY')); void renderDiscoveries(true); } else if (current.view === 'sources') renderSources(); else renderHome();
  scrollTo(0, scrollPositions.get(location.href) || 0);
}
function applyColorMode(choice) { let theme = choice; if (theme === 'system') theme = matchMedia('(prefers-color-scheme: dark)').matches ? 'dark' : 'light'; document.documentElement.dataset.theme = theme === 'dark' ? 'dark' : 'light'; try { localStorage.setItem('csp-project-theme', choice); } catch { /* Current mode still works. */ } }
$('appearance').value = applyAppearance(getSavedAppearance());
$('appearance').addEventListener('change', event => applyAppearance(event.target.value));
try { $('color-mode').value = ['light', 'dark', 'system'].includes(localStorage.getItem('csp-project-theme')) ? localStorage.getItem('csp-project-theme') : 'light'; } catch { /* Default light. */ }
applyColorMode($('color-mode').value); $('color-mode').addEventListener('change', event => applyColorMode(event.target.value));
matchMedia('(prefers-color-scheme: dark)').addEventListener('change', () => { if ($('color-mode').value === 'system') applyColorMode('system'); });
$('close-regions').addEventListener('click', () => $('regions-dialog').close());
if (import.meta.env.DEV) document.querySelector('a[href="../preview/downloads.html"]').href = 'https://tangyixiao.github.io/CSP-2026/preview/downloads.html';
document.addEventListener('click', event => { const target = event.target.closest('a'); if (!target || event.button || event.metaKey || event.ctrlKey || event.shiftKey || event.altKey) return; const url = new URL(target.href, location.href); if (url.origin === location.origin && url.pathname === location.pathname && url.search) { event.preventDefault(); $('regions-dialog').close(); scrollPositions.set(location.href, scrollY); history.pushState({}, '', url); void renderRoute(); } });
window.addEventListener('popstate', () => void renderRoute());
try {
  state.catalog = await json('./catalog/index.json');
  if (!state.catalog.groups?.length || !/^[a-f0-9]{40}$/.test(state.catalog.revision)) throw new Error('归档目录格式无效');
  $('revision').textContent = `归档 ${state.catalog.revision.slice(0, 8)} · ${regionCodes().length} 地区`;
  state.discussions = await json('./discussion-metadata.json').catch(() => null);
  await renderRoute();
} catch (error) { $('content').replaceChildren(node('h1', '', '归档暂未打开'), node('p', 'empty error', error.message), button('重新读取', () => location.reload(), 'quiet-action')); }
