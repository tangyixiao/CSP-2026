# Sources and attribution

This index separates where material came from, what has been checked and which rights are documented. A GitHub file URL identifies an archived copy; it is not proof of its original publisher or permission to redistribute it. Source records may be incomplete, and records supplied by the maintainer are not described as independently authenticated official packages.

## Contestant files and official material

| Material | Record or original entry | Verification boundary |
| --- | --- | --- |
| Zhejiang J/S | [Regional source record](ZJ/sources/web-sources.md); official [Junior announcement](https://icpc.hznu.edu.cn/zjnoi/newsPage?newsId=17) and [Senior announcement](https://icpc.hznu.edu.cn/zjnoi/newsPage?newsId=18) | The record preserves publication metadata and original attachment links; the README separately states the Junior byte comparison |
| Hainan J | [Source record](HI/sources/j-archive.md) | Supplied encrypted package and internal MD5 listing; do not upgrade this to independent official authentication |
| Chongqing J | [Source record](CQ/sources/j-archive.md) | Supplied aggregate package and byte checks |
| Chongqing S | [Source record](CQ/sources/s-archive.md) | Supplied aggregate package, separate local package cross-check and exact file matching; original distributor not independently authenticated |
| Qinghai J/S | [Junior record](QH/sources/j-archive.md), [Senior record](QH/sources/s-archive.md) | Supplied community attachment, original six-digit Junior IDs retained; no independent official MD5 listing |
| Anhui S supplement | [Supplement record](AH/sources/s-supplement-20261108.md) | The record describes the supplied input and scope of the addition |
| Source-named binary entries | [Preservation record](docs/source-records/binary-submissions-20261108.md) | 22 entries preserved from a supplied package; binary content alone does not establish submission status |
| Guangxi S | [README verification statement](README.md#sources-verification-and-corrections) | Compared to a locally supplied decrypted package; original distributor not independently verified |
| Hebei J/S | [README verification statement](README.md#sources-verification-and-corrections) | Supplied encrypted archives and accompanying MD5 manifests; a standalone regional source record is still missing |
| Other regions and official test data | Their archived paths and any existing record | Full original-publication and rights records are not yet consolidated; do not label them all officially verified |

This index does not reproduce extraction passwords. Existing historical source responses need a separate credential/content hygiene review before their content is copied into a new public interface.

## Attributed Luogu comparison materials

The machine-readable records are in [website/src/cases.json](website/src/cases.json). Authors' claims, independent byte identity and the viewer's text diff are different observations.

| Source | Author | Recorded publication time, Asia/Shanghai | Use in the current collection |
| --- | --- | --- | --- |
| [CSP-S相似代码](https://www.luogu.com.cn/discuss/1427684) | zouchenjun | 2026-11-07 17:16:13 | 22 primary comparison records |
| [CSP-J相似代码（部分省区）](https://www.luogu.com.cn/discuss/1427795) | zouchenjun | 2026-11-07 19:27:43 | 1 primary comparison record |
| CSP-J相似代码2（部分省区） | zouchenjun | 2026-11-07 20:12:04 | 2 supplied-excerpt records; original permalink is missing and must not be guessed |
| [LN-S00088 和 LN-S00089](https://www.luogu.com.cn/discuss/1427323?page=52) | chen_zhe | 2026-11-07 13:21:46 | 1 primary comparison record |
| [CSP 代码雷同大赏](https://www.luogu.com.cn/article/r62p05jf) | _colin1112_ | 2026-11-07 17:07:26 | 13 primary records plus supplementary notes on existing cases |

[The supplementary transcription record](website/sources/luogu-r62p05jf.md) explains the 16 explicit pair/problem comparisons, the separately attributed AI-only leads and the independent checks actually performed. Reported percentages are not independently reproduced metrics or official findings. This index attributes the source; it does not adopt the source's conclusions or republish its full article.

## Website origin and components

The preserved landing assets originate from this repository's [`project-pages` revision 18973f7](https://github.com/tangyixiao/CSP-2026/tree/18973f751ccddfa941150d2a3480cf6ecc5a29ac). See [the landing record](website/landing/README.md) and [source receipt](website/landing/source-receipt.json). The later project pages reuse that project's own assets and existing website implementation. An external template is not claimed as the author of the contestant archive.

| Component | Primary project | Distributed notice |
| --- | --- | --- |
| Primer CSS / Primitives / Octicons | [GitHub Primer](https://github.com/primer) | [Component notices](website/public/third-party-licenses.txt) |
| Monaco Editor | [Microsoft Monaco Editor](https://github.com/microsoft/monaco-editor) | Same notice file |
| giscus | [giscus](https://github.com/giscus/giscus) | Same notice file; comments are hosted on GitHub Discussions |
| Geist / Geist Mono fonts | [Geist font project](https://github.com/vercel/geist-font) | [Geist OFL](website/landing/assets/fonts/OFL-Geist.txt), [Geist Mono OFL](website/landing/assets/fonts/OFL-GeistMono.txt) |
| Barlow Condensed fonts | [Barlow project](https://github.com/jpt/barlow) | [Barlow OFL](website/landing/assets/fonts/OFL-BarlowCondensed.txt) |

The eight retained font files were identified from their embedded family names and license URLs. Their upstream SIL Open Font License texts are retained beside the files; the source for the copied notices is the matching family directories in [Google Fonts](https://github.com/google/fonts/tree/main/ofl). No font bytes were changed.

[website/DESIGN.md](website/DESIGN.md) records OIerDb and VitePress as design references; it does not claim that their application code or branding was copied. The new [browser proposal](docs/design/province-browser-review.md) separately records the real pages inspected for that proposal.


## Reading-view reference material

The [official NOI homepage](https://noi.cn/) was visually inspected on 2026-11-09 for a requested optional site theme: white surfaces, red navigation, dark blue-purple heading/active accents and pale gray sections. This is an appearance reference, not an affiliation or a copied official portal. No official logo, news banner or article image is imported. The NOI site appearance is implemented in the review branch, separately from the NOI Linux editor reading profiles; it has not been deployed.

The review implementation contains 29 original abstract regional SVG line drawings in [regions.js](website/src/regions.js), drawn for this project without external images or official emblems. Their regional cues are editorial illustrations, not maps or exclusive definitions of those places. JPEGs named `runtime-*` in `docs/design/` are screenshots of the running review implementation; the older PNG boards remain generated design discussion images.

The optional reading-view proposal uses [VS Code web](https://vscode.dev/), [Embarcadero Dev-C++ and its official screenshot](https://www.embarcadero.com/free-tools/dev-cpp/), and [Geany's screenshot gallery](https://www.geany.org/documentation/screenshots/) as appearance/interaction references inspected on 2026-11-09. The [NOI Linux 2.0 release list](https://www.noi.cn/gynoi/jsgz/2021-07-16/732450.shtml), published 2021-07-16, establishes the named release's bundled editors; it is not a claim about every current exam installation. Current Embarcadero Dev-C++ appearance does not identify an exact Orwell 5.x setup.

The design images are generated review illustrations, not captured third-party application screenshots or shipped editor implementations. They are not a record of actual compiler results, scores or exact UI version emulation. Referenced software branding, code, icons, screenshots and operating-system assets are not automatically covered by the project's Apache license. Any actual imported implementation or asset requires a separately recorded compatible license.
## Rights and corrections

The project-code license is [Apache-2.0](LICENSE), with scope in [NOTICE](NOTICE). Third-party archives, contestant files, official material, quoted sources, fonts and marks retain their own rights. Do not infer permission from a checksum, a source URL, or this index.

To correct a source record, include the original publication link, affected paths, archive revision and evidence for the correction. Use [Issues](https://github.com/tangyixiao/CSP-2026/issues/new/choose); use the [private security reporting route](https://github.com/tangyixiao/CSP-2026/security/advisories/new) for sensitive information. Never include passwords, tokens or private correspondence in a public report.
