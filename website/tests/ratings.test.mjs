import test from 'node:test';
import assert from 'node:assert/strict';
import { RATINGS, ratingThresholds, renderRatingsPage, renderRatingsCSV } from '../scripts/ratings.mjs';

test('official rating coverage is independent of the 29-region code archive', () => {
  for (const [group, count] of [['J',9014],['S',6607]]) {
    const rows = RATINGS.groups[group].regions;
    assert.equal(rows.length, 32);
    assert.equal(new Set(rows.map(row => row.code)).size, 32);
    assert.equal(rows.reduce((sum, row) => sum + row.firstCount, 0), count);
    for (const code of ['HK','MO','NX']) assert.ok(rows.some(row => row.code === code));
    assert.ok(rows.every((row,i) => i === 0 || rows[i-1].firstCutoff >= row.firstCutoff));
  }
  const zj = group => RATINGS.groups[group].regions.find(row => row.code === 'ZJ');
  assert.deepEqual([zj('J').firstCutoff,zj('S').firstCutoff], [291,200]);
});

test('provincial rules handle below, equal and above the national reference', () => {
  assert.deepEqual(ratingThresholds('J', 251), { second:114, third:null });
  assert.deepEqual(ratingThresholds('J', 252), { second:184, third:114 });
  assert.deepEqual(ratingThresholds('J', 291), { second:184, third:114 });
  assert.deepEqual(ratingThresholds('S', 138), { second:35, third:null });
  assert.deepEqual(ratingThresholds('S', 159), { second:85, third:35 });
  assert.deepEqual(ratingThresholds('S', 200), { second:85, third:35 });
  assert.throws(() => ratingThresholds('X', 200), /Invalid/);
});

test('results ship six official lists, all 64 records and a UTF-8 CSV with source attribution', () => {
  const html = renderRatingsPage({ archiveRegions:['ZJ'] });
  assert.equal((html.match(/<tr data-region=/g) || []).length,64);
  assert.equal((html.match(/>浏览归档</g) || []).length,2);
  for (const info of Object.values(RATINGS.groups)) {
    assert.deepEqual(info.lists.map(item => item.level), [1,2,3]);
    for (const item of info.lists) {
      assert.equal(new URL(item.url).hostname, 'www.noi.cn');
      assert.ok(html.includes(item.url));
    }
  }
  assert.ok(html.includes('本次申诉窗口已结束'));
  assert.ok(html.includes('不是参赛总人数'));
  assert.ok(html.includes('个人正式评级以官方名单、查询结果为准'));
  assert.ok(!html.includes('undefined'));
  const csv = renderRatingsCSV();
  assert.equal(csv.charCodeAt(0),0xFEFF);
  assert.equal(csv.trim().split('\r\n').length,65);
  assert.match(csv, /"S","HB","湖北","138","177","35","不设三级"/);
  assert.match(csv, /"J","JS","江苏","252","618","184","114"/);
});
