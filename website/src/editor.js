import * as monaco from 'monaco-editor/esm/vs/editor/editor.api.js';
import 'monaco-editor/esm/vs/editor/browser/coreCommands.js';
import 'monaco-editor/esm/vs/editor/browser/widget/codeEditor/codeEditorWidget.js';
import 'monaco-editor/esm/vs/editor/browser/widget/diffEditor/diffEditor.contribution.js';
import 'monaco-editor/esm/vs/editor/contrib/find/browser/findController.js';
import 'monaco-editor/esm/vs/editor/contrib/folding/browser/folding.js';
import 'monaco-editor/esm/vs/editor/contrib/bracketMatching/browser/bracketMatching.js';
import 'monaco-editor/esm/vs/basic-languages/cpp/cpp.contribution.js';
import 'monaco-editor/esm/vs/basic-languages/pascal/pascal.contribution.js';
import 'monaco-editor/esm/vs/basic-languages/python/python.contribution.js';
import 'monaco-editor/esm/vs/basic-languages/java/java.contribution.js';
import EditorWorker from 'monaco-editor/esm/vs/editor/editor.worker.js?worker';
import { normalizeReadingProfile, getReadingProfileOptions, getReadingTheme, READING_THEMES } from './reading-profiles.js';

globalThis.MonacoEnvironment = { getWorker() { return new EditorWorker(); } };
for (const [name, definition] of Object.entries(READING_THEMES)) monaco.editor.defineTheme(name, definition);

export async function createCodeWorkbench(container, { onDiffUpdate } = {}) {
  let sources = [null, null], models = [], instance, diffListener;
  let mode = 'split', theme = 'vs-dark', ignoreWhitespace = false, generation = 0;
  let readingProfile = 'csp';
  let wordWrap = false;
  const viewStates = new Map();
  const narrow = matchMedia('(max-width: 700px)');
  const editorHost = document.createElement('div');
  editorHost.style.cssText = 'height:100%;min-height:420px;width:100%';
  const fallback = document.createElement('div');
  fallback.style.cssText = 'height:100%;overflow:auto;padding:16px;box-sizing:border-box';
  container.replaceChildren(editorHost, fallback);
  const options = {
    readOnly: true, domReadOnly: true, automaticLayout: true,
    minimap: { enabled: false }, fontFamily: 'Consolas, "Cascadia Code", monospace',
    fontSize: 15, lineHeight: 24, scrollBeyondLastLine: false,
    padding: { top: 18, bottom: 18 }, renderWhitespace: 'selection',
    accessibilitySupport: 'on', links: false, contextmenu: false,
    ariaLabel: '只读源码，按 Ctrl+F 搜索',
  };

  function clearInstance() {
    diffListener?.dispose(); diffListener = undefined;
    instance?.dispose(); instance = undefined;
  }

  function rememberView() {
    if (!instance) return;
    const editors = instance.getOriginalEditor
      ? [instance.getOriginalEditor(), instance.getModifiedEditor()] : [instance];
    for (const editor of editors) {
      const model = editor.getModel();
      if (model) viewStates.set(model, editor.saveViewState());
    }
  }

  function restoreView() {
    if (!instance) return;
    const editors = instance.getOriginalEditor
      ? [instance.getOriginalEditor(), instance.getModifiedEditor()] : [instance];
    for (const editor of editors) {
      const saved = viewStates.get(editor.getModel());
      if (saved) editor.restoreViewState(saved);
    }
  }

  function fallbackPalette() {
    const palette = READING_THEMES[getReadingTheme(readingProfile, theme)]?.colors;
    fallback.style.background = palette?.['editor.background'] || (theme === 'vs' ? '#ffffff' : '#1e1e1e');
    fallback.style.color = palette?.['editor.foreground'] || (theme === 'vs' ? '#17202c' : '#d4d4d4');
  }

  async function refreshFallbackAppearance() {
    if (fallback.querySelectorAll('pre').length !== sources.filter(Boolean).length) {
      await renderFallback(); return;
    }
    const token = ++generation;
    const typography = getReadingProfileOptions(readingProfile);
    const pres = [...fallback.querySelectorAll('pre')];
    const scroll = { top: fallback.scrollTop, left: fallback.scrollLeft };
    fallbackPalette();
    for (const [index, pre] of pres.entries()) {
      const source = sources.filter(Boolean)[index];
      if (!source) continue;
      const preScroll = { top: pre.scrollTop, left: pre.scrollLeft };
      const selection = globalThis.getSelection?.();
      let offsets;
      if (selection?.rangeCount) {
        const selected = selection.getRangeAt(0);
        if (pre.contains(selected.startContainer) && pre.contains(selected.endContainer)) {
          const prefix = document.createRange(); prefix.selectNodeContents(pre);
          prefix.setEnd(selected.startContainer, selected.startOffset);
          offsets = [prefix.toString().length, prefix.toString().length + selected.toString().length];
        }
      }
      const html = await monaco.editor.colorize(source.text, source.language || 'cpp', { theme: getReadingTheme(readingProfile, theme) });
      if (token !== generation) return;
      Object.assign(pre.style, { fontFamily: typography.fontFamily, fontSize: `${typography.fontSize}px`, lineHeight: `${typography.lineHeight}px` });
      pre.innerHTML = html;
      if (offsets) {
        const locate = offset => {
          const walker = document.createTreeWalker(pre, NodeFilter.SHOW_TEXT);
          let node, last;
          while ((node = walker.nextNode())) {
            last = node;
            if (offset <= node.length) return [node, offset];
            offset -= node.length;
          }
          return last ? [last, last.length] : [pre, 0];
        };
        const restored = document.createRange();
        restored.setStart(...locate(offsets[0])); restored.setEnd(...locate(offsets[1]));
        selection.removeAllRanges(); selection.addRange(restored);
      }
      pre.scrollTop = preScroll.top; pre.scrollLeft = preScroll.left;
    }
    fallback.scrollTop = scroll.top; fallback.scrollLeft = scroll.left;
  }

  async function renderFallback() {
    const token = ++generation;
    const { scrollTop, scrollLeft } = fallback;
    fallbackPalette();
    fallback.replaceChildren();
    const note = document.createElement('p');
    note.textContent = '单栏阅读 · 桌面端可查看对齐差异';
    fallback.append(note);
    for (const source of sources.filter(Boolean)) {
      const section = document.createElement('section');
      const label = document.createElement('h3'); label.textContent = source.path;
      label.style.cssText = 'font:14px Consolas,monospace;overflow-wrap:anywhere;margin:20px 0 10px';
      const pre = document.createElement('pre');
      const typography = getReadingProfileOptions(readingProfile);
      pre.style.cssText = `overflow:auto;tab-size:4;white-space:${wordWrap ? 'pre-wrap' : 'pre'};overflow-wrap:${wordWrap ? 'anywhere' : 'normal'}`;
      Object.assign(pre.style, { fontFamily: typography.fontFamily, fontSize: `${typography.fontSize}px`, lineHeight: `${typography.lineHeight}px` });
      pre.tabIndex = 0; pre.setAttribute('aria-label', source.path);
      section.append(label, pre); fallback.append(section);
      const html = await monaco.editor.colorize(source.text, source.language || 'cpp', { theme: getReadingTheme(readingProfile, theme) });
      if (token !== generation) return;
      pre.innerHTML = html;
    }
    fallback.scrollTop = scrollTop; fallback.scrollLeft = scrollLeft;
  }

  function render() {
    rememberView();
    clearInstance(); ++generation;
    onDiffUpdate?.(null);
    const selectedTheme = getReadingTheme(readingProfile, theme);
    monaco.editor.setTheme(selectedTheme);
    const profileOptions = getReadingProfileOptions(readingProfile);
    options.wordWrap = wordWrap ? 'on' : 'off';
    const mobile = narrow.matches;
    editorHost.hidden = mobile; fallback.hidden = !mobile;
    if (mobile) { void renderFallback(); return; }
    if (mode === 'view' || !models[0] || !models[1]) {
      instance = monaco.editor.create(editorHost, { ...options, ...profileOptions, theme: selectedTheme, model: models[0] || models[1] || null });
    } else {
      instance = monaco.editor.createDiffEditor(editorHost, {
        ...options, ...profileOptions, theme: selectedTheme, originalEditable: false, renderSideBySide: mode === 'split',
        diffWordWrap: wordWrap ? 'on' : 'off',
        useInlineViewWhenSpaceIsLimited: false, ignoreTrimWhitespace: ignoreWhitespace,
        diffAlgorithm: 'advanced', maxComputationTime: 5000,
        hideUnchangedRegions: { enabled: false }, renderIndicators: true,
        originalAriaLabel: '左侧原始源码', modifiedAriaLabel: '右侧原始源码',
      });
      instance.setModel({ original: models[0], modified: models[1] });
      diffListener = instance.onDidUpdateDiff(() => {
        const changes = instance?.getLineChanges();
        const result = instance?.getDiffComputationResult?.();
        onDiffUpdate?.(changes == null ? null : { changeCount: changes.length, quitEarly: Boolean(result?.quitEarly) });
      });
    }
    restoreView();
  }

  const api = {
    setSources(left, right) {
      const nextSources = [left || null, right || null];
      const sameSource = (source, previous) => (!source && !previous) || Boolean(source && previous
        && source.path === previous.path && source.text === previous.text
        && (source.language || 'cpp') === (previous.language || 'cpp'));
      const unchanged = nextSources.map((source, index) => sameSource(source, sources[index]));
      if (unchanged.every(Boolean)) return;
      rememberView();
      clearInstance();
      const previousModels = models;
      models = nextSources.map((source, index) => unchanged[index] ? previousModels[index] || null
        : source ? monaco.editor.createModel(source.text, source.language || 'cpp') : null);
      for (const model of previousModels) {
        if (model && !models.includes(model)) { viewStates.delete(model); model.dispose(); }
      }
      // Snapshot the descriptors so a caller mutating its object cannot conceal
      // a changed text/language behind a previously reused object reference.
      sources = nextSources.map(source => source ? { ...source } : null);
      render();
    },
    setMode(value) { if (mode !== value) { mode = value; render(); } },
    setTheme(value) {
      theme = value === 'vs' ? 'vs' : 'vs-dark';
      monaco.editor.setTheme(getReadingTheme(readingProfile, theme));
      if (narrow.matches) void refreshFallbackAppearance();
    },
    setReadingProfile(value) {
      readingProfile = normalizeReadingProfile(value);
      // Updating the existing editor leaves its models, cursor and scroll intact.
      rememberView();
      instance?.updateOptions(getReadingProfileOptions(readingProfile));
      monaco.editor.setTheme(getReadingTheme(readingProfile, theme));
      restoreView();
      if (narrow.matches) void refreshFallbackAppearance();
    },
    getReadingProfile() { return readingProfile; },
    setWordWrap(value) {
      wordWrap = Boolean(value);
      instance?.updateOptions({ wordWrap: wordWrap ? 'on' : 'off', diffWordWrap: wordWrap ? 'on' : 'off' });
      for (const pre of fallback.querySelectorAll('pre')) {
        pre.style.whiteSpace = wordWrap ? 'pre-wrap' : 'pre';
        pre.style.overflowWrap = wordWrap ? 'anywhere' : 'normal';
      }
    },
    setIgnoreWhitespace(value) {
      ignoreWhitespace = value;
      if (instance?.getLineChanges) instance.updateOptions({ ignoreTrimWhitespace: value });
    },
    nextChange() { instance?.goToDiff?.('next'); },
    previousChange() { instance?.goToDiff?.('previous'); },
    dispose() {
      clearInstance(); ++generation;
      for (const model of models) model?.dispose();
      viewStates.clear();
      narrow.removeEventListener('change', render);
      container.replaceChildren();
    },
  };
  narrow.addEventListener('change', render);
  render();
  return api;
}
