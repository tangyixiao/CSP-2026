import test from 'node:test';
import assert from 'node:assert/strict';
import { READING_PROFILES, READING_THEMES, normalizeReadingProfile, getReadingProfileOptions, getReadingTheme, createClassicPlusLanguage, getReadingLanguage, getReadingBracketOptions, CLASSIC_PLUS_LANGUAGE } from '../src/reading-profiles.js';
import { language as cpp } from 'monaco-editor/esm/vs/basic-languages/cpp/cpp.js';
import { compile } from 'monaco-editor/esm/vs/editor/standalone/common/monarch/monarchCompile.js';
import { MonarchTokenizer } from 'monaco-editor/esm/vs/editor/standalone/common/monarch/monarchLexer.js';
import { TokenTheme } from 'monaco-editor/esm/vs/editor/common/languages/supports/tokenization.js';
import { TokenMetadata } from 'monaco-editor/esm/vs/editor/common/encodedTokenAttributes.js';

test('unknown or inherited profile names resolve to the CSP default', () => {
  for (const value of [undefined, null, '', 'windows', 'constructor', '__proto__']) {
    assert.equal(normalizeReadingProfile(value), 'csp');
  }
  for (const value of ['csp', 'devcpp', 'geany']) assert.equal(normalizeReadingProfile(value), value);
});

test('profile and light/dark theme form independent valid combinations', () => {
  assert.equal(getReadingTheme('csp', 'vs'), 'vs');
  assert.equal(getReadingTheme('csp', 'vs-dark'), 'vs-dark');
  for (const profile of ['devcpp', 'geany']) {
    for (const base of ['vs', 'vs-dark']) {
      const definition = READING_THEMES[getReadingTheme(profile, base)];
      assert.equal(definition.base, base);
      assert.ok(definition.rules.some(rule => rule.token === 'keyword'));
      assert.match(definition.colors['editor.background'], /^#[0-9a-f]{6}$/i);
    }
  }
  assert.equal(getReadingTheme('invalid', 'vs'), 'vs');
});

test('profiles expose only presentation options and return fresh values', () => {
  for (const profile of Object.keys(READING_PROFILES)) {
    const options = getReadingProfileOptions(profile);
    assert.deepEqual(Object.keys(options).sort(), ['fontFamily', 'fontSize', 'lineHeight']);
    assert.ok(options.lineHeight > options.fontSize);
    options.fontSize = 99;
    assert.notEqual(getReadingProfileOptions(profile).fontSize, 99);
  }
  assert.notDeepEqual(getReadingProfileOptions('devcpp'), getReadingProfileOptions('geany'));
});

test('Classic Plus uses Consolas with an independent, explicitly derived dark counterpart', () => {
  const options = getReadingProfileOptions('devcpp');
  assert.match(options.fontFamily, /^Consolas,/);
  assert.equal(options.fontSize, 14);
  const colors = READING_THEMES['csp-devcpp-vs'].colors;
  assert.equal(colors['editor.background'], '#FFFFFF');
  assert.equal(colors['editorGutter.background'], '#F0F0F0');
  assert.equal(colors['editor.lineHighlightBackground'], '#CCFFFF');
  assert.equal(colors['editor.selectionBackground'], '#000080');
  for (let index = 1; index <= 6; index++) assert.equal(colors[`editorBracketHighlight.foreground${index}`], '#FF0000');
  assert.notEqual(READING_THEMES['csp-devcpp-vs-dark'].colors['editor.background'], colors['editor.background']);
  assert.equal(getReadingLanguage('devcpp', 'cpp'), CLASSIC_PLUS_LANGUAGE);
  assert.equal(getReadingLanguage('csp', 'cpp'), 'cpp');
  assert.equal(getReadingLanguage('geany', 'cpp'), 'cpp');
  assert.equal(getReadingLanguage('devcpp', 'python'), 'python');
});

test('Dev-C++ disables model bracket colors and other profiles restore the original choice', () => {
  const original = { enabled: true, independentColorPoolPerBracketType: true };
  assert.deepEqual(getReadingBracketOptions('devcpp', original), { enabled: false, independentColorPoolPerBracketType: true });
  assert.deepEqual(getReadingBracketOptions('csp', original), original);
  assert.deepEqual(getReadingBracketOptions('geany', original), original);
  assert.equal(original.enabled, true);
  assert.equal(getReadingBracketOptions('csp', { enabled: false, independentColorPoolPerBracketType: false }).enabled, false);
});

test('real Monaco C++ tokenization resolves Classic Plus keyword, symbol, character, string and directive styles', () => {
  const originalRoots = [...cpp.tokenizer.root];
  const definition = createClassicPlusLanguage(cpp);
  const tokenizer = new MonarchTokenizer({}, {}, CLASSIC_PLUS_LANGUAGE, compile(CLASSIC_PLUS_LANGUAGE, definition), {
    getValue: () => 100000,
    onDidChangeConfiguration: () => ({ dispose() {} }),
  });
  const theme = TokenTheme.createFromRawTokenTheme(READING_THEMES['csp-devcpp-vs'].rules, []);
  const map = theme.getColorMap();
  const style = token => {
    const metadata = theme.match(1, token.type);
    return { color: map[TokenMetadata.getForeground(metadata)].toString().toUpperCase(), font: TokenMetadata.getFontStyle(metadata) };
  };
  const line = 'int main(){char c=\'x\'; const char* s="abc"; return 0x2f+42;} // note';
  const result = tokenizer.tokenize(line, true, tokenizer.getInitialState());
  const tokens = result.tokens.map((token, index) => ({ ...token, text: line.slice(token.offset, result.tokens[index + 1]?.offset ?? line.length) }));
  const find = text => tokens.find(token => token.text === text);
  assert.deepEqual(style(find('int')), { color: '#000000', font: 2 });
  assert.deepEqual(style(find('{')), { color: '#FF0000', font: 2 });
  assert.deepEqual(style(find('\'x\'')), { color: '#000000', font: 0 });
  assert.deepEqual(style(find('"abc"')), { color: '#0000FF', font: 2 });
  assert.deepEqual(style(find('0x2f')), { color: '#800080', font: 0 });
  assert.deepEqual(style(find('// note')), { color: '#0078D7', font: 1 });
  const directive = tokenizer.tokenize('#include <bits/stdc++.h>', true, tokenizer.getInitialState()).tokens;
  assert(directive.every(token => style(token).color === '#008000' && style(token).font === 0));
  const open = tokenizer.tokenize('#define TWO \\', true, tokenizer.getInitialState());
  const continued = tokenizer.tokenize('  1 + 1', true, open.endState);
  assert(continued.tokens.every(token => style(token).color === '#008000'));
  assert.deepEqual(cpp.tokenizer.root, originalRoots, 'the CSP/Geany lexer must stay unchanged');
  assert.equal(tokens.map(token => token.text).join(''), line, 'styling must preserve all source characters');
  tokenizer.dispose();
});
