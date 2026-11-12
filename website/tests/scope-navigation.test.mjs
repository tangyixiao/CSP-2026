import test from 'node:test';
import assert from 'node:assert/strict';
import * as navigation from '../src/scope-navigation.js';
import { browseContestants, parseBrowseRoute } from '../src/archive-browse.js';

const codes=['AH','BJ','ZJ'];
const file=(path,problem='hub',size=1)=>({path,name:path.split('/').at(-1),contestant:path.split('/')[2].trim().toUpperCase(),problem,size});
const rows=[file('ZJ/S/ Zj-S1 /crystal/a.cpp','crystal'),file('ZJ/S/ Zj-S1 /hub/needle[x].cpp'),file('ZJ/S/ Zj-S1 /notes.txt',''),file('BJ/S/BJ-S2/hub/b.cpp')];

test('search identifies matching files without losing full folder contents or metrics',()=>{
 const item=browseContestants(rows,{query:'needle[x].cpp'})[0];
 assert.equal(item.files.length,3);assert.equal(item.totalBytes,3);
 assert.deepEqual(item.matchedFiles.map(f=>f.path),[rows[1].path]);
 assert.deepEqual(navigation.previewFolderFiles(item,{query:'needle[x].cpp'}).map(f=>f.path),[rows[1].path]);
 assert.equal(navigation.previewFolderFiles(item,{}).length,3);
});

test('focused file URLs preserve exact raw names and cannot target another directory or traversal',()=>{
 const directory='ZJ/S/ Zj-S1 ',path=rows[1].path;
 const query=new URLSearchParams({view:'contestant',directory,file:path});
 assert.equal(parseBrowseRoute(query,codes).file,path);
 for(const bad of ['ZJ/S/ Zj-S1 extra/a.cpp','BJ/S/BJ-S2/a.cpp','ZJ/S/ Zj-S1 /../a.cpp']){
  query.set('file',bad);assert.equal(parseBrowseRoute(query,codes).file,'');
 }
});

test('literal highlight segments preserve text and never treat filename syntax as a regular expression',()=>{
 for(const [value,query]of [['needle[x].cpp','[x]'],['<script>中文.cpp','<script>'],['ABC.cpp','abc'],['İ😀.cpp','i'],['anything','']]){
  const parts=navigation.highlightSegments(value,query);assert.equal(parts.map(p=>p.text).join(''),value);
 }
 assert.deepEqual(navigation.highlightSegments('needle[x].cpp','[x]').filter(p=>p.match).map(p=>p.text),['[x]']);
});

test('reader scopes round trip national, single and multiple selections while retaining A/B and return links',()=>{
 for(const scope of [{scope:'all',province:'',provinces:'',group:'all'},{scope:'single',province:'ZJ',provinces:'',group:'S'},{scope:'multiple',province:'',provinces:'BJ,ZJ',group:'J'}]){
  const url=navigation.writeReaderScope(new URLSearchParams({left:rows[0].path,right:rows[3].path,returnTo:'/code/browse.html?scope=all'}),scope,{search:'needle[x]',problem:'',page:2});
  assert.equal(url.get('left'),rows[0].path);assert.equal(url.get('right'),rows[3].path);assert.equal(url.get('returnTo'),'/code/browse.html?scope=all');
  const parsed=navigation.readReaderScope(url,codes);
  for(const key of ['scope','province','provinces','group'])assert.equal(parsed[key],scope[key]);
  assert.equal(parsed.search,'needle[x]');assert.equal(parsed.page,2);
 }
 const legacy=navigation.readReaderScope('?province=BJ&group=J&search=abc',codes);
 assert.equal(legacy.scope,'single');assert.equal(legacy.province,'BJ');
 const inherited=navigation.readReaderScope('?left=ZJ/S/raw/a.cpp',codes,{province:'ZJ',group:'S',search:'raw'});
 assert.equal(inherited.scope,'single');assert.equal(inherited.search,'raw');
 assert.equal(navigation.readReaderScope('?scope=multiple&provinces=XX',codes).provinces,'');
  assert.equal(navigation.readReaderScope('?scope=all&group=J&problem=hub',codes).problem,'');
});

test('scoped random choices stay uniform over folders and select only query-compatible contest tasks',()=>{
 assert.equal(navigation.pickScopePerson(rows,{query:'needle'},null,()=>0).id,'ZJ/S/ Zj-S1 ');
 assert.equal(navigation.pickScopePerson(rows,{},'ZJ/S/ Zj-S1 ',()=>0).id,'BJ/S/BJ-S2');
 assert.equal(navigation.pickScopeProblem(rows,{query:'needle'},null,()=>0),'hub');
 assert.equal(navigation.pickScopeProblem(rows,{query:'notes.txt'},null,()=>0),null);
 assert.equal(navigation.pickScopePerson(rows,{query:'absent'},null,()=>0),null);
});

test('compact reader entries hydrate only the selected exact path; complete metadata is reused',async()=>{
 let reads=0;const complete={...rows[1],blob:'a'.repeat(40)};
 assert.equal(await navigation.resolveReaderFile(complete,()=>{throw Error('unneeded');}),complete);
 assert.deepEqual(await navigation.resolveReaderFile(rows[1],async path=>{reads++;assert.equal(path,rows[1].path);return complete;}),complete);
 assert.equal(reads,1);
 await assert.rejects(navigation.resolveReaderFile(rows[1],async()=>({...complete,path:rows[0].path})),/文件/);
});
