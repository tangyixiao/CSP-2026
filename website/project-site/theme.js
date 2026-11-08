(() => {
  document.documentElement.classList.add('js');
  const key = 'csp-project-theme';
  const system = matchMedia('(prefers-color-scheme: dark)');
  let choice = 'light';
  try { choice = localStorage.getItem(key) || 'light'; } catch { /* storage is optional */ }
  if (!['light', 'dark', 'system'].includes(choice)) choice = 'light';
  function apply(value) {
    choice = value;
    document.documentElement.dataset.theme = value === 'system' ? (system.matches ? 'dark' : 'light') : value;
    try {
      localStorage.setItem(key, value);
      localStorage.setItem('csp-code-theme',document.documentElement.dataset.theme);
    } catch { /* current page remains usable */ }
    document.dispatchEvent(new CustomEvent('csp-project-theme', { detail: value }));
  }
  apply(choice);
  system.addEventListener('change', () => { if (choice === 'system') apply(choice); });
  window.CspProjectTheme = { getChoice: () => choice, setChoice: apply };
})();
