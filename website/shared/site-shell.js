import './theme.js';
import { renderSiteHeader } from './site-header.js';

export function mountSiteShell({ host = document.querySelector('[data-site-header]'), root = host?.dataset.root || './', active = host?.dataset.active || 'home', reader = host?.dataset.reader === 'true' } = {}) {
  if (!host) return null;
  if (!host.classList.contains('site-shell')) {
    const template = document.createElement('template');
    template.innerHTML = renderSiteHeader({ root, active, reader, language: document.documentElement.lang });
    const replacement = template.content.firstElementChild; host.replaceWith(replacement); host = replacement;
  }
  document.documentElement.dataset.siteShell = 'true';
  const toggle = host.querySelector('.shell-menu'), nav = host.querySelector('.shell-navigation'), panel = host.querySelector('details');
  const appearance = host.querySelector('#site-appearance'), color = host.querySelector('#site-color-mode');
  const theme = window.CspProjectTheme;
  function sync() {
    appearance.value = theme.getAppearance(); color.value = theme.getChoice();
    const dark = document.documentElement.dataset.theme === 'dark', button = host.querySelector('#theme-toggle');
    button.textContent = dark ? '☀' : '☾';
    button.setAttribute('aria-label', document.documentElement.lang === 'en' ? dark ? 'Switch to light mode' : 'Switch to dark mode' : dark ? '切换为浅色主题' : '切换为深色主题');
  }
  sync(); document.addEventListener('csp-project-theme', sync);
  appearance.addEventListener('change', () => theme.setAppearance(appearance.value));
  color.addEventListener('change', () => theme.setChoice(color.value));
  host.querySelector('#theme-toggle').addEventListener('click', () => theme.setChoice(document.documentElement.dataset.theme === 'dark' ? 'light' : 'dark'));
  function closeMenu() { host.classList.remove('shell-menu-open'); toggle.setAttribute('aria-expanded', 'false'); }
  toggle.addEventListener('click', () => { const open = !host.classList.contains('shell-menu-open'); host.classList.toggle('shell-menu-open', open); toggle.setAttribute('aria-expanded', String(open)); });
  nav.addEventListener('click', event => { if (event.target.closest('a')) closeMenu(); });
  document.addEventListener('click', event => { if (!host.contains(event.target)) { closeMenu(); panel.open = false; } });
  document.addEventListener('keydown', event => { if (event.key === 'Escape') { const open = host.classList.contains('shell-menu-open') || panel.open; closeMenu(); panel.open = false; if (open) toggle.focus(); } });
  matchMedia('(max-width: 900px)').addEventListener('change', closeMenu);
  for (const control of host.querySelectorAll('select, button')) control.disabled = false;
  host.setAttribute('aria-busy', 'false');
  return { closeMenu };
}
