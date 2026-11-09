import { readFile, writeFile } from 'node:fs/promises';
import { resolve } from 'node:path';

const validSize = value => Number.isSafeInteger(value) && value >= 0;
const groupURL = /^catalog\/[A-Z]{2}-[JS]\.json$/;

/** Enrich catalog copies using sizes already observed by cat-file --batch-check.
 * Both preview files and download-only extras use the same blob metadata.
 * A missing/unselected object remains null, including in cases-only previews.
 */
export function enrichCatalogSizes(index, shards, blobSizes, revision) {
  if (!revision || index.revision !== revision) throw new Error('Catalog revision changed during source generation');
  if (!(blobSizes instanceof Map)) throw new TypeError('Blob sizes must be a Map');
  const updated = {};
  let knownFiles = 0;
  let unknownFiles = 0;
  for (const group of index.groups) {
    if (!groupURL.test(group.url)) throw new Error(`Invalid catalog group URL: ${group.url}`);
    const shard = shards[group.url];
    if (!shard || !Array.isArray(shard.files) || (shard.extraFiles !== undefined && !Array.isArray(shard.extraFiles))) throw new Error(`Invalid catalog shard: ${group.url}`);
    const enrich = file => {
      const value = blobSizes.get(file.blob);
      const size = validSize(value) ? value : null;
      if (size === null) unknownFiles++; else knownFiles++;
      return { ...file, size };
    };
    updated[group.url] = { ...shard, files: shard.files.map(enrich), ...(shard.extraFiles === undefined ? {} : { extraFiles: shard.extraFiles.map(enrich) }) };
  }
  return {
    index: { ...index, sizeAvailability: unknownFiles ? 'partial' : 'complete', sizeCoverage: { knownFiles, unknownFiles } },
    shards: updated,
  };
}

/** Persist only against the catalog revision used by the successful source run.
 * This performs no Git commands, source reads or lazy object fetching.
 */
export async function updateCatalogSizes(publicDirectory, blobSizes, revision) {
  const indexPath = resolve(publicDirectory, 'catalog/index.json');
  const index = JSON.parse(await readFile(indexPath, 'utf8'));
  if (index.revision !== revision) throw new Error('Catalog revision changed during source generation');
  const shards = {};
  for (const group of index.groups) {
    if (!groupURL.test(group.url)) throw new Error(`Invalid catalog group URL: ${group.url}`);
    shards[group.url] = JSON.parse(await readFile(resolve(publicDirectory, group.url), 'utf8'));
  }
  const enriched = enrichCatalogSizes(index, shards, blobSizes, revision);
  const latestIndex = JSON.parse(await readFile(indexPath, 'utf8'));
  if (latestIndex.revision !== revision) throw new Error('Catalog revision changed before size publication');
  for (const [url, shard] of Object.entries(enriched.shards)) await writeFile(resolve(publicDirectory, url), `${JSON.stringify(shard)}\n`, 'utf8');
  await writeFile(indexPath, `${JSON.stringify(enriched.index, null, 2)}\n`, 'utf8');
  return enriched.index.sizeCoverage;
}
