# Chongqing Senior contestant archive

This import preserves 2,470 files from 678 contestant directories under `CQ/S/` from the user-supplied local aggregate package `CSP-S2026.zip`. This material had previously been obtained locally; this change adds it to the repository.

- Package SHA-256: `b49f023dd358604c5501051a816823f8eb75f994fd96b43e817e3749efe50106`.
- Every added file matches its ZIP entry and extracted original by size, SHA-256 and Git blob ID. Reading each ZIP entry also verifies its CRC.
- Original contestant IDs, paths, filenames and bytes are preserved.
- Original distribution provenance has not been independently verified; the supplied package is not presented as an independently authenticated official archive.
- Aggregate manifest SHA-256: `143c69f57813cd2ec14aaaab367ca83ea0cea9fbe5cf307ba1f66dac3b2e7020`. To reproduce it, sort repository paths lexicographically; for each file hash its original bytes with SHA-256, then append UTF-8 path, NUL, lowercase hex SHA-256 and LF to a SHA-256 accumulator.
- Chongqing Junior files are not included in this supplied directory and are not part of this import.
