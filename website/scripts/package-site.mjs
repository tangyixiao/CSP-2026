import { cpSync, existsSync, lstatSync, mkdirSync, readFileSync, readdirSync, rmSync, writeFileSync } from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';

const websiteRoot = path.resolve(fileURLToPath(new URL('../', import.meta.url)));
const landingRoot = path.join(websiteRoot, 'landing');
const browserRoot = path.join(websiteRoot, 'dist');
const outputRoot = path.join(websiteRoot, 'site-dist');
const landingRevision = '18973f751ccddfa941150d2a3480cf6ecc5a29ac';

// This is the only directory this script may remove. Never take it from input.
if (path.dirname(outputRoot) !== websiteRoot || path.basename(outputRoot) !== 'site-dist') {
  throw new Error('Unexpected site output directory');
}
if (existsSync(outputRoot) && lstatSync(outputRoot).isSymbolicLink()) {
  throw new Error('Refusing to replace a symbolic link at the site output directory');
}

function assertPlainDirectory(directory) {
  if (!lstatSync(directory).isDirectory() || lstatSync(directory).isSymbolicLink()) {
    throw new Error(`Expected a regular directory: ${directory}`);
  }
  for (const entry of readdirSync(directory, { withFileTypes: true })) {
    if (entry.isSymbolicLink()) throw new Error(`Symbolic links cannot be packaged: ${entry.name}`);
    if (entry.isDirectory()) assertPlainDirectory(path.join(directory, entry.name));
  }
}

function escapeHtml(value) {
  return String(value).replace(/[&<>"']/g, character => ({
    '&': '&amp;', '<': '&lt;', '>': '&gt;', '"': '&quot;', "'": '&#39;',
  })[character]);
}

function replaceRequired(text, pattern, replacement, description) {
  if (!pattern.test(text)) throw new Error(`Missing ${description} in the landing template`);
  return text.replace(pattern, replacement);
}

assertPlainDirectory(landingRoot);
assertPlainDirectory(browserRoot);
const catalog = JSON.parse(readFileSync(path.join(browserRoot, 'catalog', 'index.json'), 'utf8'));
if (!/^[a-f0-9]{40}$/i.test(catalog.revision)) throw new Error('Catalog revision must be a full Git commit');
if (!/^[\w.-]+\/[\w.-]+$/.test(catalog.repository)) throw new Error('Catalog repository is invalid');
if (!Array.isArray(catalog.groups) || catalog.groups.length === 0) throw new Error('Catalog groups are missing');

const sourcePacks = JSON.parse(readFileSync(path.join(browserRoot, 'source-packs', 'index.json'), 'utf8'));
for (const field of ['expected', 'selected', 'available', 'skipped', 'missing']) {
  if (!Number.isSafeInteger(sourcePacks[field]) || sourcePacks[field] < 0) {
    throw new Error(`Source snapshot ${field} must be a nonnegative integer`);
  }
}
if (sourcePacks.revision !== catalog.revision || sourcePacks.schemaVersion !== 1 ||
    sourcePacks.complete !== true || sourcePacks.partial !== false || sourcePacks.selection !== 'all' ||
    sourcePacks.missing !== 0 || sourcePacks.selected !== sourcePacks.expected ||
    sourcePacks.available + sourcePacks.skipped !== sourcePacks.expected ||
    sourcePacks.limit !== 2 * 1024 * 1024 || sourcePacks.bucketPrefixLength !== 3) {
  throw new Error('A complete same-origin source snapshot for the catalog revision is required; partial builds cannot be packaged');
}
const catalogBlobs = new Set();
for (const group of catalog.groups) {
  if (!/^catalog\/[A-Z]{2}-[JS]\.json$/.test(group.url)) throw new Error('Invalid catalog shard path');
  const shard = JSON.parse(readFileSync(path.join(browserRoot, group.url), 'utf8'));
  for (const file of shard.files) {
    if (!/^[a-f0-9]{40}$/i.test(file.blob)) throw new Error('Invalid catalog source blob ID');
    catalogBlobs.add(file.blob);
  }
}
if (catalogBlobs.size !== sourcePacks.expected) {
  throw new Error('Source snapshot expected count does not match the catalog unique blob count');
}

const provinces = new Map();
for (const group of catalog.groups) {
  if (!/^[A-Z]{2}$/.test(group.province) || !['J', 'S'].includes(group.group)) {
    throw new Error('Catalog contains an invalid province or contest group');
  }
  const groups = provinces.get(group.province) ?? new Set();
  groups.add(group.group);
  provinces.set(group.province, groups);
}
const sortedProvinces = [...provinces].sort(([left], [right]) => left.localeCompare(right));
const sourceBase = `https://github.com/${catalog.repository}/tree/${catalog.revision}`;
const directories = sortedProvinces.map(([province, groups]) =>
  `<li><a href="${sourceBase}/${province}"><strong>${province}</strong><span class="file-type">${[...groups].sort().join(' / ')}</span><span aria-hidden="true">↗</span></a></li>`
).join('');
const tableRows = sortedProvinces.map(([province, groups]) =>
  `<tr><td>${province}</td>${['J', 'S'].map(group => groups.has(group)
    ? `<td><a href="${sourceBase}/${province}/${group}">${province}/${group}</a></td>`
    : '<td>—</td>').join('')}</tr>`
).join('\n');

let landingHtml = readFileSync(path.join(landingRoot, 'index.html'), 'utf8');
landingHtml = replaceRequired(landingHtml, /<ul class="directory-list" data-current-provinces>[\s\S]*?<\/ul>/,
  `<ul class="directory-list" data-current-provinces>${directories}</ul>`, 'province directory list');
let documentationHtml = readFileSync(path.join(landingRoot, 'docs.html'), 'utf8');
documentationHtml = replaceRequired(documentationHtml, /<tbody data-current-province-table>[\s\S]*?<\/tbody>/,
  `<tbody data-current-province-table>${tableRows}</tbody>`, 'province documentation table');
function pinRevision(html) {
  return html.replaceAll('__CATALOG_REVISION__', escapeHtml(catalog.revision))
    .replaceAll('__CATALOG_SHORT_REVISION__', escapeHtml(catalog.revision.slice(0, 12)));
}

// Sources and catalog are validated before the old generated output is replaced.
rmSync(outputRoot, { recursive: true, force: true });
mkdirSync(outputRoot, { recursive: true });
cpSync(landingRoot, outputRoot, { recursive: true });
cpSync(browserRoot, path.join(outputRoot, 'code'), { recursive: true });
writeFileSync(path.join(outputRoot, 'index.html'), pinRevision(landingHtml));
writeFileSync(path.join(outputRoot, 'docs.html'), pinRevision(documentationHtml));
writeFileSync(path.join(outputRoot, '.nojekyll'), '');
writeFileSync(path.join(outputRoot, 'source-receipt.json'), JSON.stringify({
  repository: catalog.repository,
  sourceCommit: catalog.revision,
  catalogRevision: catalog.revision,
  sourceRef: process.env.GITHUB_REF ?? null,
  generatedAt: new Date().toISOString(),
  totalFiles: catalog.totalFiles,
  totalContestants: catalog.totalContestants,
  provinceCount: sortedProvinces.length,
  groupCount: catalog.groups.length,
  legacyLanding: { branch: 'project-pages', revision: landingRevision },
  sourceSnapshots: {
    revision: sourcePacks.revision,
    expectedBlobs: sourcePacks.expected,
    availableBlobs: sourcePacks.available,
    oversizedBlobs: sourcePacks.skipped,
    missingBlobs: sourcePacks.missing,
    complete: sourcePacks.complete,
    limit: sourcePacks.limit,
  },
  paths: { landing: '/', documentation: 'docs.html', codeBrowser: 'code/' },
}, null, 2) + '\n');

console.log(`Packaged ${sortedProvinces.length} provinces and ${catalog.groups.length} groups at ${catalog.revision}`);
console.log(`GitHub Pages artifact: ${outputRoot}`);
