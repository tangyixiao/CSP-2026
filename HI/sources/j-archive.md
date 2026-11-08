# Hainan CSP-J 2026 source archive

The supplied `CSP-J2.zip` was linked by `xingtiankai2023` in the [Luogu source-collection discussion](https://www.luogu.com.cn/discuss/1427989). The archive was downloaded locally and checked on 2026-11-08. This record identifies the supplied community source and the checks performed.

- Original encrypted archive: 9,598,298 bytes; SHA-256 `22d3279da59a53182734c9cd59da77f7d433ff97682032c5fc8c701b3943b041`.
- All 2,937 file entries decrypted and passed AES authentication and size checks.
- All 2,880 records in the archive's internal MD5 listing matched their file sizes and MD5 values. The archive also contains 57 entries outside that listing.
- The MD5 listing covers 2,832 retained source files. The other 10 retained sources were checked against the supplied archive by size, SHA-256 and byte-for-byte Git blob readback.
- Retained 2,842 source files in 760 contestant directories: 2,838 `.cpp` files and four C++ files with no extension. They are stored under `HI/J/` after removing only the outer `CSP-J2/` wrapper.
- Excluded 95 non-source entries: five executables; 39 test inputs; 39 answer files; eight output files, including four names with no extension; two text metadata files; one PDF; and one editor configuration file.
- Original filenames, nested problem directories, line endings and file bytes are retained. Two `.cpp` entries contain NUL bytes, including an all-NUL placeholder; they are preserved as supplied source entries. The viewer may reject binary-like content while the original file remains available in the archive.

The four extensionless files belong to `HI-J00346`:

```text
HI/J/HI-J00346/string/and
HI/J/HI-J00346/string/card
HI/J/HI-J00346/string/string
HI/J/HI-J00346/travel/travel
```

Their contents were inspected as C++ and their exact Git blob hashes are recorded in the website's `source-overrides.json`. Only the matching paths and hashes receive this preview override.

The original archive, extraction credentials and detailed local verification manifests are not part of this repository. Git does not retain empty directories. These checks establish correspondence with the supplied archive and listing; they do not establish official judging results.
