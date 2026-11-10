(() => {
  const root = document.documentElement;
  const system = window.matchMedia('(prefers-color-scheme: dark)');
  let appearance = 'csp', choice = 'light';
  try {
    appearance = localStorage.getItem('csp-site-appearance') === 'noi' ? 'noi' : 'csp';
    const saved = localStorage.getItem('csp-project-theme');
    if (['light', 'dark', 'system'].includes(saved)) choice = saved;
  } catch { /* Current choices work without browser storage. */ }
  function apply() {
    root.dataset.appearance = appearance;
    root.dataset.theme = choice === 'system' ? (system.matches ? 'dark' : 'light') : choice;
    const meta = document.querySelector('meta[name="theme-color"]');
    if (meta) meta.content = root.dataset.theme === 'dark' ? '#182435' : '#ffffff';
    const label = document.getElementById('appearance-label');
    if (label) label.textContent = appearance === 'noi' ? 'NOI 主题' : 'CSP 主题';
  }
  apply();
  system.addEventListener('change', () => { if (choice === 'system') apply(); });
  window.addEventListener('storage', event => {
    if (event.key === 'csp-site-appearance') appearance = event.newValue === 'noi' ? 'noi' : 'csp';
    else if (event.key === 'csp-project-theme') choice = ['light', 'dark', 'system'].includes(event.newValue) ? event.newValue : 'light';
    else return;
    apply();
    const appearanceSelect = document.getElementById('home-appearance');
    const modeSelect = document.getElementById('home-color-mode');
    if (appearanceSelect) appearanceSelect.value = appearance;
    if (modeSelect) modeSelect.value = choice;
  });
  document.addEventListener('DOMContentLoaded', () => {
    const appearanceSelect = document.getElementById('home-appearance');
    const modeSelect = document.getElementById('home-color-mode');
    appearanceSelect.value = appearance;
    modeSelect.value = choice;
    appearanceSelect.addEventListener('change', () => {
      appearance = appearanceSelect.value === 'noi' ? 'noi' : 'csp';
      try { localStorage.setItem('csp-site-appearance', appearance); } catch { /* Optional storage. */ }
      apply();
    });
    modeSelect.addEventListener('change', () => {
      choice = ['light', 'dark', 'system'].includes(modeSelect.value) ? modeSelect.value : 'light';
      try { localStorage.setItem('csp-project-theme', choice); } catch { /* Optional storage. */ }
      apply();
    });
    const toggle = document.querySelector('.hamburger');
    const navigation = document.getElementById('home-navigation');
    const panel = document.querySelector('.appearance');
    function closeMenu() {
      root.dataset.menuOpen = 'false';
      toggle.setAttribute('aria-expanded', 'false');
      toggle.setAttribute('aria-label', '打开导航菜单');
    }
    closeMenu();
    toggle.addEventListener('click', () => {
      const open = root.dataset.menuOpen !== 'true';
      root.dataset.menuOpen = String(open);
      toggle.setAttribute('aria-expanded', String(open));
      toggle.setAttribute('aria-label', open ? '关闭导航菜单' : '打开导航菜单');
    });
    navigation.addEventListener('click', event => { if (event.target.closest('a')) closeMenu(); });
    document.addEventListener('click', event => {
      if (!panel.contains(event.target)) panel.open = false;
      if (root.dataset.menuOpen === 'true' && !navigation.contains(event.target) && !toggle.contains(event.target)) closeMenu();
    });
    document.addEventListener('keydown', event => {
      if (event.key !== 'Escape') return;
      const menuWasOpen = root.dataset.menuOpen === 'true';
      closeMenu(); panel.open = false;
      if (menuWasOpen) toggle.focus();
    });
    window.matchMedia('(max-width: 700px)').addEventListener('change', closeMenu);
    apply();
  });
})();
