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

globalThis.MonacoEnvironment = { getWorker() { return new EditorWorker(); } };

export async function createCodeWorkbench(container, { onDiffUpdate } = {}) {
  let sources = [null, null], models = [], instance, diffListener;
  let mode = 'split', theme = 'vs-dark', ignoreWhitespace = false, generation = 0;
  const narrow = matchMedia('(max-width: 700px)');
  const editorHost = document.createElement('div');
  editorHost.style.cssText = 'height:100%;min-height:420px;width:100%';
  const fallback = document.createElement('div');
  fallback.style.cssText = 'height:100%;overflow:auto;padding:16px;box-sizing:border-box';
  container.replaceChildren(editorHost, fallback);
  const options = {
    readOnly: true, domReadOnly: true, automaticLayout: true,
    minimap: { enabled: false }, fontFamily: 'Consolas, "Cascadia Code", monospace',
    fontSize: 14, lineHeight: 23, scrollBeyondLastLine: false,
    padding: { top: 18, bottom: 18 }, renderWhitespace: 'selection',
    accessibilitySupport: 'on', links: false, contextmenu: false,
    ariaLabel: '只读源码，按 Ctrl+F 搜索',
  };

  function clearInstance() {
    diffListener?.dispose(); diffListener = undefined;
    instance?.dispose(); instance = undefined;
  }

  async function renderFallback() {
    const token = ++generation;
    fallback.replaceChildren();
    const note = document.createElement('p');
    note.textContent = '窄屏阅读模式：下方保留语法高亮。对齐差异与跳转请在桌面宽屏使用。';
    fallback.append(note);
    for (const source of sources.filter(Boolean)) {
      const section = document.createElement('section');
      const label = document.createElement('h3'); label.textContent = source.path;
      label.style.cssText = 'font:12px Consolas,monospace;overflow-wrap:anywhere;margin:20px 0 10px';
      const pre = document.createElement('pre');
      pre.style.cssText = 'font:13px/1.8 Consolas,monospace;overflow:auto;tab-size:4';
      pre.tabIndex = 0; pre.setAttribute('aria-label', source.path);
      section.append(label, pre); fallback.append(section);
      const html = await monaco.editor.colorize(source.text, source.language || 'cpp', { theme });
      if (token !== generation) return;
      pre.innerHTML = html;
    }
  }

  function render() {
    clearInstance(); ++generation;
    onDiffUpdate?.(null);
    monaco.editor.setTheme(theme);
    const mobile = narrow.matches;
    editorHost.hidden = mobile; fallback.hidden = !mobile;
    if (mobile) { void renderFallback(); return; }
    if (mode === 'view' || !models[0] || !models[1]) {
      instance = monaco.editor.create(editorHost, { ...options, theme, model: models[0] || models[1] || null });
    } else {
      instance = monaco.editor.createDiffEditor(editorHost, {
        ...options, theme, originalEditable: false, renderSideBySide: mode === 'split',
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
  }

  const api = {
    setSources(left, right) {
      clearInstance();
      for (const model of models) model?.dispose();
      sources = [left, right];
      models = sources.map(source => source ? monaco.editor.createModel(source.text, source.language || 'cpp') : null);
      render();
    },
    setMode(value) { mode = value; render(); },
    setTheme(value) { theme = value; monaco.editor.setTheme(theme); if (narrow.matches) void renderFallback(); },
    setIgnoreWhitespace(value) {
      ignoreWhitespace = value;
      if (instance?.getLineChanges) instance.updateOptions({ ignoreTrimWhitespace: value });
    },
    nextChange() { instance?.goToDiff?.('next'); },
    previousChange() { instance?.goToDiff?.('previous'); },
    dispose() {
      clearInstance(); ++generation;
      for (const model of models) model?.dispose();
      narrow.removeEventListener('change', render);
      container.replaceChildren();
    },
  };
  narrow.addEventListener('change', render);
  render();
  return api;
}
