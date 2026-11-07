# CSP-2026

An archive of publicly released contestant files from the second round of CSP-J/S 2026, organized by province and group. Contestant IDs, problem names, filenames and file contents are preserved.

| Province | Junior (J) | Senior (S) |
| --- | --- | --- |
| Anhui (AH) | AH/J | AH/S |
| Beijing (BJ) | BJ/J | BJ/S |
| Fujian (FJ) | FJ/J | FJ/S |
| Gansu (GS) | GS/J | GS/S |
| Guangdong (GD) | GD/J | GD/S |
| Guangxi (GX) | GX/J | GX/S |
| Guizhou (GZ) | GZ/J | GZ/S |
| Hainan (HI) | — | HI/S |
| Hebei (HE) | HE/J | HE/S |
| Heilongjiang (HL) | HL/J | HL/S |
| Henan (HA) | HA/J | HA/S |
| Hubei (HB) | HB/J | HB/S |
| Hunan (HN) | HN/J | HN/S |
| Inner Mongolia (NM) | NM/J | NM/S |
| Jiangsu (JS) | JS/J | JS/S |
| Jiangxi (JX) | JX/J | JX/S |
| Jilin (JL) | JL/J | JL/S |
| Liaoning (LN) | LN/J | LN/S |
| Shaanxi (SN) | SN/J | SN/S |
| Shandong (SD) | SD/J | SD/S |
| Shanghai (SH) | SH/J | SH/S |
| Shanxi (SX) | SX/J | SX/S |
| Sichuan (SC) | SC/J | SC/S |
| Tianjin (TJ) | TJ/J | TJ/S |
| Xinjiang (XJ) | XJ/J | XJ/S |
| Yunnan (YN) | YN/J | YN/S |
| Zhejiang (ZJ) | ZJ/J | ZJ/S |

Contestant files are located at `province/group/contestant/problem/`. The Shandong J archive currently covers only the Jinan and Rizhao sites. Some oversized source files are stored with a `.gz` suffix; decompress them to restore the original bytes.

The original Zhejiang J and S archives and contestant answer summaries are stored under `ZJ/J/` and `ZJ/S/`. Titles, dates, original content and links for the three Zhejiang announcements are documented in [Zhejiang sources](ZJ/sources/web-sources.md). Git does not retain empty directories; extract the corresponding `answers.zip` to restore the complete original directory structure.

Zhejiang J has been compared file by file with its official archive. Guangxi S has been compared file by file with a locally supplied decrypted archive; its original source has not been independently verified. Hebei J and S have been checked against the supplied encrypted archives and accompanying MD5 manifests. The other provinces have not yet been individually checked against their official originals. Official test data for J and S is stored under `test-data/J/official/` and `test-data/S/official/`, respectively. This repository does not contain official scores.

If using a sparse checkout, expand a province or group as needed, for example:

```sh
git sparse-checkout add '/JS/'
git sparse-checkout add '/ZJ/J/'
```

Check available disk space first: the archive contains many small files, which can take substantially more space on some file systems.
