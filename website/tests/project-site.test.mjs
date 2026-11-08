import test from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
import { renderProjectPage,provinceFilename } from '../project-site/render.mjs';
import { buildCatalog } from '../scripts/generate-catalog.mjs';
const catalog={revision:'a'.repeat(40),groups:[{province:'SH',group:'J'},{province:'SH',group:'S'},{province:'CQ',group:'S'}]};

test('all project pages have matching locale navigation, native links and theme choices',()=>{
  for(const language of ['zh-CN','en'])for(const page of ['index','features','downloads','community']){
    const html=renderProjectPage(page,language,{catalog});
    assert.match(html,new RegExp(`<html lang="${language}"`));
    assert.match(html,new RegExp(`href="${language==='en'?'../':'en/'}${page}\\.html"`));
    for(const mode of ['light','dark','system'])assert(html.includes(`data-theme-choice="${mode}"`));
    assert(html.includes('aria-current="page"'));assert(html.includes('id="main"'));
    assert(!html.includes('OJ NEXUS'));assert(!html.includes('Android'));assert(!/href="#"/.test(html));
  }
});
test('downloads expose one real ZIP per region and original URLs for both modes',()=>{
  const html=renderProjectPage('downloads','zh-CN',{catalog});
  assert.equal((html.match(/<li data-province=/g)||[]).length,2);
  assert(html.includes(provinceFilename('SH')));assert(html.includes(provinceFilename('CQ')));
  assert(html.includes('data-download-mode="domestic"'));assert(html.includes('data-download-mode="international"'));
  assert(html.includes('/SHA256SUMS'));assert(html.includes('1,505'));assert(html.includes('SH-S01518'));
  assert.throws(()=>provinceFilename('../SH'));
});
test('complete contestant downloads retain files excluded from source previews',()=>{
  const entries=[
    {mode:'100644',type:'blob',blob:'a'.repeat(40),path:'SH/S/SH-S01518/crystal/crystal.cpp'},
    {mode:'100644',type:'blob',blob:'b'.repeat(40),path:'SH/S/SH-S01518/original.bin'},
    {mode:'100644',type:'blob',blob:'c'.repeat(40),path:'SH/S/archives/original.zip'},
  ];
  const {index,shards}=buildCatalog(entries,'a'.repeat(40));
  assert.equal(shards['SH-S'].files.length,1);assert.equal(shards['SH-S'].extraFiles.length,1);
  assert.equal(shards['SH-S'].extraFiles[0].path,'SH/S/SH-S01518/original.bin');
  assert.equal(index.groups[0].extraFileCount,1);
});
test('preview packaging keeps the formal landing page and complete snapshot checks',async()=>{
  const script=await readFile(new URL('../scripts/package-site.mjs',import.meta.url),'utf8');
  assert(script.includes("writeProjectPreview(path.join(outputRoot,'preview')"));
  assert(script.includes("writeFileSync(path.join(outputRoot, 'index.html'), pinRevision(landingHtml))"));
  assert(script.includes('partial builds cannot be packaged'));
});
