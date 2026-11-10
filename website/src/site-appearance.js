export const APPEARANCE_STORAGE_KEY = 'csp-site-appearance';
export const APPEARANCES = Object.freeze([
  Object.freeze({ value: 'csp', label: 'CSP', referenceUrl: null }),
  Object.freeze({ value: 'noi', label: 'NOI', referenceUrl: 'https://noi.cn/' }),
]);

// Site accents are independent of the light/dark mode and the editor profile.
export const APPEARANCE_TOKENS = Object.freeze({
  csp: Object.freeze({
    light: Object.freeze({ accent: '#245caa', navigation: '#182d4b', soft: '#edf3fa' }),
    dark: Object.freeze({ accent: '#9fc3fa', navigation: '#e1e9f5', soft: '#243349' }),
  }),
  noi: Object.freeze({
    light: Object.freeze({ accent: '#d22525', navigation: '#29255c', soft: '#f7eeee', navigationBand: '#d22525', activeNavigation: '#29255c' }),
    dark: Object.freeze({ accent: '#ff999e', navigation: '#d1ccf5', soft: '#35282d', navigationBand: '#d22525', activeNavigation: '#29255c' }),
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
