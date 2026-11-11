(() => {
  if (window.CspProjectTheme?.unified) return;
  const root = document.documentElement, system = matchMedia('(prefers-color-scheme: dark)');
  root.dataset.siteShell = 'true';
  let choice = 'light', appearance = 'csp';
  try {
    const saved = localStorage.getItem('csp-project-theme');
    if (['light', 'dark', 'system'].includes(saved)) choice = saved;
    appearance = localStorage.getItem('csp-site-appearance') === 'noi' ? 'noi' : 'csp';
  } catch { /* Settings still work without storage. */ }
  function apply(persist = false) {
    const theme = choice === 'system' ? system.matches ? 'dark' : 'light' : choice;
    root.dataset.theme = theme; root.dataset.colorMode = theme; root.dataset.appearance = appearance;
    const meta = document.querySelector?.('meta[name="theme-color"]');
    if (meta) meta.content = theme === 'dark' ? '#1c2531' : '#ffffff';
    if (persist) try {
      localStorage.setItem('csp-project-theme', choice); localStorage.setItem('csp-code-theme', theme);
      localStorage.setItem('csp-site-appearance', appearance);
    } catch { /* Keep the current session usable. */ }
    document.dispatchEvent(new CustomEvent('csp-project-theme', { detail: choice }));
  }
  window.CspProjectTheme = { unified: true, getChoice: () => choice, getAppearance: () => appearance,
    setChoice(value) { choice = ['light', 'dark', 'system'].includes(value) ? value : 'light'; apply(true); },
    setAppearance(value) { appearance = value === 'noi' ? 'noi' : 'csp'; apply(true); },
  };
  apply();
  system.addEventListener('change', () => { if (choice === 'system') apply(); });
  window.addEventListener('storage', event => {
    if (event.key === 'csp-project-theme') choice = ['light', 'dark', 'system'].includes(event.newValue) ? event.newValue : 'light';
    else if (event.key === 'csp-site-appearance') appearance = event.newValue === 'noi' ? 'noi' : 'csp';
    else return;
    apply();
  });
})();
