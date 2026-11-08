import { downloadUrl, DOWNLOAD_MODE_KEY, savedDownloadMode } from './download-mode.js';

const nav = document.querySelector('.main-nav');
const toggle = document.querySelector('.menu-toggle');
if (toggle && nav) {
  toggle.hidden = false;
  const close = () => { nav.dataset.open = 'false'; toggle.setAttribute('aria-expanded', 'false'); };
  toggle.addEventListener('click', () => {
    const open = toggle.getAttribute('aria-expanded') !== 'true';
    toggle.setAttribute('aria-expanded', String(open)); nav.dataset.open = String(open);
  });
  nav.addEventListener('click', close);
  document.addEventListener('keydown', event => {
    if (event.key === 'Escape' && toggle.getAttribute('aria-expanded') === 'true') {
      close(); toggle.focus();
    }
  });
}

const pickers = [...document.querySelectorAll('details.picker')];
for (const picker of pickers) picker.addEventListener('toggle', () => {
  if (picker.open) for (const other of pickers) if (other !== picker) other.open = false;
});
document.addEventListener('click', event => {
  for (const picker of pickers) if (!picker.contains(event.target)) picker.open = false;
});
document.addEventListener('keydown', event => {
  const picker = pickers.find(item => item.open);
  if (event.key !== 'Escape' || !picker) return;
  picker.open = false; picker.querySelector('summary').focus(); event.preventDefault();
}, true);
const theme = window.CspProjectTheme;
function updateTheme() {
  for (const button of document.querySelectorAll('[data-theme-choice]')) {
    const active = button.dataset.themeChoice === theme.getChoice();
    button.setAttribute('aria-pressed', String(active));
    if (active) document.querySelector('.theme-current').textContent = button.textContent.trim();
  }
}
for (const button of document.querySelectorAll('[data-theme-choice]')) button.addEventListener('click', () => {
  theme.setChoice(button.dataset.themeChoice); button.closest('details').open = false;
  button.closest('details').querySelector('summary').focus();
});
document.addEventListener('csp-project-theme', updateTheme);
if (theme) updateTheme();

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
