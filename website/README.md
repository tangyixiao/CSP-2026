# CSP 2026 code browser

The existing CSP 2026 landing page and documentation stay at the site root. The code browser is published at [`/CSP-2026/code/`](https://tangyixiao.github.io/CSP-2026/code/), with Monaco syntax highlighting and a side-by-side diff editor. Source snapshots are served from the same website, so a first visit does not depend on a connection to `raw.githubusercontent.com`. Public source materials are linked from the browser so readers can check the original observations and files.

## Development

Use Node.js 22 and npm. Run these commands from the repository root:

```sh
npm --prefix website ci
npm --prefix website test
npm --prefix website run build
node website/scripts/package-site.mjs
```

For the Vite development server, run `npm --prefix website run build` once to generate the catalog and source packs, and then `npm --prefix website run dev`. `npm --prefix website run preview` serves the built code browser for local inspection. The combined Pages artifact is `website/site-dist/`, containing the landing page, `docs.html`, and the browser under `code/`.

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

Generated catalogs, `dist/`, `site-dist/`, and `node_modules/` should remain untracked.

## GitHub login and discussions

The site embeds [giscus](https://giscus.app/), which stores comments in this repository's [GitHub Discussions](https://github.com/tangyixiao/CSP-2026/discussions). Visitors use their own GitHub account through giscus's GitHub OAuth flow. The static website does not collect GitHub passwords or contain a shared account token.

`src/discussion-config.json` contains the public repository name, repository node ID, category name, and category node ID. These IDs are public configuration, not secrets. If the repository or discussion category changes, obtain the matching values from the [giscus configuration page](https://giscus.app/) and update that JSON file.

The repository owner must enable Discussions, select a supported category, and authorize the [giscus GitHub App](https://github.com/apps/giscus) for this repository. An enabled Discussions tab and public category IDs alone do not prove that the App can create discussions. A deployed verification should confirm that the widget loads for the intended page, and a visitor can authorize GitHub and publish a comment. Until that real flow is checked, report the App or OAuth verification as pending. The direct GitHub Discussions link remains useful if a browser blocks the embedded widget.

Discussion forms are stored in `.github/DISCUSSION_TEMPLATE/general.yml` and `q-a.yml` for the existing General and Q&A categories. Material submissions and corrections should include the original source, exact repository revision and file paths, concrete line or diff observations, and remaining uncertainty. No local comment counter or example comment is presented as real GitHub activity.

## Source materials

The material collection records claims and observations from public posts and any supplied excerpts. Linking or importing a post does not verify the post's conclusion. Keep the original quotation or summary, source link, underlying code, and independent verification distinct. A correction should identify the exact material and the text or comparison that needs changing.

The collection is a finite set of materials, not an exhaustive similarity scan of every province or candidate. A missing case is not a claim that no similar code exists.

## Pages delivery

`.github/workflows/code-browser-pages.yml` uses official GitHub Actions to check out the complete archive at depth 1, install dependencies, run checks, build the code browser and all source packs, assemble the complete static site, upload that artifact, and deploy it to the `github-pages` environment.

- A pull request builds and checks the site without deploying it.
- A push to `main`, or a manual workflow run on `main`, can deploy the assembled `website/site-dist/` artifact.
- The build job has `contents: read`. Only the deployment job receives `pages: write` and `id-token: write`.
- The Pages publishing source must be set to **GitHub Actions** in repository settings. The workflow does not push a generated branch or publish the source checkout itself.
- The shared `pages` concurrency group has cancellation disabled so an active Pages deployment is not interrupted by a newer run.

`scripts/package-site.mjs` validates the built catalog, the source-pack manifest, and the input directories before replacing only its fixed `website/site-dist/` output. It requires a complete snapshot at the catalog revision, no missing objects, selection of all expected objects, and available plus oversized counts equal to the catalog's unique blob count. Partial development builds cannot be packaged for deployment. The script copies the preserved landing site and places `dist/` under `code/`, then generates the current province directory, documentation table, `.nojekyll`, and source receipt, including the snapshot coverage counts. It rejects symbolic links in the packaged inputs and at the output directory.

The preserved landing assets originate from `project-pages` commit `18973f751ccddfa941150d2a3480cf6ecc5a29ac`. Font files retain their original bytes. Landing navigation and archive links are maintained in `landing/`; current directories are generated from the catalog at packaging time. Official test data is linked at `test-data/J/official` and `test-data/S/official`, and Zhejiang source records at `ZJ/sources`.

A successful local build proves that the artifact can be generated. A successful workflow run, live Pages response, source fetch, Monaco worker load, and GitHub comment submission are separate checks.
