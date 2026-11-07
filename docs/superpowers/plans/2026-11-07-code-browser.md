# Code browser implementation plan

> **For agentic workers:** Use superpowers:subagent-driven-development. Preserve existing source bytes and dirty checkouts.

**Goal:** Browse and compare archived submissions directly on the existing site and comment with GitHub login.

**Architecture:** A Vite/Monaco static app in `website/`, generated catalogs pinned to the archive commit, and giscus backed by this repository's Discussions. Existing landing assets are retained for deployment.

**Tech Stack:** JavaScript ESM, Vite, Monaco Editor, GitHub Pages and giscus.

**Spec:** `docs/superpowers/specs/2026-11-07-code-browser-design.md`

## Global constraints

- English source filenames, commits and PRs; Chinese visitor-facing UI.
- Do not modify contestant sources or the primary checkout's staged changes.
- Source metadata and comments must remain attributed and bounded by evidence.
- No credentials in the client or repository.

## Review focus

- Missing and ambiguous files must not silently select the wrong source.
- Rapid requests must not replace a newer selection.
- Hash links and discussion identity must remain stable across deployments.
- Large or binary submissions must remain safe to preview.
- Owner installation and visitor OAuth must not be represented as already complete.

## Tasks

- [ ] Generate group catalogs, attributed comparison shortcuts and invariant tests from the pinned Git tree.
- [ ] Implement the accessible workbench, source selectors and locally bundled Monaco view/diff.
- [ ] Configure real Discussions/giscus IDs and useful fallback; preserve landing and add navigation.
- [ ] Run focused tests, browser checks and production build; review the full diff.
- [ ] Publish English commits and PR, verify remote state, deploy the Pages update and verify the live app.
