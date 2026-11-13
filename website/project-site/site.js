import { mountSiteShell } from './site-shell.js';
import { downloadUrl, DOWNLOAD_MODE_KEY, savedDownloadMode } from './download-mode.js';
mountSiteShell();

function setMode(mode) {
  const selected = mode === 'domestic' ? 'domestic' : 'international';
  try { localStorage.setItem(DOWNLOAD_MODE_KEY, selected); } catch { /* links still update */ }
  for (const link of document.querySelectorAll('[data-download-original]')) {
    link.href = downloadUrl(link.dataset.downloadOriginal, selected);
  }
  for (const button of document.querySelectorAll('[data-download-mode]')) {
    button.setAttribute('aria-pressed', String(button.dataset.downloadMode === selected));
  }
  for (const note of document.querySelectorAll('[data-mode-note]')) note.hidden = note.dataset.modeNote !== selected;
}
for (const button of document.querySelectorAll('[data-download-mode]')) button.addEventListener('click', () => setMode(button.dataset.downloadMode));
setMode(savedDownloadMode());

const provinceSearch = document.querySelector('#province-search');
provinceSearch?.addEventListener('input', () => {
  const query = provinceSearch.value.trim().toLocaleLowerCase();
  let visible = 0;
  for (const row of document.querySelectorAll('[data-province]')) {
    row.hidden = !row.dataset.province.toLocaleLowerCase().includes(query);
    if (!row.hidden) visible++;
  }
  document.querySelector('#province-empty').hidden = visible !== 0;
});
