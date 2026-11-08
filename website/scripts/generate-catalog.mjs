import { execFileSync } from 'node:child_process';
import { mkdir, writeFile } from 'node:fs/promises';
import { dirname, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import sourceOverrides from '../src/source-overrides.json' with { type: 'json' };

const PROVINCES = {
  AH: '安徽', BJ: '北京', CQ: '重庆', FJ: '福建', GD: '广东', GS: '甘肃',
  GX: '广西', GZ: '贵州', HA: '河南', HB: '湖北', HE: '河北', HI: '海南',
  HL: '黑龙江', HN: '湖南', JL: '吉林', JS: '江苏', JX: '江西', LN: '辽宁',
  NM: '内蒙古', NX: '宁夏', QH: '青海', SC: '四川', SD: '山东', SH: '上海',
  SN: '陕西', SX: '山西', TJ: '天津', XJ: '新疆', XZ: '西藏', YN: '云南',
  ZJ: '浙江',
};

const PROBLEMS = ['and', 'card', 'string', 'travel', 'crystal', 'hub', 'migrate', 'subway'];
const PROBLEM_ALIASES = {
  按位与: 'and', 纸牌游戏: 'card', 回文串: 'string', 旅游: 'travel',
  水晶: 'crystal', 迁徙: 'migrate', 迁移: 'migrate', 地铁: 'subway',
};

// Backups stay addressable by their original Git paths; editor swap files and
// executable/archive formats are not source files. No source blob is read here.
function withoutBackups(name) {
  let previous;
  do {
    previous = name;
    name = name.replace(/(?:\.(?:bak|gz|old|temp|save-failed)|[~#])$/i, '');
  } while (name !== previous);
  return name;
}

function knownProblem(text) {
  const value = text.trim().toLowerCase();
  if (PROBLEMS.includes(value)) return value;
  if (PROBLEM_ALIASES[value]) return PROBLEM_ALIASES[value];
  return PROBLEMS.find((problem) => new RegExp(`(?:^|[^a-z])${problem}(?:$|[^a-z])`).test(value));
}

/** Parse NUL-separated Git output, splitting only its first metadata/path tab. */
export function parseLsTree(output) {
  return String(output).split('\0').filter(Boolean).map((record) => {
    const separator = record.indexOf('\t');
    const metadata = record.slice(0, separator);
    const match = /^([0-7]{6}) (blob|tree|commit) ([a-f0-9]{40,64})(?: +(\d+|-))?$/.exec(metadata);
    if (separator < 0 || !match) throw new Error(`Malformed git ls-tree record: ${metadata}`);
    return {
      mode: match[1], type: match[2], blob: match[3],
      size: match[4] && match[4] !== '-' ? Number(match[4]) : null,
      path: record.slice(separator + 1),
    };
  });
}

/** Classify a source-like file without changing the path used to fetch it. */
export function parseSourcePath(path, blob) {
  const parts = path.split('/');
  if (parts.length < 4 || !/^[A-Z]{2}$/.test(parts[0]) || !/^[JS]$/.test(parts[1])) return null;
  if (parts.slice(2, -1).some((part) => /(?:归档|统计)/.test(part) || /^(?:archives?|stats?|statistics|test-data)$/i.test(part.trim()))) return null;
  const name = parts.at(-1);
  const unwrapped = withoutBackups(name);
  const override = sourceOverrides[path];
  const language = override && override.blob === blob ? override.language : null;
  if (/\.(?:in|out|ans)(?:\.txt)?$/i.test(unwrapped)) return null;
  if (!language && !/\.(?:cpp|c|cc|cxx|c\+\+|h|hpp|hxx|pas|pp|py|java|txt)$/i.test(unwrapped)) return null;
  const stem = unwrapped.replace(/\.[^.]+$/, '');
  const directories = parts.slice(3, -1);
  const problem = directories.map(knownProblem).find(Boolean) || knownProblem(stem)
    || (directories.at(-1) || stem).trim();
  return {
    path, province: parts[0], group: parts[1], contestant: parts[2].trim().toUpperCase(),
    contestantDirectory: parts[2], problem, name, ...(language ? { language } : {}),
  };
}

/** Build small group shards so the browser never downloads the full directory. */
export function buildCatalog(entries, revision) {
  const shards = {};
  const contestantSets = new Map();
  for (const entry of entries) {
    if (entry.type !== 'blob' || !/^100[67]/.test(entry.mode)) continue;
    const source = parseSourcePath(entry.path, entry.blob);
    if (!source) continue;
    const key = `${source.province}-${source.group}`;
    if (!shards[key]) {
      shards[key] = { files: [] };
      contestantSets.set(key, new Set());
    }
    contestantSets.get(key).add(source.contestant);
    const { province, group, ...file } = source;
    shards[key].files.push({ ...file, size: entry.size ?? null, blob: entry.blob });
  }
  // Downloads preserve the complete tracked contestant folder, including files
  // that have no code-preview classification. Keep only the extra entries.
  const sourcePaths = new Set(Object.values(shards).flatMap(shard => shard.files.map(file => file.path)));
  for (const entry of entries) {
    const parts = entry.path.split('/');
    if (entry.type !== 'blob' || !/^100[67]/.test(entry.mode) || parts.length < 4 || sourcePaths.has(entry.path)) continue;
    const key = `${parts[0]}-${parts[1]}`;
    if (!shards[key] || !parts[2].toUpperCase().startsWith(`${key}`)) continue;
    (shards[key].extraFiles ??= []).push({ path:entry.path, blob:entry.blob, size:entry.size ?? null,
      name:parts.at(-1), contestantDirectory:parts[2] });
  }
  const groups = Object.keys(shards).sort().map((key) => {
    const [province, group] = key.split('-');
    shards[key].files.sort((left, right) => left.path < right.path ? -1 : left.path > right.path ? 1 : 0);
    return {
      key, province, group, label: `${PROVINCES[province] || province} · CSP-${group}`,
      fileCount: shards[key].files.length, contestantCount: contestantSets.get(key).size,
      extraFileCount: shards[key].extraFiles?.length ?? 0,
      url: `catalog/${key}.json`,
    };
  });
  return {
    index: {
      revision, repository: 'tangyixiao/CSP-2026',
      totalFiles: groups.reduce((count, group) => count + group.fileCount, 0),
      totalContestants: groups.reduce((count, group) => count + group.contestantCount, 0),
      totalTreeFiles: entries.filter((entry) => entry.type === 'blob').length,
      sizeAvailability: 'not-collected',
      limitations: [
        '目录由 Git 树生成，不读取源码内容；size 为 null，避免 partial clone 自动下载全部 blob。',
        '按省份/组别路径和源码、文本及备份扩展名筛选，另含路径和 Git blob 完全匹配的已审查例外；未验证可编译性或提交真实性。',
        '保留原始路径；选手检索标识去除首尾空白并统一大写，题目按目录或文件名识别，未识别的名称原样保留。',
      ],
      groups,
    },
    shards,
  };
}

async function main() {
  const repositoryRoot = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
  const environment = { ...process.env, GIT_NO_LAZY_FETCH: '1' };
  const git = (args) => execFileSync('git', args, {
    cwd: repositoryRoot, encoding: 'utf8', maxBuffer: 256 * 1024 * 1024, env: environment,
  });
  const requestedRevision = process.env.SOURCE_REVISION || 'HEAD';
  const revision = git(['rev-parse', '--verify', `${requestedRevision}^{commit}`]).trim();
  // -l would ask Git for every blob's size and hydrate a blob:none clone.
  const entries = parseLsTree(git(['ls-tree', '-rz', '--full-tree', revision]));
  const { index, shards } = buildCatalog(entries, revision);
  const output = resolve(repositoryRoot, 'website/public/catalog');
  await mkdir(output, { recursive: true });
  for (const [key, shard] of Object.entries(shards)) {
    await writeFile(resolve(output, `${key}.json`), `${JSON.stringify(shard)}\n`, 'utf8');
  }
  await writeFile(resolve(output, 'index.json'), `${JSON.stringify(index, null, 2)}\n`, 'utf8');
  console.log(JSON.stringify({
    revision, treeFiles: index.totalTreeFiles, indexedFiles: index.totalFiles,
    contestants: index.totalContestants, groups: index.groups.length,
    sizeAvailability: index.sizeAvailability,
  }));
}

if (process.argv[1] && import.meta.url === pathToFileURL(resolve(process.argv[1])).href) {
  main().catch((error) => { console.error(error.message); process.exitCode = 1; });
}
