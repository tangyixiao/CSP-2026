import { browseContestants, contestProblemFiles, parseBrowseRoute, sampleContestant, sampleProblem } from './archive-browse.js';

export function previewFolderFiles(item, { query = '', problem = '' } = {}, limit = 4) {
  const files = query || problem ? item.matchedFiles || item.files : item.files;
  return files.slice(0, limit);
}

export function highlightSegments(value, query = '') {
  const source = String(value), wanted = String(query).trim();
  if (!wanted) return [{ text: source, match: false }];
  const pattern = new RegExp(wanted.replace(/[.*+?^${}()|[\]\\]/g, '\\$&'), 'giu');
  const result = []; let cursor = 0;
  for (const match of source.matchAll(pattern)) {
    if (match.index > cursor) result.push({ text: source.slice(cursor, match.index), match: false });
    result.push({ text: match[0], match: true }); cursor = match.index + match[0].length;
  }
  if (cursor < source.length) result.push({ text: source.slice(cursor), match: false });
  return result.length ? result : [{ text: source, match: false }];
}

export function appendSearchText(container, value, query) {
  for (const part of highlightSegments(value, query)) {
    if (!part.match) container.append(document.createTextNode(part.text));
    else { const mark = document.createElement('mark'); mark.className = 'search-hit'; mark.textContent = part.text; container.append(mark); }
  }
}

export function readReaderScope(search, available, fallback = {}) {
  const params = new URLSearchParams(search);
  if (!params.has('group') && fallback.group) params.set('group', fallback.group);
  if (!['scope', 'province', 'provinces'].some(key => params.has(key)) && fallback.province) {
    params.set('scope', 'single'); params.set('province', fallback.province);
  }
  const route = parseBrowseRoute(params, available);
  const page = Number(params.get('page'));
  return { scope: route.scope, province: route.province, provinces: route.provinces, group: route.group,
    search: params.get('search') ?? params.get('q') ?? fallback.search ?? '', problem: route.problem,
    page: Number.isSafeInteger(page) && page >= 0 ? page : 0 };
}

export function readerScopeKey(scope) { return [scope.scope, scope.province || '', scope.provinces || '', scope.group].join('|'); }

export function writeReaderScope(search, scope, { search: query = '', problem = '', page = 0 } = {}) {
  const params = new URLSearchParams(search);
  for (const [key, value] of Object.entries({ scope: scope.scope, group: scope.group,
    province: scope.scope === 'single' ? scope.province : '', provinces: scope.scope === 'multiple' ? scope.provinces : '', search: query, problem, page })) {
    if (value === '' || value == null) params.delete(key); else params.set(key, String(value));
  }
  return params;
}

export function filterReaderFiles(files, { query = '', problem = '' } = {}) {
  const wanted = query.trim().toLocaleLowerCase();
  return files.filter(file => (!problem || file.problem === problem) && (!wanted || [file.contestant, file.path, file.name, file.problem].join(' ').toLocaleLowerCase().includes(wanted)));
}

export function pickScopePerson(files, scope, previousId, random = Math.random) {
  return sampleContestant(browseContestants(files, scope).filter(item => item.identityValid), { previousId, random });
}

export function pickScopeProblem(files, scope, previousProblem, random = Math.random) {
  return sampleProblem(filterReaderFiles(contestProblemFiles(files), { query: scope.query }), { previousProblem, random });
}

export async function resolveReaderFile(file, loadByPath) {
  if (/^(?:[a-f0-9]{40}|[a-f0-9]{64})$/i.test(file?.blob || '')) return file;
  const full = await loadByPath(file?.path);
  if (!full || full.path !== file?.path || !full.blob) throw new Error('未找到所选文件的完整记录，请重新加载目录。');
  return full;
}
