# Contributing

Chinese and English contributions are welcome. Use Issues to report a concrete
file or website problem, Discussions to share materials or discuss code, and a
pull request for a reviewable archive or website change.

## Archive materials

- Identify the region, J/S group, year, source URL or supplied-package origin.
- Preserve original filenames, candidate directories and file bytes. Do not fix
  contestant code or discard a source-named entry because it contains binary data.
- Include the package SHA-256 and available official manifests. State which checks
  were actually performed; a supplied local package is not official authentication.
- Do not publish extraction passwords, tokens, private correspondence or unrelated
  files. Provide reproducible evidence for differing versions; do not silently
  overwrite an existing submission.

## Website changes

Use the existing static project pages and code browser. Keep the Chinese and
English pages in sync and use actual project content. Run `npm test --prefix
website`; check desktop/mobile presentation, keyboard navigation, language,
theme and download behavior. CI builds the complete source snapshot.

Similarity records must retain source attribution and distinguish an author's
reported score, computed text differences and independently checked byte identity.
Do not turn a similarity observation into an unsupported misconduct conclusion.

## Pull requests and releases

Explain the concrete change, provenance, validation and known unfinished work.
Keep changes scoped, use English metadata and preserve unrelated work. Releases
pin a commit and provide per-region ZIPs, `SHA256SUMS` and a machine-readable
manifest. Confirm uploaded assets before describing a release as published.

Existing contestant and official-data rights remain with their respective owners;
adopting this project's website/community template does not relicense them.
