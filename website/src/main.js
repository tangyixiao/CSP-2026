import '../shared/site-shell.css';
import { mountSiteShell } from '../shared/site-shell.js';
import { hexPage, HEX_PAGE_BYTES, parseHexOffset } from './hex-view.js';
import { mountFormatControls } from './format-controls.js';
import { catalogPreviewFiles, contestProblemOptions } from './archive-browse.js';
import { scopeGroups } from './archive-browse.js';
import { createBrowseLoader } from './browse-index.js';
import { readReaderScope, writeReaderScope, readerScopeKey, filterReaderFiles, resolveReaderFile, appendSearchText } from './scope-navigation.js';
import '@primer/primitives/dist/css/functional/themes/light.css';
import '@primer/primitives/dist/css/functional/themes/dark.css';
import '@primer/css/dist/primitives.css';
import '@primer/css/dist/buttons.css';
import '@primer/css/dist/forms.css';
import '@primer/css/dist/navigation.css';
import '@primer/octicons/build/build.css';
import './style.css';
import { initializeIcons, setIcon } from './icons.js';
import cases from './cases.json';
import { createCodeWorkbench } from './editor.js';
import { loadSource, githubUrl } from './source.js';
import { mountDiscussion } from './discussions.js';
import { saveOriginalFile, saveContestantDirectory } from './downloads.js';
import { DOWNLOAD_MODE_KEY, savedDownloadMode } from '../project-site/download-mode.js';
import { groupContestants, sampleContestant, sampleProblem, contestProblemFiles } from './archive-browse.js';
import { getProvenance } from './provenance.js';
import { normalizeReadingProfile } from './reading-profiles.js';

let formatControls, loadReaderScope, readerSearchTimer;
const $ = (id) => document.getElementById(id);
const PAGE_SIZE = 24;
const caseItems = Array.isArray(cases) ? cases : [];
const catalogCache = new Map();
const mobile = window.matchMedia('(max-width: 700px)');
const initialQuery = new URLSearchParams(window.location.search);
const state = {
  catalog: null, files: [], page: 0, directorySequence: 0, caseSequence: 0,
  activeCase: null, ambiguity: [], directoryError: null, directoryReady: false, loadedDirectory: null,
  provinces: '', failedGroups: [],
  downloadMode: savedDownloadMode(),
  theme: initialQuery.get('theme') === 'system' ? (matchMedia('(prefers-color-scheme: dark)').matches ? 'dark' : 'light') : ['light', 'dark'].includes(initialQuery.get('theme')) ? initialQuery.get('theme') : initialQuery.get('profile') === 'devcpp' ? 'light' : getSavedTheme(),
  mode: mobile.matches ? 'inline' : validMode(initialQuery.get('mode')),
  ignoreWhitespace: true, editor: null, diffCount: null, diffIncomplete: false, commentsOpen: true,
  left: emptySlot(), right: emptySlot(),
  readingProfile: getSavedReadingProfile(),
};

function getSavedReadingProfile() {
  try { return normalizeReadingProfile(initialQuery.get('profile') || localStorage.getItem('csp-reading-profile')); }
  catch { return 'csp'; }
}

function emptySlot() { return { file: null, source: null, status: 'empty', error: '', sequence: 0, controller: null }; }
function validMode(mode) { return ['view', 'split', 'inline'].includes(mode) ? mode : 'split'; }
function getSavedTheme() { return document.documentElement.dataset.theme === 'dark' ? 'dark' : 'light'; }
function el(tag, className, text) { const node = document.createElement(tag); if (className) node.className = className; if (tag === 'button' && !className?.startsWith('case-item')) node.classList.add('btn'); if (text !== undefined) node.textContent = text; return node; }
function normalized(value) { return String(value ?? '').toUpperCase(); }
function formatNumber(value) { return Number(value || 0).toLocaleString('zh-CN'); }
function formatBytes(value) { if (value === null || value === undefined || !Number.isFinite(Number(value))) return '大小读取后显示'; const bytes = Number(value); return bytes < 1024 ? `${bytes} B` : bytes < 1024 * 1024 ? `${(bytes / 1024).toFixed(1)} KB` : `${(bytes / (1024 * 1024)).toFixed(2)} MB`; }
function fileName(file) { return file?.name || file?.path?.split('/').at(-1) || '未选择文件'; }
function titleOfFile(file) { return file ? `${file.contestant || file.path.split('/').at(-2)} / ${fileName(file)}` : '未选择文件'; }
function formatError(error) { return error?.message || String(error || '未知错误'); }
function toast(message) { $('toast').textContent = message; $('toast').hidden = false; clearTimeout(toast.timer); toast.timer = setTimeout(() => { $('toast').hidden = true; }, 3800); }

function setTheme(theme, { preserveProjectChoice = false } = {}) {
  state.theme = theme;
  document.documentElement.dataset.theme = theme;
  document.documentElement.dataset.colorMode = theme;
  document.querySelector('meta[name="theme-color"]').content = theme === 'dark' ? '#1c2531' : '#ffffff';
  try {
    localStorage.setItem('csp-code-theme', theme);
    if(!preserveProjectChoice)localStorage.setItem('csp-project-theme',theme);
  } catch { /* The current theme still works without storage. */ }
  state.editor?.setTheme(theme === 'dark' ? 'vs-dark' : 'vs');
  updateReadingProfileLabel();
  if (state.commentsOpen) renderDiscussion();
  updateLocation();
}

function setMode(mode, { announce = false } = {}) {
  state.mode = mobile.matches ? 'inline' : validMode(mode);
  document.body.dataset.readerMode = state.mode;
  document.querySelector('.workbench-heading h1').textContent = state.mode === 'view' || !state.left.file || !state.right.file ? (state.left.source?.viewFormat === 'hex' || state.right.source?.viewFormat === 'hex' ? '十六进制查看' : '代码阅读') : '代码比较';
  document.body.dataset.viewSide = state.left.file ? 'left' : 'right';
  document.querySelectorAll('[data-mode]').forEach((button) => { button.setAttribute('aria-pressed', String(button.dataset.mode === state.mode)); });
  document.querySelector('[data-mode="inline"]').textContent = mobile.matches ? '单栏阅读' : '内联';
  for (const id of ['ignore-whitespace', 'previous-change', 'next-change']) {
    $(id).disabled = mobile.matches;
    if (mobile.matches) $(id).title = '窄屏使用单栏阅读；请在桌面查看对齐差异。';
    else $(id).removeAttribute('title');
  }
  state.editor?.setMode(state.mode);
  if (announce && mode === 'split' && mobile.matches) toast('已切换为单栏阅读；桌面支持并排对齐。');
  updateLocation();
}

function switchPanel(panel) {
  for (const name of ['files', 'cases']) {
    const selected = name === panel;
    $(`tab-${name}`).classList.toggle('is-active', selected);
    $(`tab-${name}`).setAttribute('aria-selected', String(selected));
    $(`tab-${name}`).tabIndex = selected ? 0 : -1;
    $(`panel-${name}`).hidden = !selected;
  }
}

function updateReaderNavigation(url = new URL(window.location.href)) {
  const folderReturn = url.searchParams.get('returnTo');
  if (folderReturn) {
    try {
      const destination = new URL(folderReturn, window.location.href);
      if (destination.origin === location.origin && destination.pathname === new URL('./browse.html', location.href).pathname && destination.searchParams.get('view') === 'contestant' && !destination.username && !destination.password) {
        let back = $('folder-return');
        if (!back) { back = el('a', 'folder-return', '← 返回选手目录'); back.id = 'folder-return'; document.querySelector('.workbench-heading').before(back); }
        back.href = `${destination.pathname}${destination.search}`;
      }
    } catch { /* Invalid return links keep the regular archive navigation. */ }
  }
  const comparing = Boolean(state.left.file && state.right.file && state.mode !== 'view');
  for (const anchor of document.querySelectorAll('a[data-reader-nav]')) {
    const comparisonLink = anchor.dataset.readerNav === 'compare';
    const destination = new URL(url);
    destination.searchParams.set('mode', comparisonLink ? state.mode === 'inline' ? 'inline' : 'split' : 'view');
    anchor.href = `${destination.pathname}${destination.search}${destination.hash}`;
    if (comparing === comparisonLink) anchor.setAttribute('aria-current', 'page');
    else anchor.removeAttribute('aria-current');
  }
}

function updateLocation() {
  if (!state.catalog) { updateReaderNavigation(); return; }
  const url = new URL(window.location.href);
  for (const side of ['left', 'right']) { const path = state[side].file?.path; if (path) url.searchParams.set(side, path); else url.searchParams.delete(side); }
  for (const side of ['left', 'right']) { if (state[side].status === 'loading') continue; const source = state[side].source; if (source?.viewFormat === 'hex' && source.offset) url.searchParams.set(`${side}Offset`, String(source.offset)); else url.searchParams.delete(`${side}Offset`); }
  if (state.activeCase) url.searchParams.set('case', state.activeCase.id); else url.searchParams.delete('case');
  url.searchParams.set('mode', state.mode);
  url.searchParams.set('theme', window.CspProjectTheme.getChoice());
  if (state.readingProfile !== 'csp') url.searchParams.set('profile', state.readingProfile); else url.searchParams.delete('profile');
  if (state.directoryReady && readerScopeKey(currentReaderScope()) === state.loadedDirectory) {
    url.search = writeReaderScope(url.searchParams, currentReaderScope(), { search: $('contestant-input').value.trim(), problem: $('problem-select').value, page: state.page }).toString();
  }
  window.history.replaceState(window.history.state, '', url);
  updateReaderNavigation(url);
}

async function fetchJSON(url) {
  const response = await fetch(url);
  if (!response.ok) throw new Error(`目录请求失败（HTTP ${response.status}）`);
  return response.json();
}

async function groupData(group) {
  if (!group) return null;
  if (!catalogCache.has(group.key)) {
    const url = new URL(group.url, new URL('.', document.baseURI));
    url.searchParams.set('v', state.catalog.revision);
    const request = fetchJSON(url).then((data) => {
      if (!Array.isArray(data.files)) throw new Error('目录格式无效，缺少文件列表。');
      if (data.extraFiles !== undefined && !Array.isArray(data.extraFiles)) throw new Error('下载目录格式无效。');
      return data;
    }).catch((error) => { catalogCache.delete(group.key); throw error; });
    catalogCache.set(group.key, request);
  }
  return catalogCache.get(group.key);
}
async function groupFiles(group, { includeExtras = false } = {}) {
  const data = await groupData(group);
  if (!data) return [];
  return includeExtras ? [...data.files, ...(data.extraFiles || [])] : catalogPreviewFiles(data);
}

let downloadBusy = false;
function initializeDownloads() {
  const downloadsLink = document.querySelector('.nav-downloads');
  downloadsLink.href = import.meta.env.DEV ? 'https://tangyixiao.github.io/CSP-2026/preview/downloads.html' : '../preview/downloads.html';
  const modeLabel = el('label','download-mode-label');
  const select = document.createElement('select');
  select.setAttribute('aria-label','下载模式');
  select.append(new Option('国际直连','international'),new Option('国内加速','domestic'));
  select.value = state.downloadMode;
  select.addEventListener('change',()=>{ state.downloadMode=select.value;try{localStorage.setItem(DOWNLOAD_MODE_KEY,select.value);}catch{/* current choice remains */} });
  modeLabel.append(select);
  document.querySelector('.reader-options').append(modeLabel);
  for (const side of ['left','right']) {
    const menu=el('details','source-download');menu.id=`${side}-download-menu`;
    const summary=el('summary','','下载');
    summary.setAttribute('aria-label',`下载 ${side==='left'?'A':'B'} 文件或选手目录`);
    const actions=el('div','source-download-actions');
    for(const [kind,label] of [['file','下载文件'],['folder','下载选手目录 ZIP']]) {
      const button=el('button','',label);button.type='button';
      button.addEventListener('click',async()=>{
        if(downloadBusy){toast('另一个下载正在准备，请稍候。');return;}
        const file=state[side].file;if(!file||!state.catalog)return;
        const revision=state.catalog.revision;downloadBusy=true;button.disabled=true;menu.open=false;
        try {
          if(kind==='file') { await saveOriginalFile(file,revision,state.downloadMode);toast('原文件已下载。'); }
          else {
            toast('正在准备选手目录 ZIP…');
            const [province,group]=file.path.split('/');
            const files=await groupFiles(findGroup(province,group),{includeExtras:true});
            const count=await saveContestantDirectory(file,files,revision,state.downloadMode);
            toast(`已下载选手目录 ZIP，共 ${count} 个文件。`);
          }
        } catch(error){toast(formatError(error));}
        finally{downloadBusy=false;button.disabled=false;}
      });
      actions.append(button);
    }
    menu.append(summary,actions);
    $(`${side}-copy`).before(menu);
  }
  document.addEventListener('click',event=>{for(const menu of document.querySelectorAll('.source-download'))if(!menu.contains(event.target))menu.open=false;});
  document.addEventListener('keydown',event=>{
    if(event.key!=='Escape')return;
    const menu=document.querySelector('.source-download[open]');
    if(menu){menu.open=false;menu.querySelector('summary').focus();}
  });
}

function findGroup(province, group) { return state.catalog?.groups.find((item) => normalized(item.province) === normalized(province) && normalized(item.group) === normalized(group)); }
function readerRegionCodes() { return [...new Set(state.catalog.groups.map(group => group.province))]; }
function currentReaderScope() {
  const scope = $('reader-scope').value;
  return { scope, province: scope === 'single' ? $('province-select').value : '', provinces: scope === 'multiple' ? state.provinces : '', group: $('group-select').value };
}
function refreshReaderScope() {
  const scope = $('reader-scope').value, multiple = scope === 'multiple';
  $('reader-province-field').hidden = scope !== 'single';
  $('reader-scope-pair').classList.toggle('is-wide-group', scope !== 'single');
  $('reader-provinces').hidden = !multiple;
  const chosen = new Set(state.provinces.split(','));
  for (const checkbox of $('reader-province-options').querySelectorAll('input')) checkbox.checked = chosen.has(checkbox.value);
  $('reader-provinces').querySelector('summary').textContent = `选择省份（${chosen.has('') ? chosen.size - 1 : chosen.size}）`;
  updateReaderProvinceApply();
}
function updateReaderProvinceApply() {
  const count = [...$('reader-province-options').querySelectorAll('input')].filter(input => input.checked).length;
  $('reader-apply-provinces').disabled = count === 0;
  $('reader-provinces').querySelector('summary').textContent = `选择省份（${count}）`;
}
function populateProvinces() {
  const provinces = new Map();
  for (const group of state.catalog.groups) if (!provinces.has(group.province)) provinces.set(group.province, group.label?.split(' · ')[0] || group.province);
  $('province-select').replaceChildren(...Array.from(provinces, ([value, label]) => new Option(`${label} · ${value}`, value)));
  const legend = el('legend', '', '合并浏览的省份'); $('reader-province-options').replaceChildren(legend);
  for (const [code, title] of provinces) {
    const label = el('label'), checkbox = el('input'); checkbox.type = 'checkbox'; checkbox.value = code;
    checkbox.addEventListener('change', updateReaderProvinceApply); label.append(checkbox, el('span', '', `${title} ${code}`)); $('reader-province-options').append(label);
  }
  for (const id of ['province-select', 'group-select', 'reader-scope']) $(id).disabled = false;
  refreshReaderScope();
}
function populateProblems(preserve = '') {
  const problems = contestProblemOptions($('group-select').value);
  $('problem-select').replaceChildren(new Option('全部题目', ''), ...problems.map(problem => new Option(problem, problem)));
  $('problem-select').value = problems.includes(preserve) ? preserve : ''; $('problem-select').disabled = false;
}
async function loadDirectory(options = {}) {
  if (!state.catalog) return;
  const { province, group, provinces, scope, search, problem, page = 0 } = options;
  if (province) $('province-select').value = province;
  if (group) $('group-select').value = group;
  if (scope) $('reader-scope').value = scope;
  else if (province) $('reader-scope').value = 'single';
  if (provinces !== undefined) state.provinces = provinces;
  if ($('reader-scope').value === 'multiple' && !state.provinces && provinces === undefined) state.provinces = $('province-select').value;
  if (search !== undefined) $('contestant-input').value = search;
  refreshReaderScope();
  const sequence = ++state.directorySequence, active = () => sequence === state.directorySequence;
  state.files = []; state.failedGroups = []; state.page = Number.isSafeInteger(Number(page)) && Number(page) >= 0 ? Number(page) : 0;
  state.directoryReady = false; state.directoryError = null;
  $('file-list').setAttribute('aria-busy', 'true'); $('file-list').replaceChildren(el('div', 'list-empty', '正在加载所选范围的文件索引…'));
  $('result-count').textContent = '正在加载目录'; $('retry-catalog').hidden = true;
  $('problem-select').disabled = true; $('page-prev').disabled = true; $('page-next').disabled = true;
  try {
    const selection = currentReaderScope(), groups = scopeGroups(state.catalog.groups, selection);
    if (!groups.length) throw new Error('当前范围没有文件，请调整省份或组别。');
    loadReaderScope ||= createBrowseLoader(state.catalog, fetchJSON, groupData);
    const loaded = await loadReaderScope(groups, { isCurrent: active });
    if (!active() || loaded.cancelled) return;
    if (!loaded.files.length && loaded.failedGroups.length) throw new Error('所选范围的文件索引加载失败，请重试。');
    state.files = loaded.files; state.failedGroups = loaded.failedGroups;
    state.loadedDirectory = readerScopeKey(selection); state.directoryReady = true;
    populateProblems(problem ?? ''); renderFiles();
    $('retry-catalog').hidden = !loaded.failedGroups.length;
  } catch (error) {
    if (!active()) return;
    state.directoryError = error; $('file-list').replaceChildren(el('div', 'list-empty', formatError(error)));
    $('result-count').textContent = '目录加载失败'; $('retry-catalog').hidden = false;
  } finally { if (active()) $('file-list').setAttribute('aria-busy', 'false'); }
}

function renderFiles() {
  if (state.directoryError || !state.directoryReady) return;
  const search = $('contestant-input').value.trim().toLowerCase();
  const problem = $('problem-select').value;
  const matched = filterReaderFiles(state.files, { query: search, problem });
  const pages = Math.max(1, Math.ceil(matched.length / PAGE_SIZE));
  state.page = Math.min(state.page, pages - 1);
  const nodes = matched.slice(state.page * PAGE_SIZE, (state.page + 1) * PAGE_SIZE).map((file) => {
    const item = el('article', 'file-item');
    if (state.left.file?.path === file.path || state.right.file?.path === file.path) item.classList.add('is-selected');
    const heading = el('div', 'file-item-heading');
    const extension = fileName(file).toLowerCase().replace(/\.gz$/, '').split('.').at(-1);
    const fileType = ['cpp', 'cc', 'cxx', 'c', 'h', 'hpp'].includes(extension) ? 'C++' : extension === 'pas' ? 'PAS' : extension === 'py' ? 'PY' : 'SRC';
    const fileIcon = el('span', 'file-icon'); setIcon(fileIcon, 'file'); fileIcon.title = fileType;
    const title = el('span', 'file-item-title'); appendSearchText(title, file.contestant || file.path.split('/').at(-2), search); heading.append(fileIcon, title);
    const subtitle = el('p', 'file-item-subtitle'); appendSearchText(subtitle, `${file.problem || '其他文件'} / ${fileName(file)}`, search);
    subtitle.title = file.path;
    const bottom = el('div', 'file-item-bottom');
    const actions = el('div', 'file-actions');
    for (const [side, label] of [['left', 'A'], ['right', 'B']]) {
      const button = el('button', '', `设为 ${label}`);
      button.type = 'button';
      button.setAttribute('aria-label', `将 ${titleOfFile(file)} 设为 ${label} 文件`);
      button.setAttribute('aria-pressed', String(state[side].file?.path === file.path));
      button.addEventListener('click', () => { void selectFile(side, file); });
      actions.append(button);
    }
    if (file.size != null) bottom.append(el('span', 'file-size', formatBytes(file.size)));
    bottom.append(actions);
    item.append(heading, subtitle, bottom);
    return item;
  });
  $('file-list').replaceChildren(...(nodes.length ? nodes : [el('div', 'list-empty', '没有匹配文件，请调整考号、题目或省份。')]));
  $('result-count').textContent = `${state.failedGroups.length ? '部分目录 · ' : ''}${formatNumber(matched.length)} 个文件${search || problem ? ' · 已筛选' : ''}`;
  $('page-indicator').textContent = `${state.page + 1} / ${formatNumber(pages)}`;
  $('page-prev').disabled = state.page <= 0;
  $('page-next').disabled = state.page + 1 >= pages;
  updateLocation();
}

function renderCases() {
  const query = $('case-input').value.toLowerCase().trim();
  const filtered = caseItems.filter((item) => !query || JSON.stringify(item).toLowerCase().includes(query));
  $('case-count').textContent = String(caseItems.length);
  $('case-list').replaceChildren(...filtered.map((item) => {
    const button = el('button', `case-item${state.activeCase?.id === item.id ? ' is-active' : ''}`);
    button.type = 'button';
    button.setAttribute('aria-pressed', String(state.activeCase?.id === item.id));
    const top = el('div', 'case-item-top');
    top.append(el('span', '', `CSP-${item.left.group} · ${item.left.province}`), el('span', 'case-item-problem', item.left.problem === item.right.problem ? item.left.problem : `${item.left.problem} / ${item.right.problem}`));
    const names = el('div', 'case-item-names');
    names.append(el('span', '', item.left.contestant), el('span', '', item.right.contestant));
    button.append(top, names);
    button.addEventListener('click', () => { void selectCase(item); });
    return button;
  }));
  if (!filtered.length) $('case-list').append(el('div', 'list-empty', '没有匹配的材料，试试考号或题目名。'));
}

function renderCaseContext() {
  const item = state.activeCase;
  $('case-context').hidden = !item;
  $('case-ambiguity').hidden = !item || !state.ambiguity.length;
  if (!item) return;
  $('case-context-title').textContent = `${item.left.contestant} ↔ ${item.right.contestant} · ${item.left.problem === item.right.problem ? item.left.problem : `${item.left.problem} / ${item.right.problem}`}`;
  $('case-claim').textContent = item.claim || '';
  $('case-note').textContent = item.note || '';
  $('case-note').hidden = !item.note;
  $('case-source').hidden = !item.sourceUrl;
  if (item.sourceUrl) $('case-source').href = item.sourceUrl;
  $('case-provenance').textContent = [item.sourceTitle || '用户提供的讨论摘录', item.sourceAuthor && `作者 ${item.sourceAuthor}`, item.sourceDate, !item.sourceUrl && '原帖链接待补'].filter(Boolean).join(' · ');
  $('case-ambiguity').hidden = !state.ambiguity.length;
  const choices = [];
  for (const choice of state.ambiguity) {
    choices.push(el('p', '', `${choice.side === 'left' ? 'A' : 'B'} · ${choice.selector.contestant} / ${choice.selector.problem}：${choice.files.length ? '找到多份文件，请明确选择一份。' : '未找到匹配文件，请从文件列表选择。'}`));
    for (const file of choice.files) {
      const button = el('button', '', file.path);
      button.type = 'button';
      button.addEventListener('click', () => {
        state.ambiguity = state.ambiguity.filter((entry) => entry !== choice);
        renderCaseContext();
        void selectFile(choice.side, file, { keepCase: true });
      });
      choices.push(button);
    }
  }
  $('case-ambiguity').replaceChildren(...choices);
}

async function selectCase(item) {
  const sequence = ++state.caseSequence;
  state.activeCase = item;
  state.ambiguity = [];
  clearSource('left', { keepCase: true });
  clearSource('right', { keepCase: true });
  renderCases();
  renderCaseContext();
  updateLocation();
  if (state.commentsOpen) renderDiscussion();
  try {
    const selectors = [['left', item.left], ['right', item.right]];
    const results = await Promise.all(selectors.map(async ([side, selector]) => {
      const files = await groupFiles(findGroup(selector.province, selector.group));
      const matched = files.filter((file) => normalized(file.contestant) === normalized(selector.contestant) && normalized(file.problem) === normalized(selector.problem));
      return { side, selector, files: matched };
    }));
    if (sequence !== state.caseSequence) return;
    for (const result of results) {
      if (result.files.length === 1) void selectFile(result.side, result.files[0], { keepCase: true });
      else state.ambiguity.push(result);
    }
    renderCaseContext();
    await loadDirectory({ province: item.left.province, group: item.left.group, search: item.left.contestant, problem: item.left.problem });
  } catch (error) {
    if (sequence !== state.caseSequence) return;
    $('source-status').textContent = `材料目录读取失败：${formatError(error)}`;
    $('source-status').classList.add('has-error');
    const retry = el('button', '', '重新打开材料');
    retry.type = 'button'; retry.addEventListener('click', () => { void selectCase(item); });
    $('source-status').append(retry);
  }
}

function clearSource(side, { keepCase = false } = {}) {
  const old = state[side];
  old.controller?.abort();
  state[side] = { ...emptySlot(), sequence: old.sequence + 1 };
  state.diffCount = null;
  if (!keepCase) { state.activeCase = null; state.ambiguity = []; state.caseSequence++; renderCases(); renderCaseContext(); }
  renderSources();
  syncEditor();
  renderFiles();
  updateLocation();
  if (state.commentsOpen) renderDiscussion();
}

async function selectFile(side, file, { keepCase = false } = {}) {
  if (!keepCase) { state.activeCase = null; state.ambiguity = []; state.caseSequence++; renderCases(); renderCaseContext(); }
  const old = state[side];
  old.controller?.abort();
  const sequence = old.sequence + 1;
  const controller = new AbortController();
  state[side] = { file, source: null, status: 'loading', error: '', sequence, controller };
  state.diffCount = null;
  renderSources(); syncEditor(); renderFiles(); updateLocation();
  if (state.commentsOpen) renderDiscussion();
  try {
    file = await resolveReaderFile(file, fileFromPath);
    if (state[side].sequence !== sequence || controller.signal.aborted) return;
    state[side].file = file; renderSources();
    const source = await loadSource(file, { revision: state.catalog.revision, signal: controller.signal });
    if (state[side].sequence !== sequence || controller.signal.aborted) return;
    state[side].source = source;
    state[side].status = 'ready';
    if (source.viewFormat === 'hex') {
      let offset = 0; try { offset = parseHexOffset(initialQuery.get(side) === file.path ? initialQuery.get(`${side}Offset`) || '0' : '0'); } catch { /* start at zero */ }
      Object.assign(source, hexPage(source.bytes, offset));
    }
    void formatControls?.formatSource(source);
  } catch (error) {
    if (state[side].sequence !== sequence || controller.signal.aborted) return;
    state[side].status = 'error';
    state[side].error = formatError(error);
  }
  if (state[side].sequence !== sequence) return;
  renderSources(); syncEditor(); updateLocation();
}

function sourceModel(side) {
  const slot = state[side];
  if (slot.status !== 'ready' || !slot.source) return null;
  return { path: slot.file.path, text: formatControls?.display(slot.source) ?? slot.source.text, language: slot.source.language || 'cpp' };
}

function syncEditor() {
  if (!state.editor) return;
  state.editor.setSources(sourceModel('left'), sourceModel('right'));
  renderComparisonStatus();
}

function sourceBytes(source) { return source.byteLength ?? (typeof source.bytes === 'number' ? source.bytes : source.bytes?.byteLength); }

function renderMetadata(side) {
  const slot = state[side];
  const container = $(`${side}-metadata`);
  const label = el('div', 'metadata-label');
  label.append(el('span', 'side-badge', side === 'left' ? 'A' : 'B'), el('strong', '', titleOfFile(slot.file)));
  container.replaceChildren(label);
  if (!slot.file) { container.append(el('p', '', '请选择文件。')); return; }
  if (slot.status === 'loading') { container.append(el('p', '', '正在加载文件并校验…')); return; }
  if (slot.status === 'error') {
    container.append(el('p', '', slot.error)); const retry = el('button', 'text-button', '重新加载文件'); retry.type = 'button';
    retry.addEventListener('click', () => { void selectFile(side, slot.file, { keepCase: true }); });
    const raw = el('a', 'text-link', '打开原文件 ↗'); raw.href = githubUrl(slot.file.path, state.catalog.revision); raw.target = '_blank'; raw.rel = 'noreferrer';
    container.append(retry, raw); return;
  }
  const source = slot.source;
  const dl = el('dl');
  for (const [name, value] of [['路径', slot.file.path], ['大小', `${formatBytes(sourceBytes(source))}${source.compressed ? `（解压后；归档 ${formatBytes(source.archiveByteLength)}）` : ''}`], ['编码', source.encoding || '未提供'], ['SHA-256', source.contentSha256 || source.sha256 || '摘要未提供']]) {
    dl.append(el('dt', '', name), el('dd', '', value));
  }
  const actions = el('div', 'metadata-actions');
  const copy = el('button', '', source.viewFormat === 'hex' ? '复制当前页十六进制' : '复制原文'); copy.type = 'button'; copy.addEventListener('click', async () => { try { await copyText(source.text); toast(`${side === 'left' ? 'A' : 'B'} ${source.viewFormat === 'hex' ? '当前页十六进制' : '文件原文'}已复制。`); } catch { toast('复制失败，请在代码视图中选择并复制。'); } });
  const raw = el('a', '', '查看原始文件 ↗'); raw.href = githubUrl(slot.file.path, state.catalog.revision); raw.target = '_blank'; raw.rel = 'noreferrer';
  actions.append(copy, raw);
  container.append(dl, actions);
  const provenance = getProvenance(slot.file.path, state.catalog.revision);
  const record = el('div', 'source-provenance');
  const citation = el('a', '', provenance.title); citation.href = provenance.sourceUrl; citation.target = '_blank'; citation.rel = 'noreferrer';
  record.append(citation, el('p', '', provenance.verificationScope), el('p', '', provenance.licenseScope));
  container.append(record);
  if (source.compressed) container.append(el('p', '', '这里的 SHA-256 对解压后的源文件字节计算。'));
}

function renderComparisonStatus() {
  const left = state.left.source;
  const right = state.right.source;
  const target = $('comparison-status');
  target.removeAttribute('data-equal');
  if (left && right) {
    const hashA = left.contentSha256 || left.sha256;
    const hashB = right.contentSha256 || right.sha256;
    if (hashA && hashB && hashA === hashB) { target.textContent = '两份源代码逐字节一致 · SHA-256 相同'; target.dataset.equal = 'true'; }
    else { target.textContent = mobile.matches ? '源文件字节有差异 · 窄屏高亮阅读' : `源文件字节有差异${state.diffCount === null ? '' : ` · ${state.diffCount} 处显示差异`}${state.ignoreWhitespace ? ' · 忽略行首尾空白' : ''}`; }
  } else if (state.left.status === 'loading' || state.right.status === 'loading') target.textContent = '正在读取源文件…';
  else if (left || right) target.textContent = '已打开 1 份源文件 · 选择另一份即可比较';
  else target.textContent = '选择两份文件即可比较';
  if (state.diffIncomplete && left && right) target.textContent += ' · 差异计算达到时限，当前显示结果可能不完整';
  const isHex = left?.viewFormat === 'hex' || right?.viewFormat === 'hex';
  const language = left?.language || right?.language || 'cpp';
  $('editor-language').textContent = `${isHex ? 'HEX · 16 字节 / 行' : language === 'cpp' ? 'C++' : language} · 只读`;
}

function renderSources() {
  updateReaderNavigation();
  document.querySelector('.workbench-heading h1').textContent = state.mode === 'view' || !state.left.file || !state.right.file ? (state.left.source?.viewFormat === 'hex' || state.right.source?.viewFormat === 'hex' ? '十六进制查看' : '代码阅读') : '代码比较';
  document.body.dataset.viewSide = state.left.file ? 'left' : 'right';
  document.body.classList.toggle('single-file', Boolean(state.left.file) !== Boolean(state.right.file));
  const messages = [];
  let hasError = false;
  for (const side of ['left', 'right']) {
    const slot = state[side];
    const letter = side === 'left' ? 'A' : 'B';
    $(`${side}-name`).textContent = slot.file ? titleOfFile(slot.file) : '未选择文件';
    $(`${side}-path`).textContent = slot.file?.path || '';
    $(`${side}-path`).title = slot.file?.path || '';
    $(`${side}-clear`).disabled = !slot.file;
    $(`${side}-copy`).disabled = slot.status !== 'ready';
    $(`${side}-copy`).setAttribute('aria-label', slot.source?.viewFormat === 'hex' ? `复制 ${letter} 当前页十六进制` : `复制 ${letter} 文件代码`);
    $(`${side}-copy`).title = $(`${side}-copy`).getAttribute('aria-label');
    $(`${side}-download-menu`).hidden = !slot.file?.blob;
    if (slot.status === 'loading') messages.push(`${letter}：正在读取 ${fileName(slot.file)}`);
    else if (slot.status === 'error') { messages.push(`${letter}：${slot.error}`); hasError = true; }
    else if (slot.source) {
      const status = formatControls?.status(slot.source);
      if (status) messages.push(`${letter}：${status}`);
      if (slot.source.viewFormat === 'hex') messages.push(`${letter}：十六进制 · 归档字节只读${slot.source.compressed ? '（解压后）' : ''}${slot.source.previewNote ? ` · ${slot.source.previewNote}` : ''}`);
    }
    renderMetadata(side);
  }
  $('source-status').classList.toggle('has-error', hasError);
  $('source-status').hidden = !messages.length && Boolean(state.left.source || state.right.source);
  $('source-status').textContent = messages.length ? messages.join(' · ') : '从左侧选择文件，设为 A 或 B。';
  for (const side of ['left', 'right']) if (state[side].status === 'error') {
    const button = el('button', '', `重试 ${side === 'left' ? 'A' : 'B'}`); button.type = 'button'; button.addEventListener('click', () => { void selectFile(side, state[side].file, { keepCase: true }); }); $('source-status').append(button);
  }
  for (const side of ['left', 'right']) if (state[side].source?.viewFormat === 'hex') appendHexControls(side);
  renderComparisonStatus();
}

function appendHexControls(side) {
  const source = state[side].source, letter = side === 'left' ? 'A' : 'B';
  const controls = el('div', 'hex-controls'); controls.dataset.side = side;
  const change = offset => { Object.assign(source, hexPage(source.bytes, offset)); renderSources(); syncEditor(); updateLocation(); };
  controls.append(el('span', '', `${letter}：0x${source.offset.toString(16).toUpperCase()}–0x${source.end.toString(16).toUpperCase()} / ${formatBytes(source.total)}（结束偏移不含）`));
  for (const [name, offset, disabled] of [['上一页', source.offset - HEX_PAGE_BYTES, source.offset === 0], ['下一页', source.end, source.end >= source.total]]) {
    const button = el('button', '', name); button.type = 'button'; button.disabled = disabled; button.setAttribute('aria-label', `${letter} 十六进制${name}`); button.addEventListener('click', () => change(offset)); controls.append(button);
  }
  const form = el('form', 'hex-jump');
  const input = el('input'); input.type = 'text'; input.placeholder = '0x100 或 256'; input.setAttribute('aria-label', `${letter} 字节偏移`); input.size = 12;
  const jump = el('button', '', '跳转'); jump.type = 'submit';
  form.append(input, jump); form.addEventListener('submit', event => { event.preventDefault(); try { const offset = parseHexOffset(input.value); if (offset >= source.total && source.total) throw new Error('偏移超出文件大小。'); change(offset); } catch (error) { toast(error.message); } });
  controls.append(form); $('source-status').append(controls);
}

function discussionContext() {
  if (state.activeCase) return { term: `case:${state.activeCase.id}`, title: `${state.activeCase.left.contestant} 与 ${state.activeCase.right.contestant} · ${state.activeCase.left.problem}` };
  const paths = [state.left.file?.path, state.right.file?.path].filter(Boolean).sort();
  return paths.length ? { term: `files:${[...new Set(paths)].join('|')}`, title: paths.map((path) => path.split('/').slice(-2).join('/')).join(' 与 ') } : null;
}

function renderDiscussion() {
  const context = discussionContext();
  $('discussion-title').textContent = '评论';
  const container = $('discussion-container');
  const existingWidget = container.querySelector('giscus-widget');
  if (state.commentsOpen && context && container.dataset.discussionTerm === context.term && existingWidget) {
    existingWidget.setAttribute('theme', state.theme === 'light' ? 'light' : 'dark');
    return;
  }
  container.replaceChildren();
  delete container.dataset.discussionTerm;
  if (!context) {
    const prompt = el('div', 'discussion-prompt');
    prompt.append(el('p', '', '选择文件后即可评论。'));
    const link = el('a', 'secondary-button', '前往全部讨论 ↗'); link.href = 'https://github.com/tangyixiao/CSP-2026/discussions'; link.target = '_blank'; link.rel = 'noreferrer'; prompt.append(link); container.append(prompt); return;
  }
  if (!state.commentsOpen) {
    const prompt = el('div', 'discussion-prompt');
    prompt.append(el('p', '', '查看这组代码的讨论。'));
    const button = el('button', 'primary-button', '打开 GitHub 评论'); button.type = 'button'; button.addEventListener('click', () => { state.commentsOpen = true; renderDiscussion(); }); prompt.append(button); container.append(prompt); return;
  }
  try { container.dataset.discussionTerm = context.term; mountDiscussion(container, { ...context, theme: state.theme }); }
  catch (error) { container.append(el('p', 'sidebar-note', `评论载入失败：${formatError(error)}。可通过上方「全部讨论」继续。`)); }
}

async function copyText(text) {
  if (navigator.clipboard?.writeText) return navigator.clipboard.writeText(text);
  const area = document.createElement('textarea'); area.value = text; area.style.position = 'fixed'; area.style.opacity = '0'; document.body.append(area); area.select(); const copied = document.execCommand('copy'); area.remove(); if (!copied) throw new Error('复制不可用');
}

async function fileFromPath(path) {
  const [province, group] = path.split('/');
  const selected = findGroup(province, group);
  if (!selected) throw new Error(`分享链接中的省份或组别无效：${path}`);
  const files = await groupFiles(selected);
  const file = files.find((item) => item.path === path);
  if (!file) throw new Error(`档案中未找到分享链接中的文件：${path}`);
  return file;
}

async function loadCatalog() {
  $('retry-catalog').hidden = true;
  try {
    const catalog = await fetchJSON(new URL('./catalog/index.json', document.baseURI));
    if (!Array.isArray(catalog.groups) || !catalog.groups.length) throw new Error('公开档案目录为空。');
    state.catalog = catalog;
    $('archive-count').textContent = `${formatNumber(catalog.groups.reduce((n, group) => n + group.fileCount + (group.extraFileCount || 0), 0))} 文件`;
    $('revision-label').textContent = `档案版本 ${String(catalog.revision).slice(0, 8)}`;
    populateProvinces();
    renderCases();
    const leftPath = initialQuery.get('left');
    const rightPath = initialQuery.get('right');
    const requestedCase = caseItems.find((item) => item.id === initialQuery.get('case'));
    const hasDirectoryQuery = ['scope', 'provinces', 'province', 'group', 'search', 'problem', 'page'].some(key => initialQuery.has(key));
    if (leftPath || rightPath) {
      const results = await Promise.allSettled([leftPath ? fileFromPath(leftPath) : Promise.resolve(null), rightPath ? fileFromPath(rightPath) : Promise.resolve(null)]);
      const matchesSelector = (result, selector) => result.status === 'fulfilled' && result.value && normalized(result.value.contestant) === normalized(selector.contestant) && normalized(result.value.problem) === normalized(selector.problem);
      state.activeCase = requestedCase && matchesSelector(results[0], requestedCase.left) && matchesSelector(results[1], requestedCase.right) ? requestedCase : null;
      renderCaseContext(); renderCases();
      for (const [index, result] of results.entries()) {
        const side = index === 0 ? 'left' : 'right';
        if (result.status === 'fulfilled' && result.value) void selectFile(side, result.value, { keepCase: true });
        else if (result.status === 'rejected') { toast(formatError(result.reason)); $('source-status').textContent = formatError(result.reason); }
      }
      const first = state.left.file || state.right.file;
      const [province, group] = first?.path.split('/') || [];
      await loadDirectory(readReaderScope(initialQuery, readerRegionCodes(), { province, group, search: hasDirectoryQuery ? '' : first?.contestant || '' }));
    } else if (hasDirectoryQuery) {
      switchPanel('files');
      await loadDirectory(readReaderScope(initialQuery, readerRegionCodes()));
    } else if (requestedCase || caseItems.length) {
      switchPanel('cases');
      await selectCase(requestedCase || caseItems[0]);
    } else {
      $('group-select').value = catalog.groups[0].group;
      await loadDirectory();
    }
    renderDiscussion();
    updateLocation();
    const directoryScroll = window.history.state?.directoryScroll;
    if (state.directoryReady && Number.isFinite(directoryScroll) && directoryScroll >= 0) $('file-list').scrollTop = directoryScroll;
  } catch (error) {
    $('archive-count').textContent = '未加载';
    $('result-count').textContent = '目录加载失败';
    $('file-list').replaceChildren(el('div', 'list-empty', `无法读取公开档案目录：${formatError(error)}`));
    $('file-list').setAttribute('aria-busy', 'false');
    $('retry-catalog').hidden = false;
    $('source-status').textContent = '文件目录加载失败，请点击左侧“重新加载”重试。';
    $('source-status').classList.add('has-error');
  }
}

for (const panel of ['files', 'cases']) {
  $(`tab-${panel}`).addEventListener('click', () => switchPanel(panel));
  $(`tab-${panel}`).addEventListener('keydown', (event) => { if (event.key === 'ArrowLeft' || event.key === 'ArrowRight') { event.preventDefault(); const next = panel === 'files' ? 'cases' : 'files'; switchPanel(next); $(`tab-${next}`).focus(); } });
}
$('filter-form').addEventListener('submit', (event) => event.preventDefault());
const reloadScope = () => void loadDirectory({ problem: $('problem-select').value });
$('reader-scope').addEventListener('change', () => {
  const scope = $('reader-scope').value, province = (state.left.file || state.right.file)?.path.split('/')[0] || $('province-select').value;
  void loadDirectory({ scope, ...(scope === 'single' ? { province } : {}), ...(scope === 'multiple' ? { provinces: state.provinces || province } : {}), problem: $('problem-select').value });
});
$('province-select').addEventListener('change', reloadScope);
$('group-select').addEventListener('change', reloadScope);
for (const [id, checked] of [['reader-select-all', true], ['reader-clear-all', false]]) $(id).addEventListener('click', () => { for (const input of $('reader-province-options').querySelectorAll('input')) input.checked = checked; updateReaderProvinceApply(); });
$('reader-apply-provinces').addEventListener('click', () => {
  const provinces = [...$('reader-province-options').querySelectorAll('input')].filter(input => input.checked).map(input => input.value).sort().join(',');
  if (!provinces) return;
  $('reader-provinces').open = false; void loadDirectory({ scope: 'multiple', provinces, problem: $('problem-select').value });
});
$('contestant-input').addEventListener('input', () => { clearTimeout(readerSearchTimer); readerSearchTimer = setTimeout(() => { state.page = 0; renderFiles(); }, 180); });
$('problem-select').addEventListener('change', () => { state.page = 0; renderFiles(); });
$('case-input').addEventListener('input', renderCases);
$('page-prev').addEventListener('click', () => { state.page--; renderFiles(); $('file-list').scrollTop = 0; });
$('page-next').addEventListener('click', () => { state.page++; renderFiles(); $('file-list').scrollTop = 0; });
$('retry-catalog').addEventListener('click', () => { if (state.catalog) void loadDirectory(); else void loadCatalog(); });
document.querySelectorAll('[data-mode]').forEach((button) => { button.addEventListener('click', () => setMode(button.dataset.mode, { announce: true })); });
$('ignore-whitespace').addEventListener('change', () => { state.ignoreWhitespace = $('ignore-whitespace').checked; state.editor?.setIgnoreWhitespace(state.ignoreWhitespace); renderComparisonStatus(); });
$('previous-change').addEventListener('click', () => state.editor?.previousChange());
$('next-change').addEventListener('click', () => state.editor?.nextChange());
$('left-clear').addEventListener('click', () => clearSource('left'));
$('right-clear').addEventListener('click', () => clearSource('right'));
for (const side of ['left', 'right']) $(`${side}-copy`).addEventListener('click', async () => {
  if (!state[side].source) return;
  try { await copyText(state[side].source.text); toast(`${side === 'left' ? 'A' : 'B'} ${state[side].source.viewFormat === 'hex' ? '当前页十六进制' : '文件原文'}已复制。`); }
  catch { toast('复制失败，请在代码视图中选择并复制。'); }
});
$('open-discussion').addEventListener('click', () => { state.commentsOpen = true; renderDiscussion(); $('discussion-title').scrollIntoView({ behavior: 'smooth', block: 'start' }); });
$('share-button').addEventListener('click', async () => { updateLocation(); try { await copyText(window.location.href); toast('分享链接已复制，包含当前文件、视图与主题。'); } catch { toast('复制失败，可直接复制浏览器地址栏中的链接。'); } });
mobile.addEventListener('change', () => { setMode(mobile.matches && state.mode === 'split' ? 'inline' : state.mode); });
window.addEventListener('beforeunload', () => { state.left.controller?.abort(); state.right.controller?.abort(); state.editor?.dispose(); formatControls?.dispose(); });

function updateReadingProfileLabel() {
  const note = $('reading-profile-note');
  if (!note) return;
  note.hidden = state.readingProfile !== 'devcpp';
  note.textContent = state.theme === 'dark' ? 'Consolas · 本站深色配色' : 'Consolas · Classic Plus';
}

function initializeReadingControls() {
  const nav = document.querySelector('.main-nav');
  for (const anchor of nav.querySelectorAll('a[data-reader-nav]')) anchor.addEventListener('click', event => {
    if (event.button || event.metaKey || event.ctrlKey || event.shiftKey || event.altKey) return;
    event.preventDefault();
    setMode(anchor.dataset.readerNav === 'view' ? 'view' : state.mode === 'inline' ? 'inline' : 'split', { announce: true });
  });
  const toolbar = document.querySelector('.editor-toolbar');
  const controls = el('div', 'reader-options');
  const profileLabel = el('label', 'profile-control', '阅读视图');
  const profile = el('select'); profile.id = 'reading-profile'; profile.setAttribute('aria-label', '阅读视图');
  profile.append(new Option('CSP 默认', 'csp'), new Option('Dev-C++ · Classic Plus', 'devcpp'), new Option('Geany · NOI Linux 参考', 'geany'));
  profile.value = state.readingProfile;
  profile.addEventListener('change', () => {
    state.readingProfile = normalizeReadingProfile(profile.value);
    // Choosing the requested IDE preset starts with its white Classic Plus
    // palette. Subsequent light/dark changes stay independent and shareable.
    if (state.readingProfile === 'devcpp') window.CspProjectTheme.setChoice('light');
    state.editor?.setReadingProfile(state.readingProfile);
    document.documentElement.dataset.readingProfile = state.readingProfile;
    try { localStorage.setItem('csp-reading-profile', state.readingProfile); } catch { /* Current view works without storage. */ }
    updateReadingProfileLabel();
    updateLocation();
  });
  profileLabel.append(profile);
  const focus = el('button', '', '收起文件区'); focus.type = 'button'; focus.id = 'focus-reader';
  const setFocus = value => { document.body.classList.toggle('focused-reader', value); focus.textContent = value ? '打开文件区' : '收起文件区'; focus.setAttribute('aria-expanded', String(!value)); };
  focus.addEventListener('click', () => setFocus(!document.body.classList.contains('focused-reader')));
  if (initialQuery.get('focus') === '1') setFocus(true);
  const wrap = el('button', '', '自动换行'); wrap.type = 'button'; wrap.id = 'reader-wrap'; wrap.setAttribute('aria-pressed', 'false');
  wrap.addEventListener('click', () => { const enabled = wrap.getAttribute('aria-pressed') !== 'true'; wrap.setAttribute('aria-pressed', String(enabled)); state.editor?.setWordWrap?.(enabled); });
  const profileNote = el('span', 'reading-profile-note'); profileNote.id = 'reading-profile-note'; profileNote.setAttribute('role', 'status');
  controls.append(profileLabel, focus, wrap, profileNote); toolbar.append(controls);
  const actions = el('div', 'random-actions');
  for (const [kind, label] of [['person', '随机跳人'], ['problem', '随机跳题']]) {
    const control = el('button', '', label); control.type = 'button'; control.id = `random-${kind}`;
    control.addEventListener('click', () => { void randomJump(kind, control); }); actions.append(control);
  }
  document.querySelector('.workbench-heading').append(actions);
  document.documentElement.dataset.readingProfile = state.readingProfile;
  updateReadingProfileLabel();
}

async function randomJump(kind, control) {
  if (!state.catalog || state.randomBusy) return;
  if (!state.directoryReady || state.failedGroups.length) { toast('文件索引尚未完整加载，请等待加载完成或重试目录后再随机。'); return; }
  state.randomBusy = true;
  const randomControls = document.querySelectorAll('.random-actions button');
  randomControls.forEach(button => { button.disabled = true; });
  const sourceSequences = [state.left.sequence, state.right.sequence];
  const directorySequence = state.directorySequence;
  try {
    let files = state.files;
    const active = state.left.file || state.right.file;
    if (kind === 'problem' && active) {
      const [province, group] = active.path.split('/'); files = await groupFiles(findGroup(province, group));
    }
    if (sourceSequences[0] !== state.left.sequence || sourceSequences[1] !== state.right.sequence || directorySequence !== state.directorySequence) return;
    const activeId = active?.path.split('/').slice(0, 3).join('/');
    let file, nextSearch;
    if (kind === 'person') {
      const query = $('contestant-input').value.trim() === active?.contestant ? '' : $('contestant-input').value;
      const items = groupContestants(files, { query, problem: $('problem-select').value }).filter(item => item.identityValid);
      if (items.length === 1 && items[0].id === activeId) { toast('当前筛选只有这一个目录，可调整题目或搜索条件后再随机。'); return; }
      const item = sampleContestant(items, { previousId: activeId }); file = item?.files[0];
      if (item) { nextSearch = item.contestant; toast(`随机目录：${item.contestant} · 当前省份/组别与题目筛选范围`); }
    } else {
      if (!active) files = groupContestants(files, { query: $('contestant-input').value, problem: $('problem-select').value }).flatMap(item => item.files);
      files = contestProblemFiles(files);
      const problem = sampleProblem(files, { contestant: activeId, previousProblem: active?.problem });
      if (active && problem === active.problem) { toast('这个目录当前只有这一道可用题目。'); return; }
      file = files.find(item => item.problem === problem && (!activeId || item.path.startsWith(`${activeId}/`)));
      if (file) toast(`随机题目：${problem}${active ? ` · ${active.contestant}` : ' · 当前省份/组别'}`);
    }
    if (!file) { toast('当前范围没有可用选项；可调整筛选后重试。'); return; }
    updateLocation();
    history.replaceState({ ...history.state, directoryScroll: $('file-list').scrollTop }, '', location.href);
    history.pushState({ ...history.state, directoryScroll: 0 }, '', location.href);
    if (nextSearch !== undefined) { $('contestant-input').value = nextSearch; state.page = 0; }
    clearSource('right'); setMode('view'); await selectFile('left', file);
  } catch (error) { toast(formatError(error)); }
  finally { state.randomBusy = false; randomControls.forEach(button => { button.disabled = false; }); }
}
window.addEventListener('popstate', () => location.reload());
mountSiteShell({ root: '../', active: state.mode === 'view' ? 'view' : 'compare', reader: true });
document.addEventListener('csp-project-theme', () => setTheme(document.documentElement.dataset.theme, { preserveProjectChoice: true }));
if (['light', 'dark', 'system'].includes(initialQuery.get('theme'))) window.CspProjectTheme.setChoice(initialQuery.get('theme'));
else state.theme = document.documentElement.dataset.theme;
initializeReadingControls();
initializeDownloads();
formatControls = mountFormatControls({ toolbar: document.querySelector('.editor-toolbar'), getSources: () => [state.left.source, state.right.source].filter(Boolean), onChange: () => { renderSources(); syncEditor(); } });
initializeIcons();
setTheme(state.theme,{preserveProjectChoice:true});
setMode(state.mode);
renderSources();
renderCases();

const editorReady = createCodeWorkbench($('editor-container'), { onDiffUpdate(info) { state.diffCount = typeof info === 'number' ? info : typeof info?.changeCount === 'number' ? info.changeCount : null; state.diffIncomplete = Boolean(info?.quitEarly); renderComparisonStatus(); } }).then((editor) => {
  state.editor = editor;
  editor.setMode(state.mode);
  editor.setTheme(state.theme === 'dark' ? 'vs-dark' : 'vs');
  editor.setReadingProfile(state.readingProfile);
  editor.setWordWrap($('reader-wrap').getAttribute('aria-pressed') === 'true');
  editor.setIgnoreWhitespace(state.ignoreWhitespace);
  syncEditor();
}).catch((error) => {
  const message = el('div', 'editor-loading');
  message.append(el('p', '', `代码阅读器未能载入：${formatError(error)}`), el('p', '', '请刷新页面重试，也可以展开源文件详情查看 GitHub 原文件。'));
  $('editor-container').replaceChildren(message);
});
void editorReady;
void loadCatalog();
