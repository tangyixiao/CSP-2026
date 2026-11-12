import { renderBrandMark } from './brand.js';

const navigation = [
  ['home', '', '首页', 'Home'], ['browse', 'code/browse.html?view=browse', '浏览', 'Browse'],
  ['discover', 'code/browse.html?view=discover', '发现', 'Discover'], ['view', 'code/?mode=view', '阅读', 'Read'],
  ['compare', 'code/?mode=split', '比较', 'Compare'], ['sources', 'code/browse.html?view=sources', '来源', 'Sources'],
  ['papers', 'papers/', '试题', 'Papers'], ['downloads', 'preview/downloads.html', '下载', 'Downloads'], ['docs', 'docs.html', '文档', 'Docs'],
];

export function renderSiteHeader({ root = './', active = 'home', language = 'zh-CN', reader = false } = {}) {
  if (!/^(?:\.{1,2}\/)+$/.test(root)) throw new Error('Invalid project root');
  const en = language === 'en', label = (zh, english) => en ? english : zh;
  return `<header class="site-shell${reader ? ' app-header' : ''}" data-site-header aria-busy="true" data-root="${root}" data-active="${active}" data-reader="${reader}">
  <div class="shell-masthead"><div class="shell-inner">
    <button id="reader-nav-toggle" class="shell-menu" type="button" disabled aria-label="${label('打开导航菜单', 'Open navigation')}" aria-controls="reader-main-nav" aria-expanded="false">☰</button>
    <a class="shell-brand brand" href="${root}" aria-label="CSP 2026 ${label('首页', 'Home')}">${renderBrandMark()}<span class="shell-brand-copy"><strong>${label('全国代码归档', 'Code archive')}</strong><b>2026</b></span></a>
    <nav id="reader-main-nav" class="shell-navigation main-nav" aria-label="${label('主导航', 'Main navigation')}">${navigation.map(([key, href, zh, english]) => `<a href="${root}${href}" class="nav-${key}" data-view="${key}"${reader && ['view', 'compare'].includes(key) ? ` data-reader-nav="${key}"` : ''}${active === key ? ' aria-current="page"' : ''}>${label(zh, english)}</a>`).join('')}</nav>
    <details class="shell-appearance appearance-menu"><summary aria-label="${label('外观设置', 'Appearance')}">${label('外观', 'Appearance')} ◐</summary><div class="shell-preferences">
      <label>${label('站点主题', 'Site theme')}<select disabled id="site-appearance" aria-label="${label('站点主题', 'Site theme')}"><option value="csp">CSP</option><option value="noi">NOI ${label('参考', 'reference')}</option></select></label>
      <label>${label('明暗', 'Color mode')}<select disabled id="site-color-mode" aria-label="${label('明暗', 'Color mode')}"><option value="light">${label('浅色', 'Light')}</option><option value="dark">${label('深色', 'Dark')}</option><option value="system">${label('跟随系统', 'System')}</option></select></label>
    </div></details>
    <button id="theme-toggle" class="shell-theme" type="button" disabled aria-label="${label('切换深浅色', 'Toggle color mode')}" title="${label('切换深浅色', 'Toggle color mode')}">◐</button>
  </div></div></header>`;
}
