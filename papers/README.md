# CSP-J/S 2026 试题原卷与参考资料

[在线资料页 / Papers online](https://tangyixiao.github.io/CSP-2026/papers/) · [返回项目](../README.md) · [文件校验清单](SHA256SUMS)

| 阶段 | 组别 | 原版收录状态 | 文件 |
| --- | --- | --- | --- |
| 第一轮 | 入门组 J | **原版 PDF 待补充** | [9 页第三方参考副本，非原卷](round-1/csp-j-2026.pdf) |
| 第一轮 | 提高组 S | **原版 PDF 待补充** | [14 页社区排印与参考答案，非原卷](round-1/csp-s-2026-community.pdf) |
| 第二轮 | 入门组 J | 原卷版式，13 页，文件输入输出 | [考场题面副本](round-2/csp-j-2026.pdf) |
| 第二轮 | 提高组 S | 原卷版式，13 页，文件输入输出 | [考场题面副本](round-2/csp-s-2026.pdf) |

第二轮的两份 PDF 来自本地已有的考场题面副本，按原文件字节保留，未重排、未修改输入输出、未拼接参考答案。两份均包含考场封面、题目总表、提交文件名、编译选项与注意事项。原来使用标准输入输出的 12 页 Gym 阅读版已被替换。

Round 2 PDFs preserve the original contest layout and file I/O, including the cover, problem table, submission filenames, compiler options and rules. They replace the 12-page Gym adaptations. Original Round 1 PDFs are still missing; the two retained community references do not satisfy that requirement.

## 第二轮副本核验 / Round 2 verification

- 入门组：181,182 字节，13 页；SHA-256 `aeb1ba51f3cc1b370fd4a82fc5704d7df398945715d46df2932b53b5a55c592e`。与 2026-11-08 海南源文件包审计记录中的 `CSP-J2/HI-J00588/down/day1.pdf` 一致。参见 [海南来源记录](../HI/sources/j-archive.md) 和 [原收集讨论](https://www.luogu.com.cn/discuss/1427989)。本次复核使用该包既有的已认证条目清单，未重新下载源文件包。
- 提高组：175,679 字节，13 页；SHA-256 `14f8f1933b179f383ddca940cb228dd8a2c939c999dfb95977be4b6a48b88339`。本次直接读取本地 `CSP-S2026.zip` 中山东、天津选手目录内的 5 份 `day1.pdf`，与收录副本逐字节一致。具体条目见 [sources.json](sources.json)。
- 视觉与文本检查：封面、13 页连续页码、全部四题、文件输入输出及原始提交规则均保留。入门组包含原题插图。

These checks establish correspondence with contestant-distributed contest papers. A direct official download URL has not been recovered, so `officialOriginAuthenticated` remains false. File metadata or checksums alone are not used as proof of official distribution. No local archive, extraction credential or contestant data is added by this paper correction.

## 第一轮参考资料 / Round 1 references

**第一轮 J/S 原版 PDF 尚未找到，不能标记为已完成。** 下列文件仅作社区参考，不能替代原卷；图片整理、OCR、网页打印和附答案排印版也不能冒充原始 PDF。

| 资料 | 来源页面 | 来源文件 |
| --- | --- | --- |
| J 组第三方参考副本，9 页 | [贰剧场](https://very2.cn/?id=88) | [来源 PDF](https://very2.cn/zb_users/upload/2026/09/202609191789814153201232.pdf) |
| S 组社区排印与参考答案，14 页 | [AKCode](https://www.cspfirstround.com/papers/csp-s-2026/round-1) | [来源 PDF](https://www.cspfirstround.com/papers/csp-s-2026/round-1/pdf) |

- [洛谷第一轮集中讨论：J/S 题面 OCR 与参考答案](https://www.luogu.com.cn/discuss/1380094)。
- [第一轮考试时间与形式的官方通知](https://noi.ccf.org.cn/gs/xw/sx1/2026-09-14/931919.shtml)。

## 配套数据与权利 / Data and rights

- 第二轮官方测试数据：[入门组 J](../test-data/J/official) · [提高组 S](../test-data/S/official)。
- [官方测试数据发布通知](https://www.noi.cn/xw/2026-11-05/945674.shtml)。该通知发布测试数据，不能用来证明 PDF 的官方发布来源。
- [来源清单](sources.json) · [SHA-256](SHA256SUMS) · [NOTICE](../NOTICE) · [SOURCES.md](../SOURCES.md)。

试题及第三方排印内容保留各自权利，不适用本项目的 Apache-2.0 授权。校验值用于验证文件身份，不能单独证明官方真实性或再分发授权。
