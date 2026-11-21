// Bounded catalog sampling, not an assessment of contestant work or originality.
export const DISCOVERY_LIMITS = Object.freeze({ groups: 6, files: 9, homeFiles: 3 });
export const DISCOVERY_PROBLEMS = Object.freeze({
  J: Object.freeze(['and', 'card', 'string', 'travel']),
  S: Object.freeze(['crystal', 'hub', 'migrate', 'subway']),
});

function shuffled(values, random) {
  const result = [...values];
  for (let index = result.length - 1; index > 0; index--) {
    const draw = random();
    const fraction = Number.isFinite(draw) ? Math.min(Math.max(draw, 0), 1 - Number.EPSILON) : 0;
    const selected = Math.floor(fraction * (index + 1));
    [result[index], result[selected]] = [result[selected], result[index]];
  }
  return result;
}

/** Prefer new groups and different provinces. At most six metadata requests. */
export function selectDiscoveryGroups(groups, {
  province = '', group = 'all', problem = '', previousKeys = [], limit = DISCOVERY_LIMITS.groups, random = Math.random,
} = {}) {
  const previous = new Set(previousKeys);
  const eligible = [...new Map((Array.isArray(groups) ? groups : []).filter(item => item
    && /^[A-Z]{2}$/.test(item.province) && /^[JS]$/.test(item.group)
    && (!province || item.province === province) && (group === 'all' || item.group === group)
    && (!problem || DISCOVERY_PROBLEMS[item.group].includes(problem)))
    .map(item => [item.key || `${item.province}-${item.group}`, item])).values()];
  const fresh = shuffled(eligible.filter(item => !previous.has(item.key || `${item.province}-${item.group}`)), random);
  const repeated = shuffled(eligible.filter(item => previous.has(item.key || `${item.province}-${item.group}`)), random);
  const selected = [], seenProvinces = new Set();
  const maximum = Math.max(0, Math.min(DISCOVERY_LIMITS.groups, Math.floor(limit) || 0));
  for (const pool of [fresh, repeated]) {
    for (const item of pool) if (!seenProvinces.has(item.province) && selected.length < maximum) {
      selected.push(item); seenProvinces.add(item.province);
    }
    for (const item of pool) if (!selected.includes(item) && selected.length < maximum) selected.push(item);
  }
  return selected;
}

function validFile(file) {
  return file && typeof file.path === 'string' && /^[A-Z]{2}\/[JS]\//.test(file.path)
    && file.path.split('/').length >= 4 && !file.path.split('/').some(part => !part || part === '.' || part === '..')
    && !/[\x00-\x1f\\]/.test(file.path);
}

/** Spread the batch over the loaded groups, with one file per directory first.
 * Only reuse previous paths when the sampled scope has no fresh path at all.
 * Fewer cards are preferable to filling a fresh batch with avoidable repeats.
 */
export function selectDiscoveryFiles(shards, {
  problem = '', previousPaths = [], limit = DISCOVERY_LIMITS.files, random = Math.random,
} = {}) {
  const previous = new Set(previousPaths), seenPaths = new Set();
  const pools = (Array.isArray(shards) ? shards : []).slice(0, DISCOVERY_LIMITS.groups).map(shard => {
    const files = [];
    for (const file of Array.isArray(shard.files) ? shard.files : []) {
      if (!validFile(file) || seenPaths.has(file.path) || (problem && (file.problem !== problem || !DISCOVERY_PROBLEMS[file.path.split('/')[1]].includes(problem)))) continue;
      if (shard.group && (file.path.split('/')[0] !== shard.group.province || file.path.split('/')[1] !== shard.group.group)) continue;
      seenPaths.add(file.path); files.push(file);
    }
    return shuffled(files, random);
  });
  const hasFresh = pools.some(pool => pool.some(file => !previous.has(file.path)));
  const eligible = pools.map(pool => pool.filter(file => !hasFresh || !previous.has(file.path)));
  const selected = [], directories = new Set();
  const maximum = Math.max(0, Math.min(DISCOVERY_LIMITS.files, Math.floor(limit) || 0));
  for (const uniqueDirectories of [true, false]) {
    let progress = true;
    while (selected.length < maximum && progress) {
      progress = false;
      for (const pool of eligible) {
        if (selected.length >= maximum) break;
        const index = pool.findIndex(file => !uniqueDirectories || !directories.has(file.path.split('/').slice(0, 3).join('/')));
        if (index < 0) continue;
        const [file] = pool.splice(index, 1);
        selected.push(file); directories.add(file.path.split('/').slice(0, 3).join('/')); progress = true;
      }
    }
  }
  return { files: selected, repeated: selected.filter(file => previous.has(file.path)).length };
}

export function discoveryKind(file) {
  if (file.size === 0) return '0 字节文件';
  const parts = file.path.split('/'), name = parts.at(-1);
  if (/(?:\.(?:bak|old|save-failed)|[~#])$/i.test(name)) return '带备份后缀';
  if (parts.length > 5) return '嵌套目录';
  if (parts.length >= 5 && file.problem && parts[3] !== file.problem) return '题目目录之外';
  return '随机阅读';
}
