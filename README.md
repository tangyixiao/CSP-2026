# CSP-2026

An archive of publicly released contestant files from the second round of CSP-J/S 2026, organized by province and group. Contestant IDs, problem names, filenames and file contents are preserved.

| Province | Junior (J) | Senior (S) |
| --- | --- | --- |
| Anhui (AH) | — | AH/S |
| Beijing (BJ) | — | BJ/S |
| Guangxi (GX) | GX/J | GX/S |
| Henan (HA) | HA/J | HA/S |
| Hubei (HB) | HB/J | HB/S |
| Hunan (HN) | HN/J | HN/S |
| Jiangsu (JS) | JS/J | JS/S |
| Liaoning (LN) | — | LN/S |
| Sichuan (SC) | — | SC/S |
| Shandong (SD) | — | SD/S |
| Shaanxi (SN) | SN/J | SN/S |
| Tianjin (TJ) | TJ/J | TJ/S |
| Zhejiang (ZJ) | ZJ/J | ZJ/S |

Contestant files are located at `province/group/contestant/problem/`.

The original Zhejiang J and S archives and contestant answer summaries are stored under `ZJ/J/` and `ZJ/S/`. Titles, dates, original content and links for the three Zhejiang announcements are documented in [Zhejiang sources](ZJ/sources/web-sources.md). Git does not retain empty directories; extract the corresponding `answers.zip` to restore the complete original directory structure.

Zhejiang J has been compared file by file with its official archive. Guangxi S has been compared file by file with a locally supplied decrypted archive; its original source has not been independently verified. The other provinces have not yet been individually checked against their official originals. Official test data for J and S is stored under `test-data/J/official/` and `test-data/S/official/`, respectively. This repository does not contain official scores.

If using a sparse checkout, expand a province or group as needed, for example:

```sh
git sparse-checkout add '/JS/'
git sparse-checkout add '/ZJ/J/'
```

Check available disk space first: the archive contains many small files, which can take substantially more space on some file systems.
