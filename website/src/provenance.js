import { githubUrl, REPOSITORY } from './source.js';

// Attribution was added after the archived catalog revision. Pin the index to a
// revision containing it, rather than inventing a SOURCES.md in the older tree.
export const SOURCE_INDEX_REVISION = 'ed68fe1feb259412c79d2d143486b86b2e63a7e3';
const LICENSE_SCOPE = '归档中的选手文件及第三方材料保留各自权利；网站代码的 Apache-2.0 许可不授予这些文件的再分发权。';
const RECORDS = Object.freeze({
  ZJ: {
    title: '浙江 J/S 来源索引',
    verificationScope: '索引收录官方 J/S 发布入口及来源记录；其中 Junior 字节比较另见 README。发布入口与归档文件逐项核验是不同范围。',
  },
  'HI/J': {
    title: '海南 J 来源索引',
    verificationScope: '提供的加密包及包内 MD5 清单有记录；尚不构成独立的官方来源认证。',
  },
  'CQ/J': {
    title: '重庆 J 来源索引',
    verificationScope: '提供的汇总包及字节检查有记录；原始发布者尚未独立核实。',
  },
  'CQ/S': {
    title: '重庆 S 来源索引',
    verificationScope: '提供的汇总包、独立本地包交叉检查及文件匹配有记录；原始发布者尚未独立核实。',
  },
  QH: {
    title: '青海 J/S 来源索引',
    verificationScope: '提供的社区附件有记录，Junior 保留原六位编号；没有独立的官方 MD5 清单。',
  },
  'AH/S': {
    title: '安徽 S 补充包来源索引',
    verificationScope: '索引仅收录一份 S 组补充包记录；不能据省份和组别认定当前文件来自该补充包，或已逐项核验。',
  },
  'GX/S': {
    title: '广西 S 核验说明索引',
    verificationScope: 'README 记录与本地提供的解密包进行比较；原始发布者尚未独立核实。',
  },
  HE: {
    title: '河北 J/S 核验说明索引',
    verificationScope: 'README 记录提供的加密包及随附 MD5 清单；独立的地区来源记录仍待补充。',
  },
});

/** Links only to the curated index; no historical source responses are fetched. */
export function getProvenance(path, revision) {
  const archiveUrl = githubUrl(path, revision);
  const [province, group] = path.split('/');
  const record = RECORDS[`${province}/${group}`] || RECORDS[province];
  const indexUrl = `https://github.com/${REPOSITORY}/blob/${SOURCE_INDEX_REVISION}/SOURCES.md`;
  return {
    archiveUrl,
    sourceUrl: `${indexUrl}#contestant-files-and-official-material`,
    title: record?.title || '原始发布记录待补',
    verificationScope: record?.verificationScope || '当前链接标识 GitHub 归档副本；原始发布者、发布记录及逐项核验范围尚未整理，不能视为官方认证。',
    licenseScope: LICENSE_SCOPE,
    hasRegionalRecord: Boolean(record),
  };
}
