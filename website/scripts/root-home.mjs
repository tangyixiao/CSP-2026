import { renderSiteHeader } from '../shared/site-header.js';
import { renderBrandMark } from '../shared/brand.js';
import { REGIONS } from '../src/regions.js';

export const ROOT_FEATURED_REGIONS = Object.freeze(['ZJ', 'BJ', 'SC', 'SH', 'GD']);
const escape = value => String(value).replace(/[&<>"']/g, character => ({ '&': '&amp;', '<': '&lt;', '>': '&gt;', '"': '&quot;', "'": '&#39;' })[character]);
const number = value => Number.isSafeInteger(value) && value >= 0 ? value.toLocaleString('en-US') : '—';
const browseURL = (province, group = 'all') => `code/browse.html?${new URLSearchParams({ view: 'browse', province, group })}`;

/** Render the real root entry from pinned catalog metadata; no network or blobs. */
export function renderRootHome(template, catalog, { shards = {} } = {}) {
  if (!/^[a-f0-9]{40}$/i.test(catalog.revision || '') || !Array.isArray(catalog.groups) || !catalog.groups.length) throw new Error('A pinned catalog is required for the root home');
  const regions = new Map();
  for (const group of catalog.groups) {
    if (!Object.hasOwn(REGIONS, group.province) || !['J', 'S'].includes(group.group) || !Number.isSafeInteger(group.fileCount) || group.fileCount < 0) throw new Error('Invalid root-home catalog group');
    if (!regions.has(group.province)) regions.set(group.province, []);
    const groups = regions.get(group.province);
    if (groups.some(item => item.group === group.group)) throw new Error('Duplicate root-home catalog group');
    groups.push(group);
  }
  const groupLinks = (code, groups) => groups.slice().sort((a, b) => a.group.localeCompare(b.group)).map(group => `<a href="${escape(browseURL(code, group.group))}">进入 ${group.group} <span aria-hidden="true">→</span></a>`).join('');
  const renderRegion = code => {
    const groups = regions.get(code), { name } = REGIONS[code];
    const knownCounts = groups.every(group => Number.isSafeInteger(group.contestantCount) && group.contestantCount >= 0);
    const directoryCount = knownCounts ? groups.reduce((sum, group) => sum + group.contestantCount, 0) : null;
    return `<article class="region" data-code="${code}"><a class="scene" href="${escape(browseURL(code))}" aria-label="浏览${name}归档"><img src="assets/regions/${code}.webp" width="1280" height="427" alt=""${code === 'ZJ' ? ' fetchpriority="high"' : ' loading="lazy"'} decoding="async"><h2>${name}<span>${code}</span></h2><p>${number(directoryCount)} 份档案</p></a><div class="region-links">${groupLinks(code, groups)}</div></article>`;
  };
  const featured = ROOT_FEATURED_REGIONS.filter(code => regions.has(code));
  const cards = featured.map(renderRegion).join('\n');
  const directory = [...regions.keys()].filter(code => !featured.includes(code)).sort().map(renderRegion).join('\n');
  const exampleFiles = (shards['ZJ-S']?.files || []).filter(file => typeof file.path === 'string' && file.path.startsWith('ZJ/S/ZJ-S00007/mycode/'));
  const preferred = ['pre_hub.cpp', 'pre_mig.cpp', 'crystal.cpp'];
  const example = preferred.flatMap(name => exampleFiles.filter(file => file.path.split('/').at(-1) === name)).slice(0, 3);
  const readerURL = example.length ? `code/?${new URLSearchParams({ left: example[0].path, mode: 'view', focus: '1' })}` : browseURL('ZJ', 'S');
  const tree = example.length ? example.map((file, index) => `${index === example.length - 1 ? '└─' : '├─'} ${escape(file.path.slice('ZJ/S/ZJ-S00007/'.length))}`).join('\n') : '可用文件以当前归档目录为准';
  const replacements = {
    __SITE_HEADER__: renderSiteHeader({ root: './', active: 'home' }),
    __HOME_REGION_CARDS__: cards,
    __HOME_REGION_DIRECTORY__: directory,
    __HOME_REGION_COUNT__: String(regions.size),
    __HOME_GROUP_COUNT__: String(catalog.groups.length),
    __HOME_FILE_COUNT__: number(catalog.totalFiles),
    __HOME_EXAMPLE_TREE__: tree,
    __HOME_EXAMPLE_URL__: escape(readerURL),
    __HOME_REVISION__: escape(catalog.revision),
    __HOME_SHORT_REVISION__: escape(catalog.revision.slice(0, 12)),
  };
  let html = template.replace('<section class="hero" aria-labelledby="home-title">', `<section class="hero brand-banner" aria-labelledby="home-title"><div class="brand-banner-art" aria-hidden="true">${renderBrandMark()}<pre>ZJ/S/ZJ-S00007/\n${tree}</pre></div>`);
  for (const [marker, replacement] of Object.entries(replacements)) {
    if (!html.includes(marker)) throw new Error(`Missing root-home template marker: ${marker}`);
    html = html.replaceAll(marker, replacement);
  }
  return html;
}
