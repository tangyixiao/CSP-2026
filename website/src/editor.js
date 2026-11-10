import * as monaco from 'monaco-editor/esm/vs/editor/editor.api.js';
import 'monaco-editor/esm/vs/editor/browser/coreCommands.js';
import 'monaco-editor/esm/vs/editor/browser/widget/codeEditor/codeEditorWidget.js';
import 'monaco-editor/esm/vs/editor/browser/widget/diffEditor/diffEditor.contribution.js';
import 'monaco-editor/esm/vs/editor/contrib/find/browser/findController.js';
import 'monaco-editor/esm/vs/editor/contrib/folding/browser/folding.js';
import 'monaco-editor/esm/vs/editor/contrib/bracketMatching/browser/bracketMatching.js';
import 'monaco-editor/esm/vs/basic-languages/cpp/cpp.contribution.js';
import { conf as cppConfiguration, language as cppLanguage } from 'monaco-editor/esm/vs/basic-languages/cpp/cpp.js';
import 'monaco-editor/esm/vs/basic-languages/pascal/pascal.contribution.js';
import 'monaco-editor/esm/vs/basic-languages/python/python.contribution.js';
import 'monaco-editor/esm/vs/basic-languages/java/java.contribution.js';
import EditorWorker from 'monaco-editor/esm/vs/editor/editor.worker.js?worker';
import { normalizeReadingProfile, getReadingProfileOptions, getReadingTheme, getReadingLanguage, getReadingBracketOptions, createClassicPlusLanguage, CLASSIC_PLUS_LANGUAGE, READING_THEMES } from './reading-profiles.js';

globalThis.MonacoEnvironment = { getWorker() { return new EditorWorker(); } };
for (const [name, definition] of Object.entries(READING_THEMES)) monaco.editor.defineTheme(name, definition);
monaco.languages.register({ id: CLASSIC_PLUS_LANGUAGE });
monaco.languages.setLanguageConfiguration(CLASSIC_PLUS_LANGUAGE, cppConfiguration);
monaco.languages.setMonarchTokensProvider(CLASSIC_PLUS_LANGUAGE, createClassicPlusLanguage(cppLanguage));

export async function createCodeWorkbench(container, { onDiffUpdate } = {}) {
  let sources = [null, null], models = [], instance, diffListener;
  let mode = 'split', theme = 'vs-dark', ignoreWhitespace = false, generation = 0;
  let readingProfile = 'csp';
  let wordWrap = false;
  const viewStates = new Map();
  const originalBracketOptions = new Map();
  const narrow = matchMedia('(max-width: 700px)');
  const editorHost = document.createElement('div');
  editorHost.style.cssText = 'height:100%;min-height:420px;width:100%';
  const fallback = document.createElement('div');
  fallback.className = 'source-fallback';
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
    fallback.classList.toggle('classicplus-fallback', readingProfile === 'devcpp');
    fallback.classList.toggle('source-wrapped', wordWrap);
    fallback.style.setProperty('--fallback-gutter', palette?.['editorGutter.background'] || 'transparent');
    fallback.style.setProperty('--fallback-line', palette?.['editor.lineHighlightBackground'] || 'transparent');
    fallback.style.background = palette?.['editor.background'] || (theme === 'vs' ? '#ffffff' : '#1e1e1e');
    fallback.style.color = palette?.['editor.foreground'] || (theme === 'vs' ? '#17202c' : '#d4d4d4');
  }

  function presentationOptions() {
    const classic = readingProfile === 'devcpp';
    return {
      ...getReadingProfileOptions(readingProfile),
      fontLigatures: false,
      bracketPairColorization: { enabled: !classic },
      renderLineHighlight: 'line',
      renderLineHighlightOnlyWhenFocus: false,
      lineNumbersMinChars: classic ? 3 : 5,
      lineDecorationsWidth: 10,
      padding: classic ? { top: 7, bottom: 20 } : { top: 18, bottom: 18 },
    };
  }

  function updateModelPresentation() {
    for (const model of models) {
      if (!model) continue;
      if (!originalBracketOptions.has(model)) originalBracketOptions.set(model, { ...model.getOptions().bracketPairColorizationOptions });
      // This is a text-model option in Monaco 0.55. Editor options alone do not
      // reliably remove already-present bracket decoration classes.
      model.updateOptions({ bracketColorizationOptions: getReadingBracketOptions(readingProfile, originalBracketOptions.get(model)) });
    }
  }

  async function colorizeSource(source) {
    const html = await monaco.editor.colorize(source.text, getReadingLanguage(readingProfile, source.language || 'cpp'), { theme: getReadingTheme(readingProfile, theme) });
    // Every fallback profile uses the same newline-bearing text structure so
    // cross-line selection offsets remain stable when switching profiles.
    // Monaco produces escaped, highlighted HTML. Decorative line numbers use a
    // pseudo-element, keeping numbers out of copied code and selection offsets.
    const lines = html.split(/<br\s*\/?\s*>/i);
    if (lines.at(-1) === '') lines.pop();
    return lines.map((line, index) => `<span class="reader-code-line" data-line="${index + 1}"><span class="reader-code-text">${line}</span></span>`).join('\n');
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
      const html = await colorizeSource(source);
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
      const html = await colorizeSource(source);
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
    const profileOptions = presentationOptions();
    options.wordWrap = wordWrap ? 'on' : 'off';
    const mobile = narrow.matches;
    updateModelPresentation();
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
    updateModelPresentation();
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
        : source ? monaco.editor.createModel(source.text, getReadingLanguage(readingProfile, source.language || 'cpp')) : null);
      // Capture defaults before attaching the model to an editor whose current
      // profile may already disable decoration colors.
      for (const model of models) if (model && !originalBracketOptions.has(model)) {
        originalBracketOptions.set(model, { ...model.getOptions().bracketPairColorizationOptions });
      }
      for (const model of previousModels) {
        if (model && !models.includes(model)) { viewStates.delete(model); originalBracketOptions.delete(model); model.dispose(); }
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
      for (const [index, model] of models.entries()) {
        if (model) monaco.editor.setModelLanguage(model, getReadingLanguage(readingProfile, sources[index]?.language || 'cpp'));
      }
      instance?.updateOptions(presentationOptions());
      updateModelPresentation();
      monaco.editor.setTheme(getReadingTheme(readingProfile, theme));
      restoreView();
      if (narrow.matches) void refreshFallbackAppearance();
    },
    getReadingProfile() { return readingProfile; },
    setWordWrap(value) {
      wordWrap = Boolean(value);
      fallback.classList.toggle('source-wrapped', wordWrap);
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
      originalBracketOptions.clear();
      narrow.removeEventListener('change', render);
      container.replaceChildren();
    },
  };
  narrow.addEventListener('change', render);
  render();
  return api;
}
