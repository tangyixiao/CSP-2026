import { readFileSync } from 'node:fs';
import { renderSiteHeader } from './shared/site-header.js';
import { renderBrandFavicon } from './shared/brand.js';
import { defineConfig } from 'vite';

export default defineConfig({
  base: './',
  plugins: [{ name: 'shared-site-header', transformIndexHtml: { order: 'pre', handler(html) {
    const reader = html.includes('class="app-header" data-site-header');
    if (!reader && !html.includes('class="site-header" data-site-header')) return html;
    const header = renderSiteHeader({ root: '../', active: reader ? 'view' : 'browse', reader });
    const bootstrap = readFileSync(new URL('./shared/theme.js', import.meta.url), 'utf8');
    const favicon = `data:image/svg+xml,${encodeURIComponent(renderBrandFavicon())}`;
    return html.replace(/<header class="(?:app-header|site-header)" data-site-header[^>]*><\/header>/, header).replace('</head>', `<link rel="icon" type="image/svg+xml" href="${favicon}"><script>${bootstrap}</script></head>`);
  } } }],
  // Optional local development only: stream already-published public buckets,
  // avoiding a full archive download in a partial checkout. Every file is still
  // checked against its catalog Git blob by source.js. Never proxy credentials.
  server: process.env.CSP_USE_PUBLISHED_SOURCES === '1' ? {
    proxy: {
      '^/source-packs/[a-f0-9]{3}\\.json': {
        target: 'https://tangyixiao.github.io', changeOrigin: true,
        rewrite: value => `/CSP-2026/code${value}`,
        configure(proxy) { proxy.on('proxyReq', request => { request.removeHeader('authorization'); request.removeHeader('cookie'); }); },
      },
    },
  } : undefined,
  build: { target: 'es2022', chunkSizeWarningLimit: 2200, rollupOptions: { input: { reader: 'index.html', browse: 'browse.html' } } },
});
