import test from 'node:test';
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';
import { createStoredZip, contestantFiles, originalFileUrl, downloadBytes, MAX_DOWNLOAD_BYTES } from '../src/downloads.js';
import { downloadUrl, savedDownloadMode } from '../project-site/download-mode.js';
const revision='1'.repeat(40);
const digest=bytes=>createHash('sha1').update(`blob ${bytes.length}\0`).update(bytes).digest('hex');

test('ZIP round trips original binary, empty and Unicode-named files with independent ZIP CRC verification',async()=>{
  const files=[{path:'SH-S01518/crystal/空 格.cpp',bytes:new Uint8Array([0,255,13,10,0,1])},
    {path:'SH-S01518/.cpp',bytes:new Uint8Array()},
    {path:'SH-S01518/nested/subway.cpp#',bytes:new TextEncoder().encode('int main(){}\r\n')}];
  const zipped=new Uint8Array(await createStoredZip(files).arrayBuffer());
  const result=spawnSync(process.platform==='win32'?'python':'python3',['-c',
    'import sys,zipfile,io,json,base64; z=zipfile.ZipFile(io.BytesIO(sys.stdin.buffer.read())); assert z.testzip() is None; print(json.dumps({n:base64.b64encode(z.read(n)).decode() for n in z.namelist()}))'],{input:zipped,encoding:'utf8'});
  assert.equal(result.status,0,result.stderr);
  assert.deepEqual(JSON.parse(result.stdout),Object.fromEntries(files.map(f=>[f.path,Buffer.from(f.bytes).toString('base64')])));
});
test('ZIP rejects traversal, duplicate paths and excessive browser memory allocation',()=>{
  assert.throws(()=>createStoredZip([{path:'../secret',bytes:new Uint8Array()}]),/无效/);
  assert.throws(()=>createStoredZip([{path:'a',bytes:new Uint8Array()},{path:'a',bytes:new Uint8Array()}]),/重复/);
  assert.throws(()=>createStoredZip([{path:'large',bytes:new Uint8Array(MAX_DOWNLOAD_BYTES+1)}]),/64 MiB/);
});
test('contestant directory selection preserves case and nested folders without a neighboring ID',()=>{
  const file={path:'TJ/S/Tj-S00542/crystal/crystal.cpp'};
  const files=[file,{path:'TJ/S/Tj-S00542/nested/hub.cpp'},{path:'TJ/S/TJ-S00542/other.cpp'},
    {path:'TJ/S/Tj-S005420/crystal/crystal.cpp'},{path:'TJ/J/Tj-S00542/a.cpp'}];
  assert.deepEqual(contestantFiles(file,files).map(f=>f.path),[file.path,files[1].path]);
});
test('domestic/international modes only route public downloads from this repository',()=>{
  const direct=`https://github.com/tangyixiao/CSP-2026/raw/${revision}/SH/S/a%20b.cpp`;
  assert.equal(downloadUrl(direct,'international'),direct);
  assert.equal(downloadUrl(direct,'domestic'),'https://gh-proxy.org/'+direct);
  for(const bad of ['http://github.com/tangyixiao/CSP-2026/a','https://evil.example/a',
    'https://token@github.com/tangyixiao/CSP-2026/a','https://github.com/other/repo/a',
    'https://github.com:444/tangyixiao/CSP-2026/a','https://raw.githubusercontent.com/other/repo/a'])assert.throws(()=>downloadUrl(bad,'domestic'));
  assert.equal(savedDownloadMode({getItem(){throw new Error('blocked')}}),'international');
  assert.match(originalFileUrl({path:'SH/S/SH-S01518/空 格.cpp'},revision,'domestic'),/^https:\/\/gh-proxy\.org\/https:\/\/raw\.githubusercontent\.com\/.+\/%E7%A9%BA%20%E6%A0%BC\.cpp$/);
});
test('binary source-named download uses exact archived bytes without text decoding',async t=>{
  const bytes=new Uint8Array([0x89,0x50,0x4e,0x47,0,255,0]),blob=digest(bytes);
  t.mock.method(globalThis,'fetch',async()=>new Response(JSON.stringify({[blob]:Buffer.from(bytes).toString('base64')})));
  assert.deepEqual(await downloadBytes({path:'SH/S/SH-S00952/icon.png.cpp',blob},'2'.repeat(40)),bytes);
});
test('files outside the preview snapshot download through CORS-enabled Raw URLs in either mode',async t=>{
  const bytes=new Uint8Array(2*1024*1024+1);bytes.fill(65);const blob=digest(bytes);
  const file={path:'AH/S/AH-S00871/subway/subway.cpp',blob};
  const requests=[];
  t.mock.method(globalThis,'fetch',async url=>{
    requests.push(String(url));
    if(String(url).includes('source-packs/'))return new Response('{}');
    assert.match(String(url),/^(https:\/\/gh-proxy\.org\/)?https:\/\/raw\.githubusercontent\.com\//);
    return new Response(bytes,{headers:{'content-length':String(bytes.length)}});
  });
  for(const mode of ['international','domestic'])assert.deepEqual(await downloadBytes(file,'3'.repeat(40),mode),bytes);
  assert(requests.some(url=>url.startsWith('https://raw.githubusercontent.com/')));
  assert(requests.some(url=>url.startsWith('https://gh-proxy.org/https://raw.githubusercontent.com/')));
});
test('a Raw fallback with different bytes fails the Git blob check',async t=>{
  t.mock.method(globalThis,'fetch',async url=>String(url).includes('source-packs/')?new Response('{}'):new Response('wrong bytes'));
  await assert.rejects(downloadBytes({path:'AH/S/AH-S00871/subway/subway.cpp',blob:'f'.repeat(40)},'4'.repeat(40),'international'),/摘要校验失败/);
});
