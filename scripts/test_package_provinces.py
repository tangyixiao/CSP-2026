import hashlib
import importlib.util
from pathlib import Path
import subprocess
import tempfile
import unittest
import zipfile

spec=importlib.util.spec_from_file_location('package_provinces',Path(__file__).with_name('package_provinces.py'))
packager=importlib.util.module_from_spec(spec)
spec.loader.exec_module(packager)

class ArchiveTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.work=Path(__file__).resolve().parents[1]/'work'
        cls.work.mkdir(exist_ok=True)

    def test_complete_original_paths_and_bytes(self):
        with tempfile.TemporaryDirectory(prefix='package-test-',dir=self.work) as temporary:
            root=Path(temporary)
            subprocess.run(['git','init','-q',str(root)],check=True)
            fixture_git=['git','-c','safe.directory='+str(root),'-C',str(root)]
            subprocess.run([*fixture_git,'config','core.autocrlf','false'],check=True)
            files={'SH/J/SH-J00001/card/.cpp':b'',
                   'SH/S/SH-S01518/crystal/icon.png.cpp':b'\x89PNG\0\xff\r\n',
                   'SH/S/SH-S01518/空 格/no-extension':b'int main(){}\r\n',
                   'SH/S/SH-S01518/original.bin':b'\0\1\2',
                   'SH/sources/record.md':b'Local supplied package.\n'}
            for name,data in files.items():
                path=root/name;path.parent.mkdir(parents=True,exist_ok=True);path.write_bytes(data)
            subprocess.run([*fixture_git,'add','.'],check=True)
            subprocess.run([*fixture_git,'-c','user.name=Archive test','-c','user.email=test@example.invalid','commit','-qm','test'],check=True)
            revision=packager.command(root,'rev-parse','HEAD').decode().strip()
            output=root/'work';output.mkdir()
            regions=packager.snapshot_files(root,revision)
            self.assertEqual(set(regions),{'SH'})
            package,record=packager.build_region(root,revision,'SH',regions['SH'],output,'archive-test')
            self.assertEqual(record['groups']['J']['files'],1)
            self.assertEqual(record['groups']['S']['files'],3)
            with zipfile.ZipFile(package) as archive:
                self.assertIsNone(archive.testzip())
                for path,data in files.items():self.assertEqual(archive.read('CSP-2026/'+path),data)
            self.assertEqual(record['sha256'],hashlib.sha256(package.read_bytes()).hexdigest())
            self.assertRaises(FileExistsError,packager.build_region,root,revision,'SH',regions['SH'],output,'archive-test')

    def test_rejects_mismatched_blob(self):
        with tempfile.TemporaryDirectory(prefix='package-test-',dir=self.work) as temporary:
            package=Path(temporary)/'archive.zip'
            with zipfile.ZipFile(package,'w') as archive:archive.writestr('CSP-2026/SH/S/SH-S00001/a.cpp',b'changed')
            with self.assertRaisesRegex(ValueError,'bytes differ'):
                packager.verify_zip(package,{'SH/S/SH-S00001/a.cpp':'0'*40})

if __name__=='__main__':unittest.main()
