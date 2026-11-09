import { createHash } from 'node:crypto';

export const MAPPING_SCOPE = 'single-file-and-recorded-case-pairs';
const normalized = value => String(value ?? '').trim().toUpperCase();
const mappingKey = term => `csp-2026-v1-${createHash('sha256').update(term, 'utf8').digest('hex')}`;

function directory(file) {
  const parts = typeof file.path === 'string' ? file.path.split('/') : [];
  return parts.length >= 4 && /^[A-Z]{2}$/.test(parts[0]) && /^[JS]$/.test(parts[1]) && parts[2].trim() ? parts.slice(0, 3).join('/') : null;
}

/** Associate only reversible, catalog-backed terms. Arbitrary hashed file pairs
 * cannot be enumerated; their activity remains explicitly unmapped.
 */
export function associateDiscussionSnapshot(snapshot, { revision, files = [], cases = [] }) {
  if (!/^[a-f0-9]{40,64}$/.test(revision || '') || (snapshot.catalogRevision && snapshot.catalogRevision !== revision)) throw new Error('Discussion catalog revision mismatch');
  const base = { ...snapshot, catalogRevision: revision, mappingScope: MAPPING_SCOPE, byContestant: {}, mappedThreadCount: null, unmappedThreadCount: null };
  if (!snapshot.complete || snapshot.availability !== 'available') return base;
  if (snapshot.totalThreads === 0) return { ...base, mappedThreadCount: 0, unmappedThreadCount: 0 };
  const associations = new Map();
  const fileIndex = new Map();
  const add = (term, ids) => {
    const key = mappingKey(term);
    if (!snapshot.byKey[key]) return;
    const existing = associations.get(key) || new Set();
    for (const id of ids) if (id) existing.add(id);
    if (existing.size) associations.set(key, existing);
  };
  for (const file of files) {
    const id = directory(file);
    if (!id) continue;
    add(`files:${file.path}`, [id]);
    const [province, group] = file.path.split('/');
    const selector = `${province}/${group}/${normalized(file.contestant || file.path.split('/')[2])}/${normalized(file.problem)}`;
    if (!fileIndex.has(selector)) fileIndex.set(selector, []);
    fileIndex.get(selector).push(file);
  }
  const matched = side => side ? fileIndex.get(`${normalized(side.province)}/${normalized(side.group)}/${normalized(side.contestant)}/${normalized(side.problem)}`) || [] : [];
  for (const item of cases) {
    const left = matched(item.left), right = matched(item.right);
    const leftIds = new Set(left.map(directory)), rightIds = new Set(right.map(directory));
    if (leftIds.size === 1 && rightIds.size === 1 && typeof item.id === 'string') add(`case:${item.id}`, [...leftIds, ...rightIds]);
    if (left.length === 1 && right.length === 1) add(`files:${[...new Set([left[0].path, right[0].path])].sort().join('|')}`, [directory(left[0]), directory(right[0])]);
  }
  const byContestant = {};
  const mappedThreads = new Set();
  for (const [key, ids] of associations) {
    const metadata = snapshot.byKey[key];
    for (const id of ids) {
      const entry = byContestant[id] ||= { threadCount: 0, commentCount: 0, reactionCount: 0, updatedAt: metadata.updatedAt, threadIds: [] };
      // Counts belong to a mapping's threads as a whole. A directory reached
      // through both sides of the same case is included only once above.
      const newThreads = metadata.threads.filter(thread => !entry.threadIds.includes(thread.id));
      if (newThreads.length === metadata.threads.length) {
        entry.commentCount += metadata.commentCount;
        entry.reactionCount += metadata.reactionCount;
      } else if (newThreads.length) throw new Error('Inconsistent duplicate discussion mapping');
      for (const thread of newThreads) { entry.threadIds.push(thread.id); mappedThreads.add(thread.id); }
      entry.threadCount = entry.threadIds.length;
      if (Date.parse(metadata.updatedAt) > Date.parse(entry.updatedAt)) entry.updatedAt = metadata.updatedAt;
    }
  }
  return { ...base, byContestant, mappedThreadCount: mappedThreads.size, unmappedThreadCount: Math.max(0, snapshot.totalThreads - mappedThreads.size) };
}
