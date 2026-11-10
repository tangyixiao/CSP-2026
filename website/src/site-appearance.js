export const APPEARANCE_STORAGE_KEY = 'csp-site-appearance';
export const APPEARANCES = Object.freeze([
  Object.freeze({ value: 'csp', label: 'CSP', referenceUrl: null }),
  Object.freeze({ value: 'noi', label: 'NOI', referenceUrl: 'https://noi.cn/' }),
]);

// Site accents are independent of the light/dark mode and the editor profile.
export const APPEARANCE_TOKENS = Object.freeze({
  csp: Object.freeze({
    light: Object.freeze({ accent: '#16776d', navigation: '#143b3a', soft: '#edf6f3' }),
    dark: Object.freeze({ accent: '#83d9ca', navigation: '#b9e8df', soft: '#162d2b' }),
  }),
  noi: Object.freeze({
    light: Object.freeze({ accent: '#b62d32', navigation: '#342c63', soft: '#faf0f0' }),
    dark: Object.freeze({ accent: '#ff999e', navigation: '#c9bfff', soft: '#352328' }),
  }),
});

function browserStorage() {
  try { return globalThis.localStorage; } catch { return undefined; }
}

function normalizeAppearance(value) {
  return value === 'noi' ? 'noi' : 'csp';
}

export function getSavedAppearance(storage = browserStorage()) {
  try { return normalizeAppearance(storage?.getItem(APPEARANCE_STORAGE_KEY)); }
  catch { return 'csp'; }
}

export function applyAppearance(value, {
  root = globalThis.document?.documentElement,
  storage = browserStorage(),
} = {}) {
  const appearance = normalizeAppearance(value);
  if (root?.dataset) root.dataset.appearance = appearance;
  try { storage?.setItem(APPEARANCE_STORAGE_KEY, appearance); }
  catch { /* The current appearance remains usable when persistence is blocked. */ }
  return appearance;
}
