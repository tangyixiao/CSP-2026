// Reference-style reading views, not exact IDE versions or compiler environments.
export const READING_PROFILES = Object.freeze({
  csp: Object.freeze({ label: 'CSP', fontFamily: 'Consolas, "Cascadia Code", monospace', fontSize: 15, lineHeight: 24 }),
  devcpp: Object.freeze({ label: 'Dev-C++ · Classic Plus', fontFamily: 'Consolas, "Liberation Mono", monospace', fontSize: 14, lineHeight: 22 }),
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

export const CLASSIC_PLUS_LANGUAGE = 'csp-classic-plus-cpp';

export function getReadingLanguage(profile, language = 'cpp') {
  return normalizeReadingProfile(profile) === 'devcpp' && language === 'cpp' ? CLASSIC_PLUS_LANGUAGE : language;
}

export function getReadingBracketOptions(profile, original) {
  return normalizeReadingProfile(profile) === 'devcpp' ? { ...original, enabled: false } : { ...original };
}

/** Extend Monaco's C++ lexer only for this view. Keep the original lexer intact.
 * Classic Plus distinguishes character constants from strings and colors whole
 * preprocessor lines; Monaco's default lexer does neither in the same way.
 */
export function createClassicPlusLanguage(cpp) {
  return {
    ...cpp,
    tokenPostfix: '.classicplus',
    tokenizer: {
      ...cpp.tokenizer,
      root: [
        [/^\s*#.*\\$/, { token: 'keyword.directive', next: '@classicDirective' }],
        [/^\s*#.*$/, 'keyword.directive'],
        [/(?:u8|u|U|L)?'(?:[^'\\\r\n]|\\.)*'/, 'character'],
        ...cpp.tokenizer.root.filter(rule => !Array.isArray(rule) || rule[0]?.source !== '\\[\\s*\\['),
      ],
      classicDirective: [
        [/.*\\$/, 'keyword.directive'],
        [/.*$/, { token: 'keyword.directive', next: '@pop' }],
      ],
    },
  };
}

// Embarcadero/Dev-Cpp 882c2376, Source/DefaultFiles.rc:57-79.
// clHighlight/clBtnFace are system colors; the approved preview uses a Windows
// blue/gray rendering. Dark colors below are a site adaptation, not an IDE preset.
function classicPlusTheme(base, dark = false) {
  const ink = dark ? 'ECECEC' : '000000';
  const palette = dark
    ? { background: '#202328', gutter: '#292d32', number: 'D6A6E8', string: '91B7FF', symbol: 'FF9A94', comment: '83BFFF', directive: '92CD8D', line: '#183d43', selection: '#294b80' }
    : { background: '#FFFFFF', gutter: '#F0F0F0', number: '800080', string: '0000FF', symbol: 'FF0000', comment: '0078D7', directive: '008000', line: '#CCFFFF', selection: '#000080' };
  return {
    base, inherit: false,
    rules: [
      { token: '', foreground: ink, fontStyle: '' },
      { token: 'identifier', foreground: ink, fontStyle: '' },
      { token: 'keyword', foreground: ink, fontStyle: 'bold' },
      { token: 'type', foreground: ink, fontStyle: 'bold' },
      { token: 'keyword.directive', foreground: palette.directive, fontStyle: '' },
      { token: 'string.include.identifier', foreground: palette.directive, fontStyle: '' },
      { token: 'string', foreground: palette.string, fontStyle: 'bold' },
      { token: 'character', foreground: ink, fontStyle: '' },
      { token: 'number', foreground: palette.number, fontStyle: '' },
      { token: 'delimiter', foreground: palette.symbol, fontStyle: 'bold' },
      { token: 'operator', foreground: palette.symbol, fontStyle: 'bold' },
      { token: 'comment', foreground: palette.comment, fontStyle: 'italic' },
    ],
    colors: {
      'editor.background': palette.background,
      'editor.foreground': `#${ink}`,
      'editorLineNumber.foreground': `#${ink}`,
      'editorLineNumber.activeForeground': `#${ink}`,
      'editorGutter.background': palette.gutter,
      'editor.lineHighlightBackground': palette.line,
      'editor.lineHighlightBorder': '#00000000',
      'editor.selectionBackground': palette.selection,
      'editor.selectionForeground': '#FFFFFF',
      'editor.inactiveSelectionBackground': dark ? '#304358' : '#D9E2EF',
      ...Object.fromEntries(Array.from({ length: 6 }, (_, index) => [`editorBracketHighlight.foreground${index + 1}`, `#${palette.symbol}`])),
      'editorBracketHighlight.unexpectedBracket.foreground': `#${palette.symbol}`,
    },
  };
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
  'csp-devcpp-vs': classicPlusTheme('vs'),
  'csp-devcpp-vs-dark': classicPlusTheme('vs-dark', true),
  'csp-geany-vs': referenceTheme('vs', { background: '#fafaf7', foreground: '#222222', gutter: '#73736e', line: '#eeeee7', comment: '626D66', keyword: '172C80', string: '8B2525', number: '814D06', type: '176535' }),
  'csp-geany-vs-dark': referenceTheme('vs-dark', { background: '#252820', foreground: '#e8e9e1', gutter: '#a0a48f', line: '#303429', comment: 'B0BAAA', keyword: 'A9BCFF', string: 'F2AD9D', number: 'E8C17E', type: 'AAD29F' }),
});
