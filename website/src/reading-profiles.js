// Reference-style reading views, not exact IDE versions or compiler environments.
export const READING_PROFILES = Object.freeze({
  csp: Object.freeze({ label: 'CSP', fontFamily: 'Consolas, "Cascadia Code", monospace', fontSize: 15, lineHeight: 24 }),
  devcpp: Object.freeze({ label: 'Dev-C++ · 参考视图', fontFamily: '"Courier New", "Liberation Mono", monospace', fontSize: 15, lineHeight: 21 }),
  geany: Object.freeze({ label: 'Geany · 参考视图', fontFamily: '"DejaVu Sans Mono", "Liberation Mono", Consolas, monospace', fontSize: 14, lineHeight: 22 }),
});

export function normalizeReadingProfile(value) {
  return Object.hasOwn(READING_PROFILES, value) ? value : 'csp';
}

export function getReadingProfileOptions(value) {
  const { fontFamily, fontSize, lineHeight } = READING_PROFILES[normalizeReadingProfile(value)];
  return { fontFamily, fontSize, lineHeight };
}

export function getReadingTheme(profile, theme) {
  const normalized = normalizeReadingProfile(profile);
  const base = theme === 'vs' ? 'vs' : 'vs-dark';
  return normalized === 'csp' ? base : `csp-${normalized}-${base}`;
}

function referenceTheme(base, colors) {
  return {
    base, inherit: true,
    rules: [
      { token: 'comment', foreground: colors.comment, fontStyle: 'italic' },
      { token: 'keyword', foreground: colors.keyword, fontStyle: 'bold' },
      { token: 'string', foreground: colors.string },
      { token: 'number', foreground: colors.number },
      { token: 'type', foreground: colors.type },
    ],
    colors: {
      'editor.background': colors.background,
      'editor.foreground': colors.foreground,
      'editorLineNumber.foreground': colors.gutter,
      'editorGutter.background': colors.background,
      'editor.lineHighlightBackground': colors.line,
    },
  };
}

export const READING_THEMES = Object.freeze({
  'csp-devcpp-vs': referenceTheme('vs', { background: '#ffffff', foreground: '#17202c', gutter: '#707070', line: '#f2f5fa', comment: '596B47', keyword: '000080', string: '8F2020', number: '7D2382', type: '006B6B' }),
  'csp-devcpp-vs-dark': referenceTheme('vs-dark', { background: '#202227', foreground: '#e5e5e5', gutter: '#9c9c9c', line: '#292d35', comment: 'A9BB8F', keyword: '9CBFFF', string: 'F2ABAB', number: 'D5ACF0', type: '8FD4D4' }),
  'csp-geany-vs': referenceTheme('vs', { background: '#fafaf7', foreground: '#222222', gutter: '#73736e', line: '#eeeee7', comment: '626D66', keyword: '172C80', string: '8B2525', number: '814D06', type: '176535' }),
  'csp-geany-vs-dark': referenceTheme('vs-dark', { background: '#252820', foreground: '#e8e9e1', gutter: '#a0a48f', line: '#303429', comment: 'B0BAAA', keyword: 'A9BCFF', string: 'F2AD9D', number: 'E8C17E', type: 'AAD29F' }),
});
