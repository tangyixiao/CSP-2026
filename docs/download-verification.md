# 下载后的 SHA-256 校验 / Verify downloaded files

从同一 [archive-2026-11-08 发布](https://github.com/tangyixiao/CSP-2026/releases/tag/archive-2026-11-08) 下载所需地区 ZIP 和 `SHA256SUMS`，放进同一目录，并在该目录打开终端。下例使用已发布的浙江包文件名；换地区时只改 `$archive` / `archive` 的值。

Download your region ZIP and `SHA256SUMS` from the **same release**, place them in one directory and open a terminal there. These examples use the published Zhejiang filename; change only the archive variable for another region. They check one manifest entry, so other region ZIPs do not need to be present.

<a id="powershell"></a>

## Windows PowerShell

```powershell
$archive = 'CSP-2026-ZJ-archive-2026-11-08.zip'
$entries = @(Get-Content -LiteralPath .\SHA256SUMS | Where-Object {
    $_ -match '^[0-9A-Fa-f]{64}\s+\*?(.+)$' -and $Matches[1] -ceq $archive
})
if ($entries.Count -ne 1) { throw "Missing or duplicate checksum entry: $archive" }
$expected = ($entries[0] -split '\s+', 2)[0]
$actual = (Get-FileHash -LiteralPath $archive -Algorithm SHA256).Hash
if ($actual -ine $expected) { throw "SHA-256 mismatch: $archive" }
"SHA-256 OK: $archive"
```

<a id="linux"></a>

## Linux

```sh
archive='CSP-2026-ZJ-archive-2026-11-08.zip'
if entry=$(awk -v f="$archive" '$2 == f || $2 == ("*" f) { print; n++ } END { if (n != 1) exit 1 }' SHA256SUMS); then
    printf '%s\n' "$entry" | sha256sum --check -
else
    printf 'Missing or duplicate checksum entry\n' >&2
    false
fi
```

<a id="macos"></a>

## macOS

```sh
archive='CSP-2026-ZJ-archive-2026-11-08.zip'
if entry=$(awk -v f="$archive" '$2 == f || $2 == ("*" f) { print; n++ } END { if (n != 1) exit 1 }' SHA256SUMS); then
    printf '%s\n' "$entry" | shasum -a 256 --check -
else
    printf 'Missing or duplicate checksum entry\n' >&2
    false
fi
```

校验成功时，PowerShell 输出 `SHA-256 OK`，Linux/macOS 输出所选 ZIP 的 `OK`。清单缺项、重名项、文件缺失或哈希不一致时会报错，按下方步骤处理。

Success prints `SHA-256 OK` in PowerShell, or the chosen ZIP followed by `OK` in the Unix tools. Missing/duplicate manifest entries, missing files and mismatches fail the check.

## 校验失败时 / If verification fails

1. 确认 ZIP 文件名与清单中的名称完全对应，且两者来自同一发布版本。 / Confirm the exact filename and matching release.
2. 等下载完成后再校验；重新下载 ZIP 和清单，直连或加速入口均以同版清单为准。 / Wait for completion, then retry with the ZIP and manifest from that release.
3. 仍不一致时到 [Issues](https://github.com/tangyixiao/CSP-2026/issues/new/choose) 报告发布标签、文件名、获取入口、期望值与实际值。不要上传凭据。 / Report the tag, filename, download entry and expected/actual digests; omit credentials.

SHA-256 一致表示下载文件与发布清单中的副本一致。资料的版本和官方来源状态见[核验记录](verification-progress.md)。 / Matching SHA-256 confirms the downloaded file matches the release manifest. Consult the verification record for editions and official-source status.

命令选项参考 / Command references: [GNU SHA-2 utilities](https://www.gnu.org/software/coreutils/manual/html_node/sha2-utilities.html), [Perl shasum](https://perldoc.perl.org/shasum).
