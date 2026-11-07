# Code browser design

This is a working code browser: find a submission, compare it, and discuss it. The code should be visible immediately, with provenance available when needed.

## Reused projects

- [Primer CSS](https://github.com/primer/css) 22.3.3, MIT: the existing button, form and navigation styles. Primer CSS is maintained in KTLO mode; these established primitives fit a small vanilla JavaScript application without a framework migration.
- [Primer Primitives](https://github.com/primer/primitives) 11.10.0, MIT: light/dark semantic colors and sizing tokens. Only the two used themes are imported.
- [Octicons](https://github.com/primer/octicons) 19.42.0, MIT: individual SVG imports for search, files, copying, navigation and discussion. No hand-drawn icon alphabet.
- [Monaco Editor](https://github.com/microsoft/monaco-editor): the existing editor, syntax highlighting and comparison implementation.
- [giscus](https://github.com/giscus/giscus-component): the existing lazy comment widget, authentication UI and theme updates.

## Layout references

[OIerDb](https://github.com/OIerDb-ng/OIerDb) informed the search/filter/results hierarchy. [VitePress](https://github.com/vuejs/vitepress/tree/main/src/client/theme-default) informed the independently scrolling navigation and reduced narrow-screen layout. Their application code and branding were not imported; the shipped components above are the actual dependencies. Distributed licenses are in `public/third-party-licenses.txt`.

## Decisions

- A compact top bar and a 300px desktop file sidebar leave the main area for code. The mobile file list is a bounded, single-column list.
- Main controls and file identities use at least 14px; supporting text uses at least 13px. Code uses 15px. System sans is used for controls, monospace for code and identifiers.
- Case lists show contestants and the problem. The selected case shows a title and source link; its attributed claim, specific caveats and author/date are in one native disclosure.
- Successful loading does not leave a permanent explanatory banner. Loading, errors, ambiguous file matches and incomplete comparisons remain visible.
- The comment section has one heading and one GitHub discussion link. The giscus widget owns sign-in and comment-entry instructions.
- Keep the existing source catalog, byte checks, source packs, share URLs and discussion keys. This revision changes the presentation and reuses mature UI pieces.

## Acceptance evidence

Check the rendered desktop and narrow-screen views, both themes, code visibility, file and case selection, disclosures, errors, comparison controls and real giscus sign-in. Inspect computed font sizes and actual control bounds; stylesheet declarations alone are not sufficient.
