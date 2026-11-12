# 资料核验与征集进度 / Verification and collection progress

核对日期：**2026-11-12（Asia/Shanghai）**。本表基于已合并版本 [`0e528e1b`](https://github.com/tangyixiao/CSP-2026/commit/0e528e1b44c7afed73fd4524859ad7e844ed1ad7) 的来源记录与当天读取的草稿状态，描述本仓库的进度。

Reviewed **2026-11-12 (Asia/Shanghai)** against the merged source records at the linked revision and the draft status read that day. The tables link to the checks recorded for each material.

状态口径 / Status definitions:

- **已收录 / Present**：仓库保存了该副本或目录。
- **副本／供包核对 / Copy or supplied-package check**：记录了哈希、页数、清单或文件比对；具体范围见证据。
- **官方来源认证 / Official-source authentication**：需有能对应到该文件的官方原始发布证据，单独记录。
- **候选未上线 / Draft candidate**：仍在未合并分支，不属于当前正式资料。

<a id="papers"></a>

## 试题 PDF / Paper PDFs

| 材料 / Material | 当前版本 / Edition | 已记录发布入口 / Recorded entry | 校验记录 / Check record | 核验状态 / Status | 待补材料 / Needed |
| --- | --- | --- | --- | --- | --- |
| 第一轮 J / Round 1 J | 第三方公开副本，9 页 / third-party copy, 9 pages | [Very2](https://very2.cn/?id=88) | [`j1` 元数据 / metadata](../papers/sources.json)、[SHA256SUMS](../papers/SHA256SUMS) | 下载副本信息已记录；官方发布源未认证 / Copy recorded; official origin unauthenticated | 第一轮原版与官方附件入口 / Round 1 original and official attachment entry |
| 第一轮 S / Round 1 S | 社区排印版含答案，14 页 / community typeset copy with answers, 14 pages | [AKCode / CSP First Round](https://www.cspfirstround.com/papers/csp-s-2026/round-1) | [`s1` 元数据 / metadata](../papers/sources.json)、[SHA256SUMS](../papers/SHA256SUMS) | 下载副本信息已记录；官方发布源未认证 / Copy recorded; official origin unauthenticated | 第一轮原版与官方附件入口 / Round 1 original and official attachment entry |
| 第二轮 J / Round 2 J | Gym 阅读版，12 页 / Gym reading edition, 12 pages | [Codeforces Gym 106813 via cf.m27.workers.dev](https://cf.m27.workers.dev/gym/106813) | [`j2` 元数据 / metadata](../papers/sources.json)、[SHA256SUMS](../papers/SHA256SUMS) | 下载副本信息已记录；官方发布源未认证 / Copy recorded; official origin unauthenticated | 官方附件入口；原赛版候选合入前验证 / Official attachment entry; validation of contest-layout candidate before merge |
| 第二轮 S / Round 2 S | Gym 阅读版，12 页 / Gym reading edition, 12 pages | [Codeforces Gym 106814 via cf.m27.workers.dev](https://cf.m27.workers.dev/gym/106814) | [`s2` 元数据 / metadata](../papers/sources.json)、[SHA256SUMS](../papers/SHA256SUMS) | 下载副本信息已记录；官方发布源未认证 / Copy recorded; official origin unauthenticated | 官方附件入口；原赛版候选合入前验证 / Official attachment entry; validation of contest-layout candidate before merge |

当前四份清单记录的 `officialOriginAuthenticated` 均为 `false`。Gym 阅读版使用标准输入输出。文件获取时间、大小、页数和 SHA-256 以 [sources.json](../papers/sources.json) 为准；校验值用于核对副本字节。

All four current manifest entries set `officialOriginAuthenticated` to `false`. Gym editions use standard input/output. Retrieval time, size, page count and SHA-256 are recorded in the manifest; checksums establish copy identity.

### 第二轮原赛版：已取得，待发布 / Round 2 contest-layout files: obtained, awaiting publication

第二轮 J/S 的原赛版文件**已经取得**，各 13 页，供包中对应 PDF 的核对已有记录。文件本身已齐备。当前流程状态如下：

| 环节 / Stage | 状态 / Status | 记录 / Record |
| --- | --- | --- |
| 文件取得 / Acquisition | 已取得 / Obtained | [J：13 页原赛版 / J contest-layout PDF](https://github.com/tangyixiao/CSP-2026/blob/8dcabd96dc2878d7cd52ca6bd788d91efd3d15bb/papers/round-2/csp-j-2026.pdf)、[S：13 页原赛版 / S contest-layout PDF](https://github.com/tangyixiao/CSP-2026/blob/8dcabd96dc2878d7cd52ca6bd788d91efd3d15bb/papers/round-2/csp-s-2026.pdf) |
| 供包对应核对 / Supplied-package correspondence | 已有核对记录 / Checks recorded | [PR #57 的比对范围与记录 / Comparison scope and record](https://github.com/tangyixiao/CSP-2026/pull/57) |
| 正式发布 / Publication | 待完成发布前验证与合并 / Awaiting pre-publication validation and merge | PR #57 在核对时仍为开放草稿；桌面／手机浏览器验证未完成，未合并、未上线；正式站仍为 12 页 Gym 版 / Open draft at review time; desktop/mobile browser validation outstanding, unmerged and undeployed; the live library still serves 12-page Gym editions |
| 官方原始发布入口 / Direct official publication entry | 待补 / Needed | 文件取得及供包对应核对不等同于官方来源认证 / Acquisition and supplied-package correspondence are separate from official-source authentication |

Both 13-page Round 2 J/S contest-layout files have been obtained, with recorded correspondence checks against PDFs in contestant packages. Both files are available at the links above. Publication and direct official-origin evidence remain separate outstanding steps.

<a id="regions"></a>

## 地区材料与官方数据 / Regional materials and official data

| 材料 / Material | 已记录入口 / Entry | 校验记录与状态 / Recorded checks and status | 待补材料 / Needed |
| --- | --- | --- | --- |
| 浙江 J/S / Zhejiang | [地区记录](../ZJ/sources/web-sources.md)；[J 官方通知](https://icpc.hznu.edu.cn/zjnoi/newsPage?newsId=17)、[S 官方通知](https://icpc.hznu.edu.cn/zjnoi/newsPage?newsId=18) | 官方发布元数据和附件入口已记录；核对范围见地区记录 / Official publication metadata and attachment entries recorded; consult the regional scope | 将供包比对与各组别核验结果集中链接 / Consolidated group-specific comparison evidence |
| 河北 J/S / Hebei | [来源索引](../SOURCES.md#contestant-files-and-official-material) | 索引记录供包与随附 MD5 核对；独立地区来源页仍待补 / Supplied packages and MD5 checks recorded; standalone regional record missing | 独立来源页、原始发布入口 / Regional record and original entry |
| 海南 J / Hainan | [地区记录](../HI/sources/j-archive.md) | 供包及内部 MD5 记录；未升级为独立官方认证 / Supplied package/internal MD5 record, without independent official authentication | 独立官方发布证据 / Independent official publication evidence |
| 重庆 J/S / Chongqing | [J 记录](../CQ/sources/j-archive.md)、[S 记录](../CQ/sources/s-archive.md) | 聚合供包及文件比对范围已记录 / Supplied aggregate package and comparison scope recorded | 原分发来源的独立证据 / Independent original-distributor evidence |
| 青海 J/S / Qinghai | [J 记录](../QH/sources/j-archive.md)、[S 记录](../QH/sources/s-archive.md) | 社区供包已记录；没有独立官方 MD5 清单 / Community attachment recorded; no independent official MD5 listing | 官方入口或独立清单 / Official entry or independent manifest |
| 广西 S / Guangxi | [来源索引](../SOURCES.md#contestant-files-and-official-material) | 已记录与本地提供包比对；原分发来源未独立核验 / Local supplied-package comparison recorded; original distributor unverified | 可追溯来源记录 / Traceable original source |
| 其他已收录地区 / Other present regions | [来源索引](../SOURCES.md) | 各地区的官方来源与核验记录待集中汇总 / Directory presence and consolidated source authentication have different scopes | 按地区、组别补来源与核验记录 / Region/group-specific source and check records |
| J/S 官方测试数据 / Official test data | [官方发布通知](https://www.noi.cn/xw/2026-11-05/945674.shtml)、[J 目录](../test-data/J/official)、[S 目录](../test-data/S/official) | 已收录目录和发布入口；获取／校验记录待统一汇总 / Directories and official entry recorded; retrieval/check records need consolidation | 文件级获取与校验索引 / Per-file retrieval/check index |

<a id="collection"></a>

## 征集清单 / Collection requests

- **宁夏、香港、澳门 J/S**：核对当天的 58 个组别目录中没有 `NX-J/S`、`HK-J/S`、`MO-J/S`。请提供原始发布入口或可追溯供包及 SHA-256。 / Ningxia, Hong Kong and Macao J/S were absent from the 58-group catalog checked that day; provide a publication entry or traceable supplied package with SHA-256.
- **第一轮 J/S 原版 PDF 与官方发布入口**。 / Round 1 J/S original PDFs and official publication entries.
- **第二轮官方原始附件入口**：J/S 各 13 页原赛版文件已取得，供包对应核对已有记录；此处征集的是官方来源证据，文件发布前验证另行跟进。 / Round 2 direct official attachment entries: both 13-page files are already obtained with recorded package correspondence; this request is for official-origin evidence, while publication validation is tracked separately.
- **已有地区的独立来源页、官方清单与核验记录**；保持原目录、文件名、字节与版本差异。 / Independent regional records, official manifests and comparison evidence; retain original paths, names, bytes and differing versions.

提交材料请按 [CONTRIBUTING.md](../CONTRIBUTING.md) 说明提供地区／组别、发布入口或供包来源、版本、哈希和已完成检查；公开报告中不要包含密码或凭据。 / Follow the contribution guide with region/group, origin, revision, hashes and completed checks; keep passwords and credentials out of public reports.

维护本表时同步 [SOURCES.md](../SOURCES.md)、[试题说明](../papers/README.md) 与中英文 README 的摘要。 / Keep the source index, paper guide and bilingual README summaries aligned when this status changes.
