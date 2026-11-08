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

const $ = (id) => document.getElementById(id);
const PAGE_SIZE = 24;
const caseItems = Array.isArray(cases) ? cases : [];
const catalogCache = new Map();
const mobile = window.matchMedia('(max-width: 700px)');
const initialQuery = new URLSearchParams(window.location.search);
const state = {
  catalog: null, files: [], page: 0, directorySequence: 0, caseSequence: 0,
  activeCase: null, ambiguity: [], directoryError: null,
  downloadMode: savedDownloadMode(),
  theme: ['light', 'dark'].includes(initialQuery.get('theme')) ? initialQuery.get('theme') : getSavedTheme(),
  mode: mobile.matches ? 'inline' : validMode(initialQuery.get('mode')),
  ignoreWhitespace: true, editor: null, diffCount: null, diffIncomplete: false, commentsOpen: true,
  left: emptySlot(), right: emptySlot(),
};

function emptySlot() { return { file: null, source: null, status: 'empty', error: '', sequence: 0, controller: null }; }
function validMode(mode) { return ['view', 'split', 'inline'].includes(mode) ? mode : 'split'; }
function getSavedTheme() {
  try {
    const choice=localStorage.getItem('csp-project-theme');
    if(choice==='system')return matchMedia('(prefers-color-scheme: dark)').matches?'dark':'light';
    if(['light','dark'].includes(choice))return choice;
    return localStorage.getItem('csp-code-theme')==='light'?'light':'dark';
  } catch { return 'dark'; }
}
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
  setIcon($('theme-toggle'), theme === 'dark' ? 'sun' : 'moon');
  $('theme-toggle').setAttribute('aria-label', theme === 'dark' ? '切换为浅色主题' : '切换为深色主题');
  document.querySelector('meta[name="theme-color"]').content = theme === 'dark' ? '#0d1117' : '#ffffff';
  try {
    localStorage.setItem('csp-code-theme', theme);
    if(!preserveProjectChoice)localStorage.setItem('csp-project-theme',theme);
  } catch { /* The current theme still works without storage. */ }
  state.editor?.setTheme(theme === 'dark' ? 'vs-dark' : 'vs');
  if (state.commentsOpen) renderDiscussion();
  updateLocation();
}

function setMode(mode, { announce = false } = {}) {
  state.mode = mobile.matches ? 'inline' : validMode(mode);
  document.querySelectorAll('[data-mode]').forEach((button) => { button.setAttribute('aria-pressed', String(button.dataset.mode === state.mode)); });
  document.querySelector('[data-mode="inline"]').textContent = mobile.matches ? '单栏阅读' : '内联';
  for (const id of ['ignore-whitespace', 'previous-change', 'next-change']) {
    $(id).disabled = mobile.matches;
    if (mobile.matches) $(id).title = '窄屏提供高亮阅读；差异功能请在桌面宽屏使用。';
    else $(id).removeAttribute('title');
  }
  state.editor?.setMode(state.mode);
  if (announce && mode === 'split' && mobile.matches) toast('窄屏展示两份高亮源码；对齐差异请用桌面宽屏。');
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

function updateLocation() {
  if (!state.catalog) return;
  const url = new URL(window.location.href);
  for (const side of ['left', 'right']) { const path = state[side].file?.path; if (path) url.searchParams.set(side, path); else url.searchParams.delete(side); }
  if (state.activeCase) url.searchParams.set('case', state.activeCase.id); else url.searchParams.delete('case');
  url.searchParams.set('mode', state.mode);
  url.searchParams.set('theme', state.theme);
  window.history.replaceState({}, '', url);
}

async function fetchJSON(url) {
  const response = await fetch(url);
  if (!response.ok) throw new Error(`目录请求失败（HTTP ${response.status}）`);
  return response.json();
}

async function groupFiles(group, { includeExtras = false } = {}) {
  if (!group) return [];
  if (!catalogCache.has(group.key)) {
    const url = new URL(group.url, new URL('.', document.baseURI));
    const request = fetchJSON(url).then((data) => {
      if (!Array.isArray(data.files)) throw new Error('目录格式无效，缺少文件列表。');
      if (data.extraFiles !== undefined && !Array.isArray(data.extraFiles)) throw new Error('下载目录格式无效。');
      return data;
    }).catch((error) => { catalogCache.delete(group.key); throw error; });
    catalogCache.set(group.key, request);
  }
  const data = await catalogCache.get(group.key);
  return includeExtras ? [...data.files, ...(data.extraFiles || [])] : data.files;
}

let downloadBusy = false;
function initializeDownloads() {
  const downloadsLink=el('a','','下载');downloadsLink.href='../preview/downloads.html';
  document.querySelector('.app-header .main-nav').append(downloadsLink);
  const modeLabel = el('label','download-mode-label','下载');
  const select = document.createElement('select');
  select.setAttribute('aria-label','下载模式');
  select.append(new Option('国际直连','international'),new Option('国内加速','domestic'));
  select.value = state.downloadMode;
  select.addEventListener('change',()=>{ state.downloadMode=select.value;try{localStorage.setItem(DOWNLOAD_MODE_KEY,select.value);}catch{/* current choice remains */} });
  modeLabel.append(select);
  $('theme-toggle').before(modeLabel);
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
          if(kind==='file') { await saveOriginalFile(file,revision,state.downloadMode);toast('已下载原始文件，文件名和字节保持不变。'); }
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
function currentGroup() { return findGroup($('province-select').value, $('group-select').value); }

function populateProvinces() {
  const provinces = new Map();
  for (const group of state.catalog.groups) if (!provinces.has(group.province)) provinces.set(group.province, group.label?.split(' · ')[0] || group.province);
  $('province-select').replaceChildren(...Array.from(provinces, ([value, label]) => new Option(`${label} · ${value}`, value)));
  $('province-select').disabled = false;
  $('group-select').disabled = false;
}

function populateProblems(preserve = '') {
  const problems = [...new Set(state.files.map((file) => file.problem).filter(Boolean))].sort();
  $('problem-select').replaceChildren(new Option('全部题目', ''), ...problems.map((problem) => new Option(problem, problem)));
  $('problem-select').value = problems.includes(preserve) ? preserve : '';
  $('problem-select').disabled = false;
}

async function loadDirectory({ province, group, search, problem } = {}) {
  if (!state.catalog) return;
  if (province) $('province-select').value = province;
  if (group) $('group-select').value = group;
  if (search !== undefined) $('contestant-input').value = search;
  const sequence = ++state.directorySequence;
  state.files = [];
  state.page = 0;
  state.directoryError = null;
  $('file-list').setAttribute('aria-busy', 'true');
  $('file-list').replaceChildren(el('div', 'list-empty', '正在读取此省区的源文件目录…'));
  $('result-count').textContent = '正在读取目录';
  $('retry-catalog').hidden = true;
  $('problem-select').disabled = true;
  $('page-prev').disabled = true;
  $('page-next').disabled = true;
  try {
    const selectedGroup = currentGroup();
    if (!selectedGroup) throw new Error('该省区暂无所选组别的档案，请切换省区或组别。');
    const files = await groupFiles(selectedGroup);
    if (sequence !== state.directorySequence) return;
    state.files = files;
    populateProblems(problem ?? '');
    renderFiles();
  } catch (error) {
    if (sequence !== state.directorySequence) return;
    state.directoryError = error;
    $('file-list').replaceChildren(el('div', 'list-empty', formatError(error)));
    $('result-count').textContent = '目录未能载入';
    $('retry-catalog').hidden = false;
  } finally {
    if (sequence === state.directorySequence) $('file-list').setAttribute('aria-busy', 'false');
  }
}

function renderFiles() {
  if (state.directoryError) return;
  const search = $('contestant-input').value.trim().toLowerCase();
  const problem = $('problem-select').value;
  const matched = state.files.filter((file) => (!problem || file.problem === problem) && (!search || `${file.contestant} ${file.name} ${file.path}`.toLowerCase().includes(search)));
  const pages = Math.max(1, Math.ceil(matched.length / PAGE_SIZE));
  state.page = Math.min(state.page, pages - 1);
  const nodes = matched.slice(state.page * PAGE_SIZE, (state.page + 1) * PAGE_SIZE).map((file) => {
    const item = el('article', 'file-item');
    if (state.left.file?.path === file.path || state.right.file?.path === file.path) item.classList.add('is-selected');
    const heading = el('div', 'file-item-heading');
    const extension = fileName(file).toLowerCase().replace(/\.gz$/, '').split('.').at(-1);
    const fileType = ['cpp', 'cc', 'cxx', 'c', 'h', 'hpp'].includes(extension) ? 'C++' : extension === 'pas' ? 'PAS' : extension === 'py' ? 'PY' : 'SRC';
    const fileIcon = el('span', 'file-icon'); setIcon(fileIcon, 'file'); fileIcon.title = fileType;
    heading.append(fileIcon, el('span', 'file-item-title', file.contestant || file.path.split('/').at(-2)));
    const subtitle = el('p', 'file-item-subtitle', `${file.problem || '其他文件'} / ${fileName(file)}`);
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
  $('file-list').replaceChildren(...(nodes.length ? nodes : [el('div', 'list-empty', '没有匹配的文件。试试缩短考号，或切换题目、省区与组别。')]));
  $('result-count').textContent = `${formatNumber(matched.length)} 份源文件${search || problem ? ' · 已筛选' : ''}`;
  $('page-indicator').textContent = `${state.page + 1} / ${formatNumber(pages)}`;
  $('page-prev').disabled = state.page <= 0;
  $('page-next').disabled = state.page + 1 >= pages;
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
  $('case-provenance').textContent = [item.sourceTitle || '用户提供的讨论摘录', item.sourceAuthor && `作者 ${item.sourceAuthor}`, item.sourceDate, !item.sourceUrl && '未提供本材料的可确认原帖链接'].filter(Boolean).join(' · ');
  $('case-ambiguity').hidden = !state.ambiguity.length;
  const choices = [];
  for (const choice of state.ambiguity) {
    choices.push(el('p', '', `${choice.side === 'left' ? 'A' : 'B'} · ${choice.selector.contestant} / ${choice.selector.problem}：${choice.files.length ? '找到多份文件，请明确选择一份。' : '目录中没有找到匹配的源文件，可从档案检索手动选择。'}`));
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
    const source = await loadSource(file, { revision: state.catalog.revision, signal: controller.signal });
    if (state[side].sequence !== sequence || controller.signal.aborted) return;
    state[side].source = source;
    state[side].status = 'ready';
  } catch (error) {
    if (state[side].sequence !== sequence || controller.signal.aborted) return;
    state[side].status = 'error';
    state[side].error = formatError(error);
  }
  if (state[side].sequence !== sequence) return;
  renderSources(); syncEditor();
}

function sourceModel(side) {
  const slot = state[side];
  if (slot.status !== 'ready' || !slot.source) return null;
  return { path: slot.file.path, text: slot.source.text, language: slot.source.language || 'cpp' };
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
  if (!slot.file) { container.append(el('p', '', '尚未选择源文件。')); return; }
  if (slot.status === 'loading') { container.append(el('p', '', '正在读取原始源文件并计算摘要…')); return; }
  if (slot.status === 'error') { container.append(el('p', '', slot.error)); const retry = el('button', 'text-button', '重新载入文件'); retry.type = 'button'; retry.addEventListener('click', () => { void selectFile(side, slot.file, { keepCase: true }); }); container.append(retry); return; }
  const source = slot.source;
  const dl = el('dl');
  for (const [name, value] of [['路径', slot.file.path], ['大小', `${formatBytes(sourceBytes(source))}${source.compressed ? `（解压后；归档 ${formatBytes(source.archiveByteLength)}）` : ''}`], ['编码', source.encoding || '未提供'], ['SHA-256', source.contentSha256 || source.sha256 || '摘要未提供']]) {
    dl.append(el('dt', '', name), el('dd', '', value));
  }
  const actions = el('div', 'metadata-actions');
  const copy = el('button', '', '复制代码'); copy.type = 'button'; copy.addEventListener('click', async () => { try { await copyText(source.text); toast(`${side === 'left' ? 'A' : 'B'} 文件代码已复制。`); } catch { toast('复制失败，请在代码视图中选择并复制。'); } });
  const raw = el('a', '', '查看原始文件 ↗'); raw.href = githubUrl(slot.file.path, state.catalog.revision); raw.target = '_blank'; raw.rel = 'noreferrer';
  actions.append(copy, raw);
  container.append(dl, actions);
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
  const language = left?.language || right?.language || 'cpp';
  $('editor-language').textContent = `${language === 'cpp' ? 'C++' : language} · 只读`;
}

function renderSources() {
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
    $(`${side}-download-menu`).hidden = !slot.file;
    if (slot.status === 'loading') messages.push(`${letter}：正在读取 ${fileName(slot.file)}`);
    else if (slot.status === 'error') { messages.push(`${letter}：${slot.error}`); hasError = true; }
    renderMetadata(side);
  }
  $('source-status').classList.toggle('has-error', hasError);
  $('source-status').hidden = !messages.length && Boolean(state.left.source || state.right.source);
  $('source-status').textContent = messages.length ? messages.join(' · ') : '从左侧选择文件，设为 A 或 B。';
  for (const side of ['left', 'right']) if (state[side].status === 'error') {
    const button = el('button', '', `重试 ${side === 'left' ? 'A' : 'B'}`); button.type = 'button'; button.addEventListener('click', () => { void selectFile(side, state[side].file, { keepCase: true }); }); $('source-status').append(button);
  }
  renderComparisonStatus();
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
  if (!selected) throw new Error(`分享链接中的省区或组别无效：${path}`);
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
    $('archive-count').textContent = `${formatNumber(catalog.totalFiles)} 份`;
    $('revision-label').textContent = `档案版本 ${String(catalog.revision).slice(0, 8)}`;
    populateProvinces();
    renderCases();
    const leftPath = initialQuery.get('left');
    const rightPath = initialQuery.get('right');
    const requestedCase = caseItems.find((item) => item.id === initialQuery.get('case'));
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
      await loadDirectory({ province, group, search: first?.contestant || '' });
    } else if (initialQuery.has('province') || initialQuery.has('group') || initialQuery.has('search')) {
      switchPanel('files');
      await loadDirectory({province:initialQuery.get('province'),group:initialQuery.get('group'),search:initialQuery.get('search') || ''});
    } else if (requestedCase || caseItems.length) {
      switchPanel('cases');
      await selectCase(requestedCase || caseItems[0]);
    } else {
      $('group-select').value = catalog.groups[0].group;
      await loadDirectory();
    }
    renderDiscussion();
    updateLocation();
  } catch (error) {
    $('archive-count').textContent = '目录离线';
    $('result-count').textContent = '目录未能载入';
    $('file-list').replaceChildren(el('div', 'list-empty', `无法读取公开档案目录：${formatError(error)}`));
    $('file-list').setAttribute('aria-busy', 'false');
    $('retry-catalog').hidden = false;
    $('source-status').textContent = '档案目录未能载入。请在左侧点击「重新载入」。';
    $('source-status').classList.add('has-error');
  }
}

$('theme-toggle').addEventListener('click', () => setTheme(state.theme === 'dark' ? 'light' : 'dark'));
for (const panel of ['files', 'cases']) {
  $(`tab-${panel}`).addEventListener('click', () => switchPanel(panel));
  $(`tab-${panel}`).addEventListener('keydown', (event) => { if (event.key === 'ArrowLeft' || event.key === 'ArrowRight') { event.preventDefault(); const next = panel === 'files' ? 'cases' : 'files'; switchPanel(next); $(`tab-${next}`).focus(); } });
}
$('filter-form').addEventListener('submit', (event) => event.preventDefault());
$('province-select').addEventListener('change', () => { void loadDirectory(); });
$('group-select').addEventListener('change', () => { void loadDirectory(); });
$('contestant-input').addEventListener('input', () => { state.page = 0; renderFiles(); });
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
  try { await copyText(state[side].source.text); toast(`${side === 'left' ? 'A' : 'B'} 文件代码已复制。`); }
  catch { toast('复制失败，请在代码视图中选择并复制。'); }
});
$('open-discussion').addEventListener('click', () => { state.commentsOpen = true; renderDiscussion(); $('discussion-title').scrollIntoView({ behavior: 'smooth', block: 'start' }); });
$('share-button').addEventListener('click', async () => { updateLocation(); try { await copyText(window.location.href); toast('分享链接已复制，包含当前文件、视图与主题。'); } catch { toast('复制失败，可直接复制浏览器地址栏中的链接。'); } });
mobile.addEventListener('change', () => { setMode(mobile.matches && state.mode === 'split' ? 'inline' : state.mode); });
window.addEventListener('beforeunload', () => { state.left.controller?.abort(); state.right.controller?.abort(); state.editor?.dispose(); });

initializeDownloads();
initializeIcons();
setTheme(state.theme,{preserveProjectChoice:true});
setMode(state.mode);
renderSources();
renderCases();

const editorReady = createCodeWorkbench($('editor-container'), { onDiffUpdate(info) { state.diffCount = typeof info === 'number' ? info : typeof info?.changeCount === 'number' ? info.changeCount : null; state.diffIncomplete = Boolean(info?.quitEarly); renderComparisonStatus(); } }).then((editor) => {
  state.editor = editor;
  editor.setMode(state.mode);
  editor.setTheme(state.theme === 'dark' ? 'vs-dark' : 'vs');
  editor.setIgnoreWhitespace(state.ignoreWhitespace);
  syncEditor();
}).catch((error) => {
  const message = el('div', 'editor-loading');
  message.append(el('p', '', `代码阅读器未能载入：${formatError(error)}`), el('p', '', '请刷新页面重试，也可以展开源文件详情查看 GitHub 原文件。'));
  $('editor-container').replaceChildren(message);
});
void editorReady;
void loadCatalog();
