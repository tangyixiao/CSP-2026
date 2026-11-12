import { loadArchiveBytes, validateSource, REPOSITORY } from './source.js';
import { downloadUrl, savedDownloadMode } from '../project-site/download-mode.js';

export const MAX_DOWNLOAD_BYTES = 64 * 1024 * 1024;
const encoder = new TextEncoder();
const table = Uint32Array.from({length:256}, (_,n) => {
  let value=n;
  for(let i=0;i<8;i++) value=(value&1)?0xedb88320^(value>>>1):value>>>1;
  return value>>>0;
});
function crc32(bytes) {
  let value=0xffffffff;
  for(const byte of bytes) value=table[(value^byte)&255]^(value>>>8);
  return (value^0xffffffff)>>>0;
}
function validRelativePath(path) {
  if(typeof path!=='string'||!path||path.startsWith('/')||/[\x00-\x1f\\]/.test(path)||path.split('/').some(p=>!p||p==='.'||p==='..')) {
    throw new Error('下载目录包含无效路径。');
  }
}

/** Store ZIP preserves arbitrary bytes, UTF-8 names, dotfiles and empty files. */
export function createStoredZip(files) {
  if(!files.length||files.length>4096) throw new Error('选手目录文件数量超出打包范围，请使用下载页的地区归档包。');
  const seen=new Set();let total=0,offset=0;
  const local=[],central=[];
  for(const file of files) {
    validRelativePath(file.path);
    if(seen.has(file.path))throw new Error('选手目录存在重复文件路径。');
    seen.add(file.path);
    if(!(file.bytes instanceof Uint8Array))throw new Error('下载内容必须是原始字节。');
    total+=file.bytes.length;
    if(total>MAX_DOWNLOAD_BYTES)throw new Error('选手目录超过 64 MiB 浏览器打包上限，请使用下载页的地区归档包。');
    const name=encoder.encode(file.path),checksum=crc32(file.bytes);
    if(name.length>65535)throw new Error('文件名过长，无法打包。');
    const header=new Uint8Array(30+name.length),view=new DataView(header.buffer);
    view.setUint32(0,0x04034b50,true);view.setUint16(4,20,true);view.setUint16(6,0x800,true);
    view.setUint16(12,0x21,true);view.setUint32(14,checksum,true);
    view.setUint32(18,file.bytes.length,true);view.setUint32(22,file.bytes.length,true);view.setUint16(26,name.length,true);header.set(name,30);
    local.push(header,file.bytes);
    const entry=new Uint8Array(46+name.length),index=new DataView(entry.buffer);
    index.setUint32(0,0x02014b50,true);index.setUint16(4,20,true);index.setUint16(6,20,true);index.setUint16(8,0x800,true);
    index.setUint16(14,0x21,true);index.setUint32(16,checksum,true);index.setUint32(20,file.bytes.length,true);index.setUint32(24,file.bytes.length,true);
    index.setUint16(28,name.length,true);index.setUint32(42,offset,true);entry.set(name,46);central.push(entry);
    offset+=header.length+file.bytes.length;
  }
  const centralSize=central.reduce((sum,value)=>sum+value.length,0);
  const end=new Uint8Array(22),view=new DataView(end.buffer);
  view.setUint32(0,0x06054b50,true);view.setUint16(8,files.length,true);view.setUint16(10,files.length,true);
  view.setUint32(12,centralSize,true);view.setUint32(16,offset,true);
  return new Blob([...local,...central,end],{type:'application/zip'});
}

export function contestantFiles(file, files) {
  const parts=file.path.split('/');
  if(parts.length<4)throw new Error('无法确定选手目录。');
  const prefix=parts.slice(0,3).join('/')+'/';
  return files.filter(item=>item.path.startsWith(prefix)).sort((a,b)=>a.path<b.path?-1:a.path>b.path?1:0);
}

export function originalFileUrl(file, revision, mode='international') {
  validateSource(file.path,revision);
  const encoded=file.path.split('/').map(encodeURIComponent).join('/');
  return downloadUrl(`https://raw.githubusercontent.com/${REPOSITORY}/${revision}/${encoded}`,mode);
}

async function verifyBlob(bytes, expected) {
  const header=encoder.encode(`blob ${bytes.length}\0`),data=new Uint8Array(header.length+bytes.length);
  data.set(header);data.set(bytes,header.length);
  const digest=new Uint8Array(await crypto.subtle.digest('SHA-1',data));
  if([...digest].map(b=>b.toString(16).padStart(2,'0')).join('')!==expected)throw new Error('下载文件的 Git 摘要校验失败，请重新下载；仍失败时请报告文件路径。');
}

export async function downloadBytes(file, revision, mode=savedDownloadMode()) {
  try { return await loadArchiveBytes(file,{revision}); }
  catch(error) {
    if(/校验失败/.test(error.message))throw error;
    const response=await fetch(originalFileUrl(file,revision,mode),{signal:AbortSignal.timeout(30000)});
    if(!response.ok)throw new Error(`原文件下载失败（HTTP ${response.status}），可切换下载模式后重试。`);
    if(Number(response.headers.get('content-length'))>MAX_DOWNLOAD_BYTES) {
      await response.body?.cancel();throw new Error('文件超过 64 MiB，请使用下载页的地区归档包。');
    }
    const chunks=[];let size=0;const reader=response.body.getReader();
    try {
      while(true) {
        const {done,value}=await reader.read();if(done)break;size+=value.length;
        if(size>MAX_DOWNLOAD_BYTES){await reader.cancel();throw new Error('文件超过 64 MiB，请使用下载页的地区归档包。');}
        chunks.push(value);
      }
    } finally { reader.releaseLock(); }
    const bytes=new Uint8Array(size);let offset=0;
    for(const chunk of chunks){bytes.set(chunk,offset);offset+=chunk.length;}
    await verifyBlob(bytes,file.blob);
    return bytes;
  }
}

export function saveBlob(blob, filename) {
  const url=URL.createObjectURL(blob),link=document.createElement('a');
  link.href=url;link.download=filename;link.hidden=true;document.body.append(link);link.click();link.remove();
  setTimeout(()=>URL.revokeObjectURL(url),30000);
}

export async function saveOriginalFile(file,revision,mode=savedDownloadMode()) {
  const bytes=await downloadBytes(file,revision,mode);
  saveBlob(new Blob([bytes],{type:'application/octet-stream'}),file.path.split('/').at(-1));
}

export async function saveContestantDirectory(file, files, revision, mode=savedDownloadMode()) {
  const selected=contestantFiles(file,files);
  if(!selected.length)throw new Error('选手目录中没有可下载的文件。');
  const contents=[];let size=0;
  for(const item of selected) {
    const bytes=await downloadBytes(item,revision,mode);size+=bytes.length;
    if(size>MAX_DOWNLOAD_BYTES)throw new Error('选手目录超过 64 MiB，请使用下载页的地区归档包。');
    contents.push({path:item.path.split('/').slice(2).join('/'),bytes});
  }
  saveBlob(createStoredZip(contents),`${file.path.split('/')[2]}.zip`);
  return contents.length;
}
