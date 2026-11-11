import { hexPage } from './hex-view.js';
export const REPOSITORY = 'tangyixiao/CSP-2026';
export const MAX_SOURCE_BYTES = 2 * 1024 * 1024;
export const MAX_SOURCE_PACK_BYTES = 32 * 1024 * 1024;
const sourcePacks = new Map();
let cachedPackBytes = 0;

export function validateSource(path, revision) {
  if (!/^[a-f0-9]{40}$/i.test(revision || '')) throw new Error('源码版本无效，请刷新目录。');
  if (typeof path !== 'string' || !/^[A-Z]{2}\/[JS]\//.test(path) ||
      path.split('/').some(part => !part || part === '..' || part === '.') || /[\x00-\x1f\\]/.test(path)) {
    throw new Error('源码路径无效，请从目录中选择文件。');
  }
}

export function githubUrl(path, revision) {
  validateSource(path, revision);
  return `https://github.com/${REPOSITORY}/blob/${revision}/${path.split('/').map(encodeURIComponent).join('/')}`;
}

async function readLimited(stream, limit = MAX_SOURCE_BYTES, message = '文件超过 2 MiB 预览上限，请在 GitHub 查看或下载原文件。') {
  const reader = stream.getReader();
  const chunks = [];
  let length = 0;
  try {
    while (true) {
      const { value, done } = await reader.read();
      if (done) break;
      length += value.length;
      if (length > limit) {
        await reader.cancel();
        throw new Error(message);
      }
      chunks.push(value);
    }
  } finally {
    reader.releaseLock();
  }
  const result = new Uint8Array(length);
  let offset = 0;
  for (const chunk of chunks) { result.set(chunk, offset); offset += chunk.length; }
  return result;
}

export function decodeSource(bytes) {
  let text, encoding;
  if (bytes[0] === 0xff && bytes[1] === 0xfe) {
    text = new TextDecoder('utf-16le', { fatal: true }).decode(bytes); encoding = 'UTF-16LE';
  } else if (bytes[0] === 0xfe && bytes[1] === 0xff) {
    text = new TextDecoder('utf-16be', { fatal: true }).decode(bytes); encoding = 'UTF-16BE';
  } else {
    try {
      text = new TextDecoder('utf-8', { fatal: true }).decode(bytes); encoding = 'UTF-8';
    } catch {
      text = new TextDecoder('gb18030', { fatal: true }).decode(bytes); encoding = 'GB18030（自动识别）';
    }
  }
  const controls = text.match(/[\x00-\x08\x0b\x0c\x0e-\x1f]/g)?.length || 0;
  if (text.includes('\0') || controls > Math.max(2, text.length * 0.02)) {
    throw new Error('文件含二进制内容，无法作为源码预览。请查看原文件。');
  }
  return { text, encoding };
}

export function languageFor(path) {
  const name = path.toLowerCase().replace(/(?:\.gz|\.bak|~)+$/g, '');
  if (/\.(?:cpp|c|cc|cxx|c\+\+|h|hpp|hxx)$/.test(name)) return 'cpp';
  if (/\.(?:pas|pp)$/.test(name)) return 'pascal';
  if (/\.py$/.test(name)) return 'python';
  if (/\.java$/.test(name)) return 'java';
  return 'plaintext';
}

export async function hashBytes(bytes) {
  const digest = await crypto.subtle.digest('SHA-256', bytes);
  return Array.from(new Uint8Array(digest), byte => byte.toString(16).padStart(2, '0')).join('');
}

export async function loadArchiveBytes(file, { revision, signal } = {}) {
  validateSource(file.path, revision);
  if (!/^[a-f0-9]{40}$/i.test(file.blob || '')) throw new Error('源码摘要无效，请刷新目录。');
  const key = file.blob.slice(0, 3);
  let cached = sourcePacks.get(`${revision}/${key}`);
  if (!cached) {
    const base = import.meta.env?.BASE_URL || './';
    const response = await fetch(`${base}source-packs/${key}.json?v=${revision}`, { signal });
    if (!response.ok) throw new Error(`源码快照读取失败（HTTP ${response.status}），请重试或打开原文件。`);
    if (Number(response.headers.get('content-length')) > MAX_SOURCE_PACK_BYTES) {
      await response.body?.cancel(); throw new Error('源码分片超过读取上限，请打开 GitHub 原文件。');
    }
    const packBytes = response.body ? await readLimited(response.body, MAX_SOURCE_PACK_BYTES, '源码分片超过读取上限，请打开 GitHub 原文件。') : new Uint8Array(await response.arrayBuffer());
    if (packBytes.length > MAX_SOURCE_PACK_BYTES) throw new Error('源码分片超过读取上限。');
    const pack = JSON.parse(new TextDecoder().decode(packBytes));
    if (typeof pack !== 'object' || pack === null || Array.isArray(pack)) throw new Error('源码快照格式错误，请刷新。');
    cached = { pack, size: packBytes.length };
    if (cached.size <= 16 * 1024 * 1024) {
      const previous = sourcePacks.get(`${revision}/${key}`);
      if (previous) cachedPackBytes -= previous.size;
      sourcePacks.set(`${revision}/${key}`, cached); cachedPackBytes += cached.size;
      while (sourcePacks.size > 8 || cachedPackBytes > 16 * 1024 * 1024) {
        const oldest = sourcePacks.keys().next().value;
        cachedPackBytes -= sourcePacks.get(oldest).size; sourcePacks.delete(oldest);
      }
    }
  }
  signal?.throwIfAborted();
  const encoded = cached.pack[file.blob];
  if (typeof encoded !== 'string') throw new Error('此文件超过 2 MiB 或未纳入源码快照，请在 GitHub 查看原文件。');
  if (encoded.length > Math.ceil(MAX_SOURCE_BYTES / 3) * 4) throw new Error('文件超过 2 MiB 预览上限。');
  const archiveBytes = Uint8Array.from(atob(encoded), character => character.charCodeAt(0));
  if (archiveBytes.length > MAX_SOURCE_BYTES) throw new Error('文件超过 2 MiB 预览上限。');
  const header = new TextEncoder().encode(`blob ${archiveBytes.length}\0`);
  const blobInput = new Uint8Array(header.length + archiveBytes.length);
  blobInput.set(header); blobInput.set(archiveBytes, header.length);
  const blobHash = Array.from(new Uint8Array(await crypto.subtle.digest('SHA-1', blobInput)), byte => byte.toString(16).padStart(2, '0')).join('');
  if (blobHash !== file.blob.toLowerCase()) {
    const invalid = sourcePacks.get(`${revision}/${key}`);
    if (invalid) cachedPackBytes -= invalid.size;
    sourcePacks.delete(`${revision}/${key}`);
    throw new Error('源码快照的 Git 摘要校验失败，请刷新重试。');
  }
  return archiveBytes;
}

export async function loadSource(file, { revision, signal } = {}) {
  const archiveBytes = await loadArchiveBytes(file, { revision, signal });
  let bytes = archiveBytes;
  let archiveHex = false, previewNote = '';
  if (archiveBytes[0] === 0x1f && archiveBytes[1] === 0x8b) {
    try {
      if (typeof DecompressionStream === 'undefined') throw new Error('此浏览器不支持解压');
      bytes = await readLimited(new Blob([archiveBytes]).stream().pipeThrough(new DecompressionStream('gzip')));
    } catch (error) {
      signal?.throwIfAborted();
      archiveHex = true; previewNote = `无法展开压缩内容（${error.message}），显示归档原始字节。`;
    }
  }
  signal?.throwIfAborted();
  let decoded;
  try { if (archiveHex) throw new Error(); decoded = { ...decodeSource(bytes), viewFormat: 'text' }; }
  catch { decoded = { ...hexPage(bytes), encoding: '二进制（十六进制）', viewFormat: 'hex' }; }
  const [sha256, contentSha256] = await Promise.all([
    hashBytes(archiveBytes), archiveBytes === bytes ? hashBytes(archiveBytes) : hashBytes(bytes),
  ]);
  signal?.throwIfAborted();
  return { ...decoded, previewNote, bytes, byteLength: bytes.length, archiveByteLength: archiveBytes.length,
    sha256, contentSha256, compressed: archiveBytes !== bytes, language: decoded.viewFormat === 'hex' ? 'plaintext' : file.language || languageFor(file.path) };
}
