import defaultConfig from './default-clang-format.txt?raw';
import { createFormatter, validateConfigText, MAX_CONFIG_BYTES } from './formatter.js';

const STORAGE_KEY = 'csp-clang-format-config-v1';
const sample = 'int main(){for(int i=0;i<3;i++){if(i){return i;}}return 0;}';

export function mountFormatControls({ toolbar, onChange, getSources }) {
  const engine = createFormatter();
  const results = new WeakMap();
  let config = defaultConfig, generation = 0, enabled = false, disposed = false;
  try { config = validateConfigText(localStorage.getItem(STORAGE_KEY) || defaultConfig); } catch { /* use bundled default */ }
  const toggle = document.createElement('button'); toggle.type = 'button'; toggle.className = 'btn'; toggle.id = 'format-display';
  function updateToggle() { toggle.textContent = enabled ? '恢复原文' : '格式化显示'; toggle.setAttribute('aria-pressed', String(enabled)); }
  updateToggle(); toolbar.append(toggle);
  const panel = document.createElement('details'); panel.className = 'format-config';
  panel.innerHTML = `<summary>编辑 .clang-format</summary><div class="format-config-body"><label for="clang-format-config">完整 .clang-format 配置</label><p>默认配置基于 LLVM：缩进 4 空格、不限制行宽、保留大括号。格式化用于 C/C++ 阅读和比较，可能改变显示行号。复制取原文，下载保留归档字节；配置保存在当前浏览器。</p><textarea id="clang-format-config" spellcheck="false" wrap="off"></textarea><div class="format-config-actions"><button class="btn" id="apply-clang-format" type="button">应用配置</button><button class="btn" id="reset-clang-format" type="button">恢复默认配置</button><label class="btn" for="import-clang-format">导入配置</label><input id="import-clang-format" type="file" hidden /><button class="btn" id="export-clang-format" type="button">导出配置</button></div><p id="clang-format-feedback" role="status" aria-live="polite"></p></div>`;
  toolbar.after(panel);
  const area = panel.querySelector('textarea'), feedback = panel.querySelector('#clang-format-feedback'), apply = panel.querySelector('#apply-clang-format');
  area.value = config;
  function display(source) { return enabled && source?.language === 'cpp' && source.viewFormat !== 'hex' ? results.get(source)?.text ?? source.text : source?.text; }
  async function formatSource(source) {
    if (!enabled || !source || source.language !== 'cpp' || source.viewFormat === 'hex') return;
    const current = generation;
    if (results.get(source)?.generation === current) return;
    results.set(source, { generation: current, pending: true });
    try {
      const text = await engine.format(source.text, config);
      if (!disposed && current === generation) results.set(source, { generation: current, text });
    } catch (error) {
      if (!disposed && current === generation) results.set(source, { generation: current, error: error.message });
    }
    if (!disposed && current === generation) onChange();
  }
  async function applyConfig(value) {
    apply.disabled = true; feedback.textContent = '正在校验配置…';
    try {
      validateConfigText(value);
      await engine.format(sample, value);
      if (disposed) return;
      config = value; generation++; enabled = true; updateToggle();
      try { localStorage.setItem(STORAGE_KEY, config); feedback.textContent = '配置已应用并保存到当前浏览器。'; }
      catch { feedback.textContent = '配置已应用；浏览器不允许持久保存。'; }
      feedback.classList.remove('has-error');
      await Promise.all(getSources().map(formatSource)); onChange();
    } catch (error) {
      feedback.textContent = `配置无效：${error.message}。继续使用上次有效配置。`;
      feedback.classList.add('has-error');
    } finally { apply.disabled = false; }
  }
  apply.addEventListener('click', () => { void applyConfig(area.value); });
  panel.querySelector('#reset-clang-format').addEventListener('click', () => { area.value = defaultConfig; void applyConfig(defaultConfig); });
  panel.querySelector('#import-clang-format').addEventListener('change', async event => {
    const file = event.target.files?.[0]; if (!file) return;
    try {
      if (file.size > MAX_CONFIG_BYTES) throw new Error('配置超过 64 KiB 上限。');
      area.value = validateConfigText(await file.text());
      feedback.textContent = '配置已导入，点击“应用配置”生效。'; feedback.classList.remove('has-error');
    } catch (error) { feedback.textContent = error.message; feedback.classList.add('has-error'); }
    event.target.value = '';
  });
  panel.querySelector('#export-clang-format').addEventListener('click', () => {
    const url = URL.createObjectURL(new Blob([area.value], { type: 'application/octet-stream' }));
    const a = document.createElement('a'); a.href = url; a.download = 'custom.clang-format'; a.click(); setTimeout(() => URL.revokeObjectURL(url), 1000);
  });
  toggle.addEventListener('click', () => { enabled = !enabled; updateToggle(); onChange(); if (enabled) for (const source of getSources()) void formatSource(source); });
  return { display, formatSource, status(source) {
    if (!enabled || source?.language !== 'cpp' || source.viewFormat === 'hex') return '';
    const result = results.get(source);
    return result?.pending ? '正在格式化显示，可切换原文' : result?.error ? `格式化失败，显示原文：${result.error}` : result?.text !== undefined ? '已格式化显示 · 行号可能变化 · 复制及下载为原文' : '';
  }, dispose() { disposed = true; engine.dispose(); } };
}
