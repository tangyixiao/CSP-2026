# 浙江 CSP-J/S 2026 第二轮供包比对 / Zhejiang Round 2 package comparison

[浙江官方网页来源](../../ZJ/sources/web-sources.md)记录了 J/S 公告、附件及公告公布的 MD5。2026-11-22 复读两条公告的接口并找到了对应的 MD5。两份本地供包分别与仓库保存的原 ZIP 逐字节一致，大小和 MD5 也与官方附件记录一致。

The [Zhejiang publication record](../../ZJ/sources/web-sources.md) links the J/S notices and records their attachment MD5 values. Both notice responses still contained the recorded digests on 2026-11-22. The supplied ZIPs matched the repository copies byte for byte and the recorded publication sizes and MD5 values.

| 组别 / Group | 公告 / Notice | 仓库原包 / Archived ZIP | 字节 / Bytes | 记录的附件 MD5 / Recorded MD5 | SHA-256 | 原包文件逐项匹配 / File matches |
| --- | --- | --- | ---: | --- | --- | ---: |
| J | [普及组代码公示](https://icpc.hznu.edu.cn/zjnoi/newsPage?newsId=17) | [ZJ/J/answers.zip](../../ZJ/J/answers.zip) | 14,230,014 | `0294af50193b89e59e1ce9006647a476` | `3d54a4c74bc84b86be48a10e10572086310a19e1f33dcfbef9a102e731eb779b` | 8,377 / 8,377 |
| S | [提高组代码公示](https://icpc.hznu.edu.cn/zjnoi/newsPage?newsId=18) | [ZJ/S/answers.zip](../../ZJ/S/answers.zip) | 10,488,579 | `541702aef7d8c6c45284534d47d6da47` | `2a8b91869dd8d8cbf5ed6159b708ffcdee2c64d7dae6a527e6545f49fb829962` | 8,486 / 8,486 |

将 ZIP 内每个非目录成员按原相对路径对照对应组目录，并用成员字节计算 Git blob ID。两组合计 **16,863** 个文件路径和字节全部匹配。每组目录另外保存原 ZIP 和一份答案概要文档，均未计入 ZIP 成员数。需要原始目录布局时可查看保留的 ZIP。

The comparison checked every non-directory member against its original relative path and Git blob ID in the corresponding group directory. All **16,863** files matched. The two extra files in each group directory are the retained ZIP and an answer-summary document. They sit outside the member count. The ZIPs retain the original directory layout.
