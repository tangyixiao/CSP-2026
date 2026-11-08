# Chongqing Senior contestant archive

This import preserves 2,470 files from 678 contestant directories under `CQ/S/` from the user-supplied local aggregate package `CSP-S2026.zip`. This material had previously been obtained locally; this change adds it to the repository.

- Package SHA-256: `b49f023dd358604c5501051a816823f8eb75f994fd96b43e817e3749efe50106`.
- Every added file matches its ZIP entry and extracted original by size, SHA-256 and Git blob ID. Reading each ZIP entry also verifies its CRC.
- Original contestant IDs, paths, filenames and bytes are preserved.
- Original distribution provenance has not been independently verified; the supplied package is not presented as an independently authenticated official archive.
- Aggregate manifest SHA-256: `143c69f57813cd2ec14aaaab367ca83ea0cea9fbe5cf307ba1f66dac3b2e7020`. To reproduce it, sort repository paths lexicographically; for each file hash its original bytes with SHA-256, then append UTF-8 path, NUL, lowercase hex SHA-256 and LF to a SHA-256 accumulator.
- Cross-check: all 2,470 paths and file contents also match the separately supplied `重庆市/CSP-S2_2026_answers（已解密）.zip` (SHA-256 `4595b92f3548617e566cde8069db4253680b334ddcd00fb2dac4f23c795087da`).
- This Senior import does not include Junior files. The separately supplied Junior archive is handled in a separate pull request.
