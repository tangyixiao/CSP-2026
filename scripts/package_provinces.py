"""Build verified per-region Git snapshots, optionally uploading to a draft release."""
import argparse
import hashlib
import http.client
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import zipfile
from urllib.parse import quote


def command(repo, *args):
    return subprocess.check_output(['git', '-c', 'safe.directory=' + str(Path(repo).resolve()),
                                    '-c', 'core.autocrlf=false', '-c', 'core.eol=lf', '-C', str(repo), *args])


def snapshot_files(repo, revision):
    regions = {}
    for row in command(repo, 'ls-tree', '-r', '-z', revision).split(b'\0'):
        if not row:
            continue
        metadata, raw_path = row.split(b'\t', 1)
        path = raw_path.decode('utf-8')
        parts = path.split('/')
        if len(parts) < 3 or not re.fullmatch(r'[A-Z]{2}', parts[0]) or parts[1] not in ('J', 'S', 'sources'):
            continue
        mode, kind, blob = metadata.decode().split()
        if kind != 'blob' or mode not in ('100644', '100755'):
            raise ValueError(f'Unsupported archive entry: {path}')
        regions.setdefault(parts[0], {})[path] = blob
    # Include every tracked file in each included region, not just source extensions.
    for code in regions:
        entries = {}
        for row in command(repo, 'ls-tree', '-r', '-z', revision, '--', code + '/').split(b'\0'):
            if not row:
                continue
            metadata, raw_path = row.split(b'\t', 1)
            mode, kind, blob = metadata.decode().split()
            if kind != 'blob' or mode not in ('100644', '100755'):
                raise ValueError('Only original regular files may be packaged')
            entries[raw_path.decode('utf-8')] = blob
        regions[code] = entries
    return regions


def verify_zip(package, expected):
    with zipfile.ZipFile(package) as archive:
        entries = [item for item in archive.infolist() if not item.is_dir()]
        actual = {item.filename.removeprefix('CSP-2026/') for item in entries}
        if len(entries) != len(expected) or actual != set(expected):
            raise ValueError('ZIP paths do not exactly match the pinned Git tree')
        for item in entries:
            path = item.filename.removeprefix('CSP-2026/')
            digest = hashlib.sha1(b'blob ' + str(item.file_size).encode() + b'\0')
            with archive.open(item) as stream:
                for chunk in iter(lambda: stream.read(1024 * 1024), b''):
                    digest.update(chunk)
            # Reading to EOF also checks the ZIP CRC.
            if digest.hexdigest() != expected[path]:
                raise ValueError(f'Archive bytes differ from Git: {path}')


def upload_asset(project, release_id, path):
    """Stream only to the official GitHub upload host; never send tokens to a proxy."""
    token = os.environ.get('GH_TOKEN')
    if not token:
        raise ValueError('GH_TOKEN is required for release uploads')
    connection = http.client.HTTPSConnection('uploads.github.com', timeout=180)
    endpoint = f'/repos/{project["repository"]}/releases/{release_id}/assets?name={quote(path.name)}'
    try:
        with path.open('rb') as stream:
            connection.request('POST', endpoint, body=stream, headers={
                'Authorization': 'Bearer ' + token,
                'Accept': 'application/vnd.github+json',
                'Content-Type': 'application/octet-stream',
                'Content-Length': str(path.stat().st_size),
                'User-Agent': 'CSP-2026-archive-release',
            })
            response = connection.getresponse()
            result = json.loads(response.read(65536))
        if response.status != 201 or result.get('state') != 'uploaded' or result.get('size') != path.stat().st_size:
            raise ValueError(f'Asset upload failed for {path.name}: HTTP {response.status}; {result.get("message", "size/state mismatch")}')
        with path.open('rb') as stream:
            expected = 'sha256:' + hashlib.file_digest(stream, 'sha256').hexdigest()
        if result.get('digest') != expected:
            raise ValueError(f'GitHub asset digest mismatch for {path.name}')
        return result
    finally:
        connection.close()


def build_region(repo, revision, code, expected, output, tag):
    if not re.fullmatch(r'[A-Z]{2}', code) or not re.fullmatch(r'[a-zA-Z0-9._-]+', tag):
        raise ValueError('Unsafe package name')
    target = output / f'CSP-2026-{code}-{tag}.zip'
    if target.exists():
        raise FileExistsError(target)
    command(repo, 'archive', '--format=zip', '--prefix=CSP-2026/', '--output=' + str(target), revision, '--', code)
    if target.stat().st_size >= 2 * 1024 ** 3:
        raise ValueError('Province ZIP exceeds the GitHub asset limit')
    verify_zip(target, expected)
    with target.open('rb') as stream:
        digest = hashlib.file_digest(stream, 'sha256').hexdigest()
    groups = {}
    for group in ('J', 'S'):
        files = [path for path in expected if path.startswith(code + '/' + group + '/')]
        if files:
            candidates = {path.split('/')[2] for path in files if len(path.split('/')) >= 4
                          and path.split('/')[2].upper().startswith(code + '-' + group)}
            groups[group] = {'files': len(files), 'contestantDirectories': len(candidates)}
    return target, {'province': code, 'filename': target.name, 'size': target.stat().st_size,
                    'sha256': digest, 'files': len(expected), 'groups': groups}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--revision', required=True)
    parser.add_argument('--output', type=Path, default=Path('work/release'))
    parser.add_argument('--tag')
    parser.add_argument('--upload', action='store_true')
    parser.add_argument('--release-id', type=int)
    parser.add_argument('--only', help='One region for a packaging smoke check')
    args = parser.parse_args()
    repo = Path(__file__).resolve().parents[1]
    project = json.loads((repo / 'project.json').read_text(encoding='utf-8'))
    tag = args.tag or project['release']['tag']
    revision = command(repo, 'rev-parse', '--verify', args.revision + '^{commit}').decode().strip()
    if not re.fullmatch(r'[0-9a-f]{40}', args.revision) or revision != args.revision:
        raise ValueError('Package a full pinned commit SHA, not a moving ref')
    if args.upload:
        if not args.release_id or args.only:
            raise ValueError('A draft release ID and the full region set are required for uploads')
        release = json.loads(subprocess.check_output(['gh', 'api', f'repos/{project["repository"]}/releases/{args.release_id}']))
        if not release['draft'] or release['target_commitish'] != revision or release['tag_name'] != tag:
            raise ValueError('Upload only to the matching draft release')
        existing_assets = {asset['name']: asset for asset in release['assets']}
    output = args.output.resolve()
    boundary = (repo / 'work').resolve()
    if not output.is_relative_to(boundary) or output == boundary:
        raise ValueError('Packaging scratch must stay inside this repository work/ directory')
    output.mkdir(parents=True, exist_ok=True)
    reserve = project['resources']['freeSpaceReserveGiB'] * 1024 ** 3
    if shutil.disk_usage(output).free < reserve:
        raise ValueError('Free space is below the configured reserve')
    regions = snapshot_files(repo, revision)
    if args.only:
        regions = {args.only: regions[args.only]}
    records = []
    for code, expected in sorted(regions.items()):
        if shutil.disk_usage(output).free < reserve:
            raise ValueError('Stop packaging before consuming the disk reserve')
        package, record = build_region(repo, revision, code, expected, output, tag)
        records.append(record)
        if args.upload:
            existing = existing_assets.get(package.name)
            if existing:
                if existing.get('digest') != 'sha256:' + record['sha256'] or existing['size'] != record['size']:
                    raise ValueError('Existing draft asset differs; inspect before replacing it')
            else:
                upload_asset(project, args.release_id, package)
            # Only the just-created, verified and uploaded package is disposable.
            package.unlink()
        print(json.dumps(record), flush=True)
    manifest = {'schemaVersion': 1, 'revision': revision, 'tag': tag, 'repository': project['repository'],
                'provinceCount': len(records), 'groupCount': sum(len(r['groups']) for r in records), 'archives': records}
    manifest_path = output / 'release-index.json'
    manifest_path.write_text(json.dumps(manifest, indent=2) + '\n', encoding='utf-8')
    checksums = output / 'SHA256SUMS'
    checksums.write_text(''.join(f'{r["sha256"]}  {r["filename"]}\n' for r in records), encoding='utf-8')
    if args.upload:
        for asset in (manifest_path, checksums):
            if asset.name in existing_assets:
                with asset.open('rb') as stream:
                    expected = 'sha256:' + hashlib.file_digest(stream, 'sha256').hexdigest()
                if existing_assets[asset.name].get('digest') != expected:
                    raise ValueError('Existing draft manifest differs; inspect before replacing it')
            else:
                upload_asset(project, args.release_id, asset)
        for record in records:
            record['url'] = f'https://github.com/{project["repository"]}/releases/download/{tag}/{record["filename"]}'
        manifest_path.unlink()
        checksums.unlink()
        output.rmdir()
    print(json.dumps({'verified': True, 'revision': revision, 'regions': len(records), 'groups': manifest['groupCount']}), flush=True)


if __name__ == '__main__':
    main()
