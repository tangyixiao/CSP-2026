import { loadScopeCatalogs } from './archive-browse.js';

/** Folder-relative paths keep nationwide browsing independent of source blobs,
 * preview metadata and repeated path/contestant strings in the full catalog. */
export async function buildBrowseIndex(index, shards, group) {
  const groups = index.groups.filter(item => item.group === group);
  const packed = [];
  for (const item of groups) {
    const loaded = await loadScopeCatalogs([item], async () => shards[item.url]);
    if (loaded.failedGroups.length) throw new Error(`Invalid browse catalog: ${item.key}`);
    const folders = new Map();
    for (const file of loaded.files) {
      const directory = file.path.split('/')[2];
      if (!folders.has(directory)) folders.set(directory, []);
      folders.get(directory).push([file.path.slice(`${item.province}/${group}/${directory}/`.length), file.problem || '', file.size ?? null]);
    }
    packed.push([item.key, [...folders]]);
  }
  return { schemaVersion: 1, revision: index.revision, group, groups: packed };
}

export function decodeBrowseIndex(data, index, group) {
  if (data?.schemaVersion !== 1 || data.revision !== index.revision || data.group !== group || !Array.isArray(data.groups)) throw new Error('浏览索引版本不匹配，请刷新页面');
  const expected = new Map(index.groups.filter(item => item.group === group).map(item => [item.key, item]));
  const decoded = new Map();
  for (const [key, folders] of data.groups) {
    const item = expected.get(key);
    if (!item || decoded.has(key) || !Array.isArray(folders)) throw new Error('浏览索引地区无效');
    const files = [], seen = new Set();
    for (const [directory, entries] of folders) {
      if (typeof directory !== 'string' || !directory.trim() || /[/\\\x00]/.test(directory) || ['.', '..'].includes(directory) || !Array.isArray(entries)) throw new Error('浏览索引目录无效');
      for (const [relative, problem, size] of entries) {
        if (typeof relative !== 'string' || relative.split('/').some(part => !part || part === '.' || part === '..') || /[\\\x00]/.test(relative) || typeof problem !== 'string' || (size !== null && (!Number.isFinite(size) || size < 0))) throw new Error('浏览索引文件无效');
        const path = `${item.province}/${group}/${directory}/${relative}`;
        if (seen.has(path)) throw new Error('浏览索引文件重复');
        seen.add(path);
        files.push({ path, name: relative.split('/').at(-1), contestant: directory.trim().toUpperCase(), problem, size });
      }
    }
    if (Number.isInteger(item.fileCount) && files.length !== item.fileCount + (item.extraFileCount || 0)) throw new Error('浏览索引文件数不匹配');
    decoded.set(key, { files });
  }
  if (decoded.size !== expected.size) throw new Error('浏览索引缺少地区');
  return decoded;
}

/** Coalesce requests across searches/routes. Failed requests can be retried. */
export function createBrowseLoader(index, loadJSON, loadFullGroup) {
  const compact = new Map();
  const load = group => {
    if (!compact.has(group)) {
      const request = loadJSON(`./catalog/browse-${group}.json?v=${index.revision}`)
        .then(data => decodeBrowseIndex(data, index, group))
        .catch(error => { compact.delete(group); throw error; });
      compact.set(group, request);
    }
    return compact.get(group);
  };
  return (groups, options) => {
    const requests = new Map();
    return loadScopeCatalogs(groups, async item => {
    // Keep small one/two-shard scopes cheap; reuse a loaded national index.
    if (!index.browseIndex || (groups.length <= 2 && !compact.has(item.group))) return loadFullGroup(item);
    if (!requests.has(item.group)) requests.set(item.group, load(item.group));
    return (await requests.get(item.group)).get(item.key);
    }, options);
  };
}
