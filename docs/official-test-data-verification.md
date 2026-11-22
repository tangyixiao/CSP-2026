# CSP-J/S 2026 第二轮官方测试数据校验 / Round 2 official test data verification

CCF 在 2026-11-05 的[成绩和申诉通知](https://www.noi.cn/xw/2026-11-05/945674.shtml)附件 1 分别提供 J 和 S 数据。按组选择原包或逐文件清单。下表的 SHA-256 是整个 ZIP 的摘要。

CCF published both groups as attachments to the [score and appeal notice](https://www.noi.cn/xw/2026-11-05/945674.shtml) on 2026-11-05. The digests below identify the complete ZIPs. The manifests identify individual files.

| 组别 / Group | 官方附件 / Official ZIP | 归档副本 / Archive copy | 文件级校验 / Per-file checks | ZIP 字节 / Bytes | ZIP SHA-256 |
| --- | --- | --- | --- | ---: | --- |
| J | [入门组 / Junior](https://www.noi.cn/ccf/contentcore/resource/download?ID=DE7E9848FC318E82B3B2479E0CB129C2E42ECA12512ECE474D7DEF3CB77C051C) | [CSP-J-2026-official.zip](../test-data/J/official/CSP-J-2026-official.zip) | [J manifest](../test-data/J/official/manifest.json) | 15,457,265 | `69ffe05914c7dd969cc2975d597bf4631188f40038edde77ec8a0acb575dcde1` |
| S | [提高组 / Senior](https://www.noi.cn/ccf/contentcore/resource/download?ID=DE7E9848FC318E82B3B2479E0CB129C2B969486ECEDCF8CE4D7DEF3CB77C051C) | [CSP-S-2026-official.zip](https://github.com/tangyixiao/CSP-2026/releases/download/csp-s-2026-official-data/CSP-S-2026-official.zip) | [S manifest](../test-data/S/official/manifest.json) | 237,557,850 | `b30c09c093ef916aac78f83e152e626cd5fc87bfd9976f3c46eadb839d309c6c` |

## 逐文件复核 / Per-file recheck

两份清单的 `files` 记录相对于各组 `official/` 目录的 `path`，以及文件大小 `size`、`sha256` 和 `zip_crc32`。原 ZIP 在 `data/` 下按文件名平铺，仓库按题目分目录，原文件名及字节保留。

On 2026-11-22, both locally retained ZIPs matched the recorded sizes and SHA-256 digests. All 360 `.in` and `.ans` files matched the manifests by size, SHA-256 and ZIP CRC32, and their bytes produced the archived Git blob IDs. The ZIPs place the files directly under `data/`. The repository groups the same filenames and bytes by problem. The [Senior release asset](https://github.com/tangyixiao/CSP-2026/releases/tag/csp-s-2026-official-data) reports the same size and SHA-256 for the original ZIP.

| 组别 / Group | 题目与输入、答案文件数 / Problem and file count | 合计 / Total |
| --- | --- | ---: |
| J | `and` 40, `card` 50, `string` 50, `travel` 40 | 180 |
| S | `crystal` 40, `hub` 40, `migrate` 50, `subway` 50 | 180 |

2026-11-22 复核了现存原包、360 份输入和答案及对应 Git 对象。J 原包也与仓库保留的 ZIP 对应，S 的 Release 资产大小与 SHA-256 与记录一致。数据可用于本机自测，正式成绩以官方查询为准。
