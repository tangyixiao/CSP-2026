import test from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
import { format } from '@wasm-fmt/clang-format/node';
import { validateConfigText, MAX_CONFIG_BYTES } from '../src/formatter.js';
import { hexPage, HEX_PAGE_BYTES, parseHexOffset } from '../src/hex-view.js';

const defaults = await readFile(new URL('../src/default-clang-format.txt', import.meta.url), 'utf8');

test('default format preserves the requested compact functions, four spaces and braces', () => {
  const raw = 'int f(int a){return a+1;}\nvoid g(){a();b();}\nvoid h(){for(int i=0;i<n;++i){a();}}\n';
  const result = format(raw, 'main.cpp', defaults);
  assert.match(result, /int f\(int a\) \{ return a \+ 1; \}/);
  assert.match(result, /void g\(\) \{\n {4}a\(\);\n {4}b\(\);\n\}/);
  assert.match(result, /for \(int i = 0; i < n; \+\+i\) \{ a\(\); \}/);
  assert.equal(raw, 'int f(int a){return a+1;}\nvoid g(){a();b();}\nvoid h(){for(int i=0;i<n;++i){a();}}\n');
});

test('complete YAML edits apply options beyond presets and invalid options throw', () => {
  const config = 'BasedOnStyle: LLVM\nIndentWidth: 2\nBreakBeforeBraces: Allman\nAllowShortFunctionsOnASingleLine: None\n';
  assert.equal(format('int f(){return 1;}', 'main.cpp', config), 'int f()\n{\n  return 1;\n}');
  assert.throws(() => format('int n;', 'main.cpp', 'BasedOnStyle: LLVM\nUnknownOption: true'), /Invalid argument/);
  assert.throws(() => validateConfigText('  '), /不能为空/);
  assert.throws(() => validateConfigText('中'.repeat(MAX_CONFIG_BYTES)), /64 KiB/);
  assert.equal(validateConfigText(defaults), defaults);
});

test('hex pages align offsets, pad incomplete rows and show printable ASCII only', () => {
  const bytes = new Uint8Array([0, 0x41, 0x20, 0x7e, 0x7f, 0xff]);
  const result = hexPage(bytes);
  assert.match(result.text, /00000000  00 41 20 7E 7F FF/);
  assert.match(result.text, /\.A ~\.\.$/);
  assert.equal(result.total, 6); assert.equal(result.end, 6);
  assert.equal(hexPage(new Uint8Array(HEX_PAGE_BYTES + 10), HEX_PAGE_BYTES + 7).offset, HEX_PAGE_BYTES);
  assert.equal(hexPage(new Uint8Array(10), 500).offset, 0);
  assert.equal(hexPage(new Uint8Array(0)).end, 0);
  assert.equal(parseHexOffset('0x100'), 256); assert.equal(parseHexOffset('256'), 256);
  for (const input of ['-1', '2.5', 'Infinity', '0xgarbage', '', '9007199254740992']) assert.throws(() => parseHexOffset(input));
});
