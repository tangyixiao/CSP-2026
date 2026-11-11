import test from 'node:test';
import assert from 'node:assert/strict';
import { cp, mkdir, mkdtemp, readFile, readdir, rm, writeFile } from 'node:fs/promises';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { REGIONS } from '../src/regions.js';

const repository = fileURLToPath(new URL('../../', import.meta.url));

test('Pages packaging includes every displayed regional illustration and preserves paper PDF bytes', async () => {
  const scratch = path.join(repository, 'work');
  await mkdir(scratch, { recursive: true });
  const fixture = await mkdtemp(path.join(scratch, 'package-site-test-'));
  try {
    const website = path.join(fixture, 'website');
    await mkdir(path.join(website, 'scripts'), { recursive: true });
    await mkdir(path.join(website, 'src'), { recursive: true });
    for (const entry of ['landing', 'project-site', 'shared', 'src/assets']) {
      await cp(path.join(repository, 'website', entry), path.join(website, entry), { recursive: true });
    }
    for (const entry of ['scripts/package-site.mjs', 'scripts/root-home.mjs', 'src/regions.js', 'src/cases.json']) {
      await cp(path.join(repository, 'website', entry), path.join(website, entry));
    }
    await cp(path.join(repository, 'project.json'), path.join(fixture, 'project.json'));
    const revision = 'a'.repeat(40), blob = 'b'.repeat(40);
    const browser = path.join(website, 'dist');
    await mkdir(path.join(browser, 'catalog'), { recursive: true });
    await mkdir(path.join(browser, 'source-packs'), { recursive: true });
    const groups = Object.keys(REGIONS).flatMap(province => ['J', 'S'].map(group => ({
      key: `${province}-${group}`, province, group, fileCount: 1, contestantCount: 1,
      url: `catalog/${province}-${group}.json`,
    })));
    await writeFile(path.join(browser, 'index.html'), '<!doctype html><title>Reader fixture</title>');
    await writeFile(path.join(browser, 'catalog/index.json'), JSON.stringify({ revision, repository: 'tangyixiao/CSP-2026', groups, totalFiles: 58 }));
    for (const group of groups) {
      await writeFile(path.join(browser, group.url), JSON.stringify({ files: [{ path: `${group.province}/${group.group}/example/example.cpp`, blob }] }));
    }
    await writeFile(path.join(browser, 'source-packs/index.json'), JSON.stringify({
      schemaVersion: 1, revision, expected: 1, selected: 1, available: 1, skipped: 0, missing: 0,
      complete: true, partial: false, selection: 'all', limit: 2 * 1024 * 1024, bucketPrefixLength: 3,
    }));
    const pdf = Buffer.from('%PDF-1.4\n% preserve these exact archive bytes\n');
    await mkdir(path.join(fixture, 'papers/round-2'), { recursive: true });
    await writeFile(path.join(fixture, 'papers/round-2/example.pdf'), pdf);
    await writeFile(path.join(fixture, 'papers/index.html'), '<html><body>__SITE_HEADER__<a href="round-2/example.pdf">PDF</a></body></html>');
    const result = spawnSync(process.execPath, [path.join(website, 'scripts/package-site.mjs')], { cwd: fixture, encoding: 'utf8' });
    assert.equal(result.status, 0, result.stderr || result.stdout);
    const shipped = await readdir(path.join(website, 'site-dist/assets/regions'));
    assert.equal(shipped.filter(name => name.endsWith('.webp')).length, 29);
    for (const code of Object.keys(REGIONS)) assert.ok(shipped.includes(`${code}.webp`), `${code} illustration is shipped`);
    assert.deepEqual(await readFile(path.join(website, 'site-dist/papers/round-2/example.pdf')), pdf);
    const paperHTML = await readFile(path.join(website, 'site-dist/papers/index.html'), 'utf8');
    assert.match(paperHTML, /data-site-header/); assert.match(paperHTML, /href="round-2\/example.pdf"/);
    for (const asset of ['site-shell.css', 'site-shell.js', 'site-header.js', 'theme.js']) assert.ok((await readFile(path.join(website, 'site-dist/assets', asset))).length);
  } finally {
    await rm(fixture, { recursive: true, force: true });
  }
});
