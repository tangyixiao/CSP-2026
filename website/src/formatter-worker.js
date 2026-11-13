import init, { format } from '@wasm-fmt/clang-format/vite';

let diagnostics = [];
// This dedicated worker owns the WASM stderr sink, including YAML key/line errors.
console.error = (...values) => { if (diagnostics.join('\n').length < 8192) diagnostics.push(values.join(' ')); };
const ready = init();
// Serial work keeps one WASM instance; the client can terminate slow jobs.
self.onmessage = async ({ data: { id, source, config } }) => {
  try {
    await ready;
    diagnostics = [];
    const text = format(source, 'main.cpp', config);
    self.postMessage({ id, text });
  } catch (error) {
    self.postMessage({ id, error: [...diagnostics, error?.message || String(error)].join('\n') });
  }
};
