import project from '../../project.json' with { type:'json' };

export const DOWNLOAD_MODE_KEY = 'csp-download-mode';
export const DOMESTIC_PROXY = project.downloads.domesticProxy;

export function downloadUrl(original, mode = 'international') {
  const url = new URL(original);
  if (!['https://github.com','https://raw.githubusercontent.com'].includes(url.origin) || url.username || url.password ||
      !url.pathname.startsWith('/tangyixiao/CSP-2026/') || url.hash) {
    throw new Error('Expected a public CSP-2026 GitHub download URL');
  }
  return mode === 'domestic' ? DOMESTIC_PROXY + url.href : url.href;
}

export function savedDownloadMode(storage) {
  if(storage===undefined && typeof window==='undefined')return 'international';
  try { return (storage ?? globalThis.localStorage).getItem(DOWNLOAD_MODE_KEY) === 'domestic' ? 'domestic' : 'international'; }
  catch { return 'international'; }
}
