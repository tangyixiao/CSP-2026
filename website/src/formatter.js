export const MAX_CONFIG_BYTES = 64 * 1024;
export function validateConfigText(config) {
  if (typeof config !== 'string' || !config.trim()) throw new Error('配置不能为空，请填写内容或应用默认配置。');
  if (new TextEncoder().encode(config).length > MAX_CONFIG_BYTES) throw new Error('配置超过 64 KiB 上限，请精简内容后重试。');
  return config;
}

export function createFormatter() {
  let worker, nextId = 0;
  const pending = new Map();
  function stop(message = '格式化已停止，请重试。') {
    worker?.terminate(); worker = null;
    for (const { reject, timer } of pending.values()) { clearTimeout(timer); reject(new Error(message)); }
    pending.clear();
  }
  function request(source, config) {
    validateConfigText(config);
    if (!worker) {
      worker = new Worker(new URL('./formatter-worker.js', import.meta.url), { type: 'module' });
      worker.onmessage = ({ data }) => {
        const job = pending.get(data.id); if (!job) return;
        pending.delete(data.id); clearTimeout(job.timer);
        if (data.error) job.reject(new Error(data.error)); else job.resolve(data.text);
      };
      worker.onerror = () => stop('格式化引擎加载失败，请重试或点击“显示原文”。');
    }
    const id = ++nextId;
    return new Promise((resolve, reject) => {
      const timer = setTimeout(() => stop('格式化达到 15 秒时限，已停止；可继续阅读原文。'), 15000);
      pending.set(id, { resolve, reject, timer });
      worker.postMessage({ id, source, config });
    });
  }
  return { format: request, dispose: () => stop() };
}
