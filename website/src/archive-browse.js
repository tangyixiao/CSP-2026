// Catalog metadata only: original source bytes and paths are never changed here.
const natural = new Intl.Collator('en', { numeric: true, sensitivity: 'base' });
const text = value => typeof value === 'string' ? value : '';
const knownCount = value => typeof value === 'number' && Number.isFinite(value) && value >= 0;
const comparePath = (a, b) => a < b ? -1 : a > b ? 1 : 0;
const contestProblems = { J: ['and', 'card', 'string', 'travel'], S: ['crystal', 'hub', 'migrate', 'subway'] };

/** Navigation may retain unknown path-derived labels, but random contest tasks
 * must come from the identified task set of the file's actual J/S group. */
export function contestProblemFiles(files) {
  return (Array.isArray(files) ? files : []).filter((file, index) => file && contestProblems[identity(file, index).group]?.includes(text(file.problem).trim()));
}

function identity(file, index) {
  const parts = text(file.path).split('/');
  const pathIdentity = parts.length >= 4 && /^[A-Z]{2}$/.test(parts[0]) && /^[JS]$/.test(parts[1]) && parts[2].trim();
  const province = pathIdentity ? parts[0] : text(file.province);
  const group = pathIdentity ? parts[1] : text(file.group);
  const directory = pathIdentity ? parts[2] : text(file.contestantDirectory) || text(file.contestant);
  const valid = /^[A-Z]{2}$/.test(province) && /^[JS]$/.test(group) && Boolean(directory.trim());
  return {
    id: valid ? `${province}/${group}/${directory}` : `unknown/${text(file.path) || `entry-${index}`}`,
    contestant: text(file.contestant) || directory.trim().toUpperCase() || '未识别目录',
    province, group, identityValid: valid,
  };
}

/** Group the filtered catalog scope by exact original contestant directory.
 * Unknown sizes stay unknown; knownBytes is only the known subtotal.
 * discussionCount is unknown until a complete, deduplicated measure is supplied.
 */
export function groupContestants(files, { province, group, problem, query } = {}) {
  const grouped = new Map();
  const wantedProvince = text(province).toUpperCase();
  const wantedGroup = text(group).toUpperCase();
  const wantedProblem = text(problem).toLowerCase();
  const wantedQuery = text(query).trim().toLocaleLowerCase();
  for (const [index, file] of (Array.isArray(files) ? files : []).entries()) {
    if (!file || typeof file !== 'object') continue;
    const who = identity(file, index);
    const fileProblem = text(file.problem).trim();
    if (wantedProvince && who.province.toUpperCase() !== wantedProvince) continue;
    if (wantedGroup && who.group.toUpperCase() !== wantedGroup) continue;
    if (wantedProblem && fileProblem.toLowerCase() !== wantedProblem) continue;
    if (wantedQuery && ![who.contestant, who.id, file.path, file.name, fileProblem].join(' ').toLocaleLowerCase().includes(wantedQuery)) continue;
    if (!grouped.has(who.id)) grouped.set(who.id, { ...who, files: [], problems: [], totalBytes: 0, knownBytes: 0, unknownSizes: 0, discussionCount: null });
    const item = grouped.get(who.id);
    item.files.push(file);
    if (fileProblem && !item.problems.includes(fileProblem)) item.problems.push(fileProblem);
    if (knownCount(file.size)) item.knownBytes += file.size;
    else item.unknownSizes++;
  }
  for (const item of grouped.values()) item.totalBytes = item.unknownSizes ? null : item.knownBytes;
  return sortContestants([...grouped.values()]);
}

/** Return a sorted copy. Unknown measures are last in either direction. */
export function sortContestants(items, { by = 'id', direction = 'asc' } = {}) {
  const sign = direction === 'desc' ? -1 : 1;
  const tie = (a, b) => comparePath(text(a.id), text(b.id));
  const metric = item => by === 'bytes' ? item.totalBytes : by === 'files' ? (Array.isArray(item.files) ? item.files.length : null) : by === 'recent' ? Date.parse(item.discussionUpdatedAt) : item.discussionCount;
  return [...(Array.isArray(items) ? items : [])].sort((a, b) => {
    if (!['bytes', 'files', 'discussions', 'recent'].includes(by)) return sign * natural.compare(text(a.contestant) || text(a.id), text(b.contestant) || text(b.id)) || tie(a, b);
    const left = metric(a), right = metric(b);
    const leftKnown = knownCount(left), rightKnown = knownCount(right);
    if (leftKnown !== rightKnown) return leftKnown ? -1 : 1;
    return (leftKnown ? sign * (left - right) : 0) || tie(a, b);
  });
}

function pick(values, previous, key, random) {
  if (!values.length) return null;
  const alternatives = values.filter(value => key(value) !== previous);
  const pool = alternatives.length ? alternatives : values;
  const draw = random();
  const fraction = Number.isFinite(draw) ? Math.min(Math.max(draw, 0), 1 - Number.EPSILON) : 0;
  return pool[Math.floor(fraction * pool.length)];
}

/** Uniform over unique contestant-directory identities, never over source files. */
export function sampleContestant(items, { previousId, random = Math.random } = {}) {
  const unique = [...new Map((Array.isArray(items) ? items : []).filter(item => item && typeof item.id === 'string').map(item => [item.id, item])).values()];
  return pick(unique, previousId, item => item.id, random);
}

/** Return a distinct problem label, optionally scoped to one directory ID.
 * contestant accepts a grouped item or exact ID; a display label is also accepted
 * for existing callers, but exact IDs avoid merging malformed/duplicate labels.
 */
export function sampleProblem(files, { contestant, previousProblem, random = Math.random } = {}) {
  const wanted = typeof contestant === 'object' && contestant ? contestant.id : contestant;
  const problems = new Set();
  for (const [index, file] of (Array.isArray(files) ? files : []).entries()) {
    if (!file || typeof file !== 'object') continue;
    const who = identity(file, index);
    if (wanted && who.id !== wanted && who.contestant !== wanted) continue;
    const problem = text(file.problem).trim();
    if (problem) problems.add(problem);
  }
  return pick([...problems], previousProblem, value => value, random);
}

function validDirectory(value) {
  const parts = text(value).split('/');
  return parts.length === 3 && /^[A-Z]{2}$/.test(parts[0]) && /^[JS]$/.test(parts[1])
    && parts[2].trim() && !['.', '..'].includes(parts[2]) && !/[\x00\\]/.test(value);
}

function validFilePath(value) {
  const parts = text(value).split('/');
  return parts.length >= 4 && validDirectory(parts.slice(0, 3).join('/'))
    && !parts.some(part => !part || part === '.' || part === '..') && !/[\x00\\]/.test(value);
}

/** Shared, URL-addressable scope. Legacy province links still mean one province. */
export function parseBrowseRoute(search, availableProvinces) {
  const query = new URLSearchParams(search);
  const available = new Set(availableProvinces);
  let province = available.has(query.get('province')) ? query.get('province') : '';
  let provinces = [...new Set((query.get('provinces') || '').split(',').filter(code => available.has(code)))].sort().join(',');
  const scope = ['all', 'single', 'multiple'].includes(query.get('scope')) ? query.get('scope') : provinces ? 'multiple' : province ? 'single' : 'all';
  if (scope === 'all') { province = ''; provinces = ''; }
  if (scope === 'single') { province ||= available.has('ZJ') ? 'ZJ' : [...available][0] || ''; provinces = ''; }
  if (scope === 'multiple') province = '';
  const view = ['home', 'browse', 'contestant', 'discover', 'sources'].includes(query.get('view')) ? query.get('view') : 'home';
  return {
    view, scope, province, provinces,
    group: ['J', 'S', 'all'].includes(query.get('group')) ? query.get('group') : view === 'discover' ? 'all' : 'S',
    query: query.get('q') || '', problem: query.get('problem') || '',
    sort: ['id', 'bytes', 'files', 'discussions', 'recent'].includes(query.get('sort')) ? query.get('sort') : 'id',
    direction: query.get('direction') === 'desc' ? 'desc' : 'asc',
    batch: [60, 120, 240].includes(Number(query.get('batch'))) ? Number(query.get('batch')) : 60,
    directory: validDirectory(query.get('directory')) ? query.get('directory') : '',
  };
}

export function scopeGroups(groups, { scope = 'all', province = '', provinces = '', group = 'all' } = {}) {
  const selected = new Set(text(provinces).split(','));
  return groups.filter(item => (group === 'all' || item.group === group)
    && (scope === 'all' || (scope === 'single' ? item.province === province : selected.has(item.province))));
}

/** Search chooses folders; entering one always exposes its complete contents. */
export function browseContestants(files, { query = '', problem = '' } = {}) {
  const wanted = text(query).trim().toLocaleLowerCase(), task = text(problem).toLocaleLowerCase();
  return groupContestants(files).flatMap(item => {
    const matchedFileCount = item.files.filter(file => (!task || text(file.problem).toLocaleLowerCase() === task)
      && (!wanted || [item.contestant, item.id, file.path, file.name, file.problem].join(' ').toLocaleLowerCase().includes(wanted))).length;
    return matchedFileCount ? [{ ...item, matchedFileCount }] : [];
  });
}

/** Exact raw directory prefix: whitespace, casing and nested names are retained. */
export function contestantTree(files, directory) {
  if (!validDirectory(directory)) return null;
  const create = (name, path) => ({ name, path, directories: new Map(), files: [], fileCount: 0 });
  const root = create(directory.split('/')[2], directory), seen = new Set();
  for (const file of files) {
    if (!validFilePath(file?.path) || !file.path.startsWith(`${directory}/`) || seen.has(file.path)) continue;
    seen.add(file.path);
    const relative = file.path.slice(directory.length + 1).split('/');
    let parent = root;
    parent.fileCount++;
    for (const part of relative.slice(0, -1)) {
      if (!parent.directories.has(part)) parent.directories.set(part, create(part, `${parent.path}/${part}`));
      parent = parent.directories.get(part);
      parent.fileCount++;
    }
    parent.files.push({ ...file, name: relative.at(-1) });
  }
  const ordered = item => ({ ...item,
    directories: [...item.directories.values()].sort((a, b) => natural.compare(a.name, b.name) || comparePath(a.name, b.name)).map(ordered),
    files: item.files.sort((a, b) => natural.compare(a.name, b.name) || comparePath(a.path, b.path)),
  });
  return ordered(root);
}

/** Load only catalog metadata, at most four requests at a time. Stale routes
 * stop scheduling. Failed shards remain explicit, never a complete global rank. */
export async function loadScopeCatalogs(groups, loadGroup, { onProgress = () => {}, isCurrent = () => true, concurrency = 4 } = {}) {
  const results = Array(groups.length), failedGroups = [];
  let next = 0, completed = 0;
  async function worker() {
    while (isCurrent() && next < groups.length) {
      const index = next++, group = groups[index];
      try {
        const data = await loadGroup(group);
        if (!isCurrent()) break;
        if (!Array.isArray(data.files) || (data.extraFiles !== undefined && !Array.isArray(data.extraFiles))) throw new Error('文件目录格式无效');
        const entries = new Map();
        for (const [files, previewable] of [[data.files, true], [data.extraFiles || [], false]]) {
          for (const file of files) {
            if (!validFilePath(file?.path) || !file.path.startsWith(`${group.province}/${group.group}/`) || entries.has(file.path)) continue;
            entries.set(file.path, previewable ? file : { ...file, previewable: false });
          }
        }
        results[index] = [...entries.values()];
      } catch (error) {
        if (!isCurrent()) break;
        failedGroups.push({ group, message: error.message || '目录读取失败' });
      }
      completed++;
      if (isCurrent()) onProgress({ completed, total: groups.length, failed: failedGroups.length });
    }
  }
  const count = Math.min(groups.length, Math.max(1, Math.min(4, Math.floor(concurrency) || 4)));
  await Promise.all(Array.from({ length: count }, worker));
  return { files: isCurrent() ? results.flatMap(files => files || []) : [], failedGroups, cancelled: !isCurrent() };
}
