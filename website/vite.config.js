import { defineConfig } from 'vite';

export default defineConfig({
  base: './',
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
