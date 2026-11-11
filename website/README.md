# CSP 2026 code browser

The national archive homepage is the actual [`/CSP-2026/`](https://tangyixiao.github.io/CSP-2026/) root, with catalog-derived region cards, search and random actions. Regional browsing is [`/CSP-2026/code/browse.html?view=browse`](https://tangyixiao.github.io/CSP-2026/code/browse.html?view=browse); the dedicated reader and comparison workbench is [`/CSP-2026/code/`](https://tangyixiao.github.io/CSP-2026/code/), with Monaco syntax highlighting and a side-by-side diff editor. Source snapshots are served from the same website, so a first visit does not depend on a connection to `raw.githubusercontent.com`. Public source materials are linked from the browser so readers can check the original observations and files. The root documentation remains available at `docs.html`.

The root initially highlights five regions. Expanding **全部地区** adds the other
24 as illustrated cards, each with its own J/S links and catalog-derived count.
The packager includes all 29 WebP assets at the site root. Dark appearance adjusts
the image brightness, overlay and captions together; light appearance retains its
existing treatment.

The root navigation also links the [paper library](../papers/README.md). Its static
page and preserved PDFs are copied from `papers/` to `site-dist/papers/`, providing
same-origin browser viewing and downloads. The source manifest identifies public
copies and reading editions, including the Gym editions' standard-I/O adaptation.

## Illustrated presentation

The corrected 2026-11-10 revision follows the maintainer-approved [root home and NOI appearance](../docs/design/root-home-noi-approved.png) and [Classic Plus reader](../docs/design/devcpp-classic-plus-approved.png) boards. The default uses white surfaces, ink text and blue controls. Optional NOI appearance has a separate masthead and full red navigation with a navy active state. Dev-C++ is an independently selected Classic Plus/Consolas reading profile; the CSP reader remains the default. Actual filenames, code and metadata come from the archive. See [the corrected design record](../docs/design/root-noi-classic-plus.md).

`src/assets/regions/` contains 29 separate AI-generated regional illustrations, each optimized to a 1280 × 427 WebP. Together they use 1,791,746 bytes (1.71 MiB). [The public asset manifest](src/assets/regions/manifest.json) records the generator, common prompt and each region's subject. `src/regions.js` uses explicit region-to-image URLs so Vite includes the assets; unsupported codes return no image rather than another region's landmark.

To optimize native originals without copying a second PNG set into the product, provide a local JSON file with `entries: [{ code, path }]`, where each `path` is the absolute native image location, and run:

```sh
node website/scripts/optimize-region-art.mjs --manifest work/illustrated-redesign/image-inputs.json
node --test website/tests/regions.test.mjs
```

The encoder defaults to the cross-platform `ffmpeg` command, or a compatible existing executable selected with `FFMPEG_PATH`. It processes images sequentially, validates existing outputs before skipping, and tries WebP quality 82/74/66 against a 240 KiB individual budget. The 29-image total budget is 5 MiB. Current files all meet the budget at quality 82. The local input manifest may contain machine paths and must remain in `work/`; the public source manifest must not contain those paths. Native originals remain in their original tool output location.

The full region asset check has passed for all 29 actual files, including container/raster parsing, dimensions, distinct hashes and budgets; the bundled image codec also decoded all files while creating an internal QA contact sheet. The integrated revision passed 69/69 local Node tests and the Vite frontend build, retaining the existing Monaco size warning. Desktop validation used 1280 pixels and mobile validation 390 pixels; the mobile page had no horizontal overflow, and all regional image mappings and the menu were checked. Current CI, complete source packaging and deployment still require their separate verification records.

## Development

Use Node.js 22 and npm. Run these commands from the repository root:

```sh
npm --prefix website ci
npm --prefix website test
npm --prefix website run build
node website/scripts/package-site.mjs
```

The full build above requires a complete source checkout; use CI for it when working in a partial clone. Reuse a compatible existing dependency installation before running `npm ci` again. `npm --prefix website run preview` serves an existing build. The combined Pages artifact is `website/site-dist/`, containing the landing page, `docs.html`, and the browser under `code/`.

For a bounded local preview in a partial checkout, generate only the tree catalog and stream the already-published public source buckets on demand:

```powershell
npm --prefix website run catalog
$env:CSP_USE_PUBLISHED_SOURCES = '1'
npm --prefix website run dev -- --port 4173
```

Open `http://127.0.0.1:4173/browse.html` for the national browser and `http://127.0.0.1:4173/` for reading/comparison. The optional Vite proxy is development-only, targets this project's fixed public Pages path, and strips authorization/cookie headers. The client still verifies each file's Git blob ID. A blob absent from the published snapshot cannot be invented by the proxy. This mode does not create a complete source artifact and must not be packaged as one. Locally sampled byte sizes remain partial; complete CI builds fill all available sizes.

The archive browser represents each exact original contestant directory as a folder. Opening it lists all archived files and nested directories, including backups, empty files and download-only formats; the outer search or problem filter never hides its other files. File rows provide reading, comparison and original-file links, and the directory can be downloaded with the existing ZIP action. Reading navigation retains a link back to that folder and the original list scope.

The scope selector supports nationwide aggregation, one fixed province and a selected set of provinces. Search and sorting operate across the complete selected scope, rather than separately within province sections. File-count and byte metrics use the whole directory, and unknown values remain last. All selected catalog shards are fetched with at most four concurrent metadata requests; failures are labeled as partial results with a retry action. Cached shards are reused when filters change. Source bodies are not prefetched for folder cards. The default batch is 60 contestant folders, with 120 and 240 options and an explicit next-batch control. Scope, filters, order, batch size and exact directory identities are URL-addressable.

Discovery, source attribution, random directory/problem navigation and two-file comparison remain available. The default reading view is CSP; Dev-C++/Geany are manually selected presentation profiles, separate from the optional NOI site appearance. No contestant program is executed.

The browser's Vite base is relative (`./`) so its assets and worker files work at the repository's `/CSP-2026/code/` path. Keep the trailing slash when linking to that directory. Monaco is bundled from the `monaco-editor` npm package, including its worker; viewing code does not require VS Code to be installed.

## Catalog and source revisions

`scripts/generate-catalog.mjs` creates `public/catalog/index.json` and one catalog shard per province and J/S group. This catalog step reads the Git tree, including paths and blob IDs, without reading every source blob.

The build also runs `scripts/generate-source-packs.mjs` to snapshot the indexed source blobs. The original file bytes are base64 encoded in same-origin `public/source-packs/` buckets keyed by the first three characters of each Git blob ID. Base64 preserves the bytes, including original line endings, without treating source text as executable markup. The viewer decodes the selected source for display and comparison. It reads the built snapshot rather than fetching each selected file from `raw.githubusercontent.com`.

A complete release build needs all indexed source blobs available locally. CI checks out the complete archive at depth 1 and generates the packs strictly; a partial local catalog or a missing-blob development snapshot must not be deployed. The viewer limits an individual raw source file to 2 MiB; larger entries should be opened through their GitHub source link.

The default source revision is `HEAD`. To build a catalog for an existing full commit, set `SOURCE_REVISION` before building. For example, in PowerShell:

```powershell
$env:SOURCE_REVISION = git rev-parse HEAD
npm --prefix website run build
Remove-Item Env:SOURCE_REVISION
```

The requested commit, tree objects, and indexed source blobs must exist locally. The generated index records the resolved full Git commit in `revision`; the source packs and viewer use that same fixed revision. The packager reads the **built** catalog in `dist/catalog/index.json`, uses the same revision for landing-page directory links, and writes it into `site-dist/source-receipt.json`. It never substitutes a guessed revision or the old landing-page commit.

Catalog metadata has specific limits:

- A source-like extension or backup extension is a path classification, not a verification of file contents, encoding, compilability, or authenticity.
- `size: null` means the byte size was not collected. It does not mean an empty file. The generator deliberately avoids `git ls-tree -l`, which could fetch every blob in a partial clone.
- Candidate and problem searches are navigation aids derived from paths. Retained archive paths remain the source of truth.
- Metrics computed after loading two files describe their text or bytes. They do not establish why the files are similar, an official result, or a misconduct finding. Algorithmic similarity requires separate review and context.

Generated catalogs, source packs, discussion snapshots, `dist/`, `site-dist/`, and `node_modules/` should remain untracked. Source generation reuses its existing `cat-file --batch-check` size observations to fill both preview files and download-only extras. `sizeAvailability` and `sizeCoverage` report whether that metadata is complete.

## GitHub login and discussions

The site embeds [giscus](https://giscus.app/), which stores comments in this repository's [GitHub Discussions](https://github.com/tangyixiao/CSP-2026/discussions). Visitors use their own GitHub account through giscus's GitHub OAuth flow. The static website does not collect GitHub passwords or contain a shared account token.

`src/discussion-config.json` contains the public repository name, repository node ID, category name, and category node ID. These IDs are public configuration, not secrets. If the repository or discussion category changes, obtain the matching values from the [giscus configuration page](https://giscus.app/) and update that JSON file.

The repository owner must enable Discussions, select a supported category, and authorize the [giscus GitHub App](https://github.com/apps/giscus) for this repository. An enabled Discussions tab and public category IDs alone do not prove that the App can create discussions. A deployed verification should confirm that the widget loads for the intended page, and a visitor can authorize GitHub and publish a comment. Until that real flow is checked, report the App or OAuth verification as pending. The direct GitHub Discussions link remains useful if a browser blocks the embedded widget.

Discussion forms are stored in `.github/DISCUSSION_TEMPLATE/general.yml` and `q-a.yml` for the existing General and Q&A categories. Material submissions and corrections should include the original source, exact repository revision and file paths, concrete line or diff observations, and remaining uncertainty. No local comment counter or example comment is presented as real GitHub activity.

`node website/scripts/sync-discussion-metadata.mjs` creates a timestamped read-only snapshot using a server-side `GH_TOKEN`/`GITHUB_TOKEN`. It reads thread metadata and top-level comment/reaction totals, not message bodies. The UI aggregates unique linked threads by raw contestant directory. Single-file terms, recorded cases and their unique file pairs can be associated; arbitrary hashed pairs remain explicitly unmapped. Failed or incomplete synchronization produces unknown values, never fabricated zero. The token is never written into frontend assets. CI creates and copies this snapshot after the source build.

## Source materials

The material collection records claims and observations from public posts and any supplied excerpts. Linking or importing a post does not verify the post's conclusion. Keep the original quotation or summary, source link, underlying code, and independent verification distinct. A correction should identify the exact material and the text or comparison that needs changing.

The collection is a finite set of materials, not an exhaustive similarity scan of every province or candidate. A missing case is not a claim that no similar code exists.

The [supplementary Luogu article record](sources/luogu-r62p05jf.md) accounts for 16 explicit pair/problem comparisons and separately transcribes 30 AI-only candidate pairs whose problem was unspecified. Author-reported percentages remain separate from the browser's computed byte/text comparison.

## Pages delivery

The bilingual project-site preview is published at `/preview/` with four pages,
language-preserving navigation, light/dark/system themes and domestic/direct
download modes. The formal landing page remains in place until visual approval.
`project.json` holds the repository facts, release tag and download proxy setting.

Each source pane offers an original-file download and a ZIP of the complete
tracked contestant directory, including non-preview files. Original bytes are
verified against Git blob IDs. Browser ZIP creation is limited to 64 MiB; larger
downloads can use the verified region archives in the Release.

The manually dispatched `Package province archive release` workflow packages the
pinned commit one region at a time, validates each ZIP against its Git tree, and
uploads 29 ZIPs plus `SHA256SUMS` and `release-index.json` to the matching draft.
It does not publish the release automatically. Downloads keep third-party proxy
URLs separate from official GitHub URLs and never forward credentials.

`.github/workflows/code-browser-pages.yml` uses official GitHub Actions to check out the complete archive at depth 1, install dependencies, run checks, build the code browser and all source packs, assemble the complete static site, upload that artifact, and deploy it to the `github-pages` environment.

- A pull request builds and checks the site without deploying it.
- Pull requests retain a three-day `catalog-review` artifact containing only the generated catalog and discussion metadata, so reviewers can inspect complete size ordering without downloading source packs or replacing the formal homepage.
- A push to `main`, or a manual workflow run on `main`, can deploy the assembled `website/site-dist/` artifact.
- The build job has `contents: read` and `discussions: read`. Only the deployment job receives `pages: write` and `id-token: write`.
- The Pages publishing source must be set to **GitHub Actions** in repository settings. The workflow does not push a generated branch or publish the source checkout itself.
- The shared `pages` concurrency group has cancellation disabled so an active Pages deployment is not interrupted by a newer run.

`scripts/package-site.mjs` validates the built catalog, the source-pack manifest, and the input directories before replacing only its fixed `website/site-dist/` output. It requires a complete snapshot at the catalog revision, no missing objects, selection of all expected objects, and available plus oversized counts equal to the catalog's unique blob count. Partial development builds cannot be packaged for deployment. The script copies the preserved landing site and places `dist/` under `code/`, then generates the current province directory, documentation table, `.nojekyll`, and source receipt, including the snapshot coverage counts. It rejects symbolic links in the packaged inputs and at the output directory.

The preserved landing assets originate from `project-pages` commit `18973f751ccddfa941150d2a3480cf6ecc5a29ac`. Font files retain their original bytes. Landing navigation and archive links are maintained in `landing/`; current directories are generated from the catalog at packaging time. Official test data is linked at `test-data/J/official` and `test-data/S/official`, and Zhejiang source records at `ZJ/sources`.

A successful local build proves that the artifact can be generated. A successful workflow run, live Pages response, source fetch, Monaco worker load, and GitHub comment submission are separate checks.
