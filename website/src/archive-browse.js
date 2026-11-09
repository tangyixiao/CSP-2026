// Catalog metadata only: original source bytes and paths are never changed here.
const natural = new Intl.Collator('en', { numeric: true, sensitivity: 'base' });
const text = value => typeof value === 'string' ? value : '';
const knownCount = value => typeof value === 'number' && Number.isFinite(value) && value >= 0;
const comparePath = (a, b) => a < b ? -1 : a > b ? 1 : 0;

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
