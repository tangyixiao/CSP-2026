import { readFileSync } from 'node:fs';
import { renderSiteHeader } from '../shared/site-header.js';

// Numeric facts transcribed from the linked CCF table, independently of source coverage.
export const RATINGS = JSON.parse(readFileSync(new URL('../data/ratings-2026.json', import.meta.url), 'utf8'));
export const NEWS = JSON.parse(readFileSync(new URL('../data/news-2026.json', import.meta.url), 'utf8'));
const escape = value => String(value).replace(/[&<>"']/g, c => ({ '&': '&amp;', '<': '&lt;', '>': '&gt;', '"': '&quot;', "'": '&#39;' })[c]);
const number = value => value.toLocaleString('en-US');
const link = (url, label) => `<a href="${escape(url)}">${label} <span aria-hidden="true">↗</span></a>`;
const topics = { csp:'成绩与认证', certificate:'证书', rules:'称谓规范' };
const round2Certificate = NEWS.items.find(item => item.id === '949286');
const deadlineFormat = new Intl.DateTimeFormat('zh-CN', {
  timeZone: 'Asia/Shanghai', month: 'long', day: 'numeric', hour: '2-digit', minute: '2-digit', hourCycle: 'h23',
});

function renderDeadlines(deadlines) {
  return deadlines.map(({ label, at }) => `${escape(label)}截至 <time datetime="${escape(at)}">${deadlineFormat.format(new Date(at))}</time>`).join('，');
}

export function renderRelatedNews() {
  const items = NEWS.items.map(item => `<li data-news-item data-news-topic="${item.topic}"><div class="news-meta"><time datetime="${item.publishedAt}">${item.publishedAt}</time><span>全国</span><span>${topics[item.topic]}</span>${item.historical ? '<span>历史通知 · 办理期限已结束</span>' : ''}</div><h3>${link(item.url,escape(item.title))}</h3><p>${escape(item.summary)}${item.deadlines ? ` ${renderDeadlines(item.deadlines)}（北京时间）。` : ''}</p><small>来源：CCF / NOI 官网 · 正文核对 ${item.verifiedAt}</small></li>`).join('\n');
  return `<section class="news-section" aria-labelledby="related-news-title"><details id="related-news"><summary><h2 id="related-news-title">CSP 相关新闻 <span>（${NEWS.items.length} 条）</span></h2><span class="news-expand" aria-hidden="true"><span class="news-closed">展开查看 ⌄</span><span class="news-open">收起通知 ⌃</span></span></summary><div class="news-content"><p>核对日期：${NEWS.checkedAt}。仅收录直接讨论 CSP-J/S 认证的通知，按发布日期倒序。第一轮与第二轮、发布日期与办理期限分别标注。</p><p class="news-coverage">已收录 ${NEWS.items.length} 条官方通知，涵盖成绩评级、证书、申诉、违规处理、报名、资助、晋级及称谓规范。</p>
  <form class="news-filters rating-filters" aria-label="筛选相关新闻" hidden><label>主题<select id="news-topic"><option value="all">全部主题</option>${Object.entries(topics).map(([key,name])=>`<option value="${key}">${name}</option>`).join('')}</select></label><button type="reset">重置新闻筛选</button><p id="news-filter-status" role="status" aria-live="polite"></p></form>
  <ul class="news-list">${items}</ul><p id="news-empty" hidden>当前筛选下暂无已收录通知，可放宽筛选或查看官方各省新闻栏目。</p><nav class="results-links" aria-label="更多官方新闻">${link('https://noi.cn/xw/','全国新闻')}${link('https://noi.cn/gs/xw/','各省新闻')}${link('https://noi.cn/gs/lxfs/','各省组织单位联系方式')}</nav></div></details></section>`;
}

function renderNoticeDates() {
  return `<section class="feature notice-dates" aria-labelledby="notice-dates-title"><header><h2 id="notice-dates-title">第二轮证书办理</h2></header><div class="feature-body">
  <p>${renderDeadlines(round2Certificate.deadlines)}（北京时间）。</p>
  <p>${escape(round2Certificate.summary)}登录报名系统后，进入「活动列表 → 历史活动 → 对应活动 → 证书」。</p>
  <nav class="results-links" aria-label="第二轮证书办理入口">${link(RATINGS.scoreURL,'报名系统')}${link(round2Certificate.url,'CCF 证书公告')}</nav></div></section>`;
}

/** Lower provincial first-level cutoffs also change the second/third-level rules. */
export function ratingThresholds(group, firstCutoff) {
  const reference = RATINGS.groups[group]?.reference;
  if (!reference || !Number.isInteger(firstCutoff) || firstCutoff < 0) throw new Error('Invalid rating threshold');
  return firstCutoff >= reference[0]
    ? { second: reference[1], third: reference[2] }
    : { second: reference[2], third: null };
}

export function renderRatingSummary() {
  return `<section class="feature results-summary" aria-labelledby="results-summary-title">
    <header><b id="results-summary-title">第二轮成绩与评级已公布</b><time datetime="${RATINGS.publishedAt}">2026-11-13</time></header>
    <div class="feature-body"><p class="file-tools">全国一级基准线：<strong>CSP-J 252 分</strong> · <strong>CSP-S 159 分</strong></p>
    <p>一级认定须查看本省分数线；全国基准线与各省一级线不同。32 个地区的分数线、评级人数和六份官方名单已整理。</p>
    <nav class="results-links" aria-label="成绩与评级入口"><a href="ratings.html">查看各省分数线与评级说明 →</a><a href="ratings.html#related-news">CSP 相关新闻（${NEWS.items.length}）</a>${link(RATINGS.queryURL, '官方获奖查询')}${link(RATINGS.scoreURL, '个人成绩查询')}</nav><p><strong>第二轮证书</strong>：${renderDeadlines(round2Certificate.deadlines)}（北京时间）。<a href="ratings.html#notice-dates-title">查看办理方式 →</a></p></div>
  </section>`;
}

export function renderRatingsCSV() {
  const rows = [['年份','轮次','组别','地区代码','地区','一级分数线','一级人数','二级起点（未获一级）','三级起点（未获一二级）','全国一级基准线','官方来源','公告日期']];
  for (const [group, info] of Object.entries(RATINGS.groups)) {
    for (const row of info.regions) {
      const thresholds = ratingThresholds(group, row.firstCutoff);
      rows.push([2026,2,group,row.code,row.name,row.firstCutoff,row.firstCount,thresholds.second,thresholds.third ?? '不设三级',info.reference[0],RATINGS.rulesURL,RATINGS.publishedAt]);
    }
  }
  return '\uFEFF' + rows.map(row => row.map(value => `"${String(value).replaceAll('"', '""')}"`).join(',')).join('\r\n') + '\r\n';
}

export function renderRatingsPage({ archiveRegions = [] } = {}) {
  const available = new Set(archiveRegions);
  const regionOptions = RATINGS.groups.J.regions.slice().sort((a,b) => a.code.localeCompare(b.code)).map(row => `<option value="${row.code}">${row.name} ${row.code}</option>`).join('');
  const groupSections = Object.entries(RATINGS.groups).map(([group, info]) => {
    const rows = info.regions.map(row => {
      const { second, third } = ratingThresholds(group, row.firstCutoff);
      const archive = available.has(row.code) ? `<a href="code/browse.html?view=browse&amp;province=${row.code}&amp;group=${group}">浏览归档</a>` : '未收录';
      return `<tr data-region="${row.code}" id="${group}-${row.code}"><th scope="row">${row.name}</th><td><strong>${row.firstCutoff}</strong></td><td>${number(row.firstCount)}</td><td>${second}</td><td>${third ?? '不设三级'}</td><td>${archive}</td></tr>`;
    }).join('\n');
    return `<section class="rating-group" data-group="${group}" aria-labelledby="title-${group}"><div class="section-head"><h2 id="title-${group}">CSP-${group} · ${info.name}</h2></div>
    <p>全国一级／二级／三级基准线：<strong>${info.reference.join(' / ')} 分</strong>。一级共 <strong>${number(info.firstCount)} 人</strong>，比例 <strong>${info.firstPercent}%</strong>。</p>
    <nav class="results-links" aria-label="CSP-${group} 官方评级名单">${info.lists.map(({level,url}) => link(url, `官方${['一','二','三'][level-1]}级名单`)).join('')}</nav>
    <div class="rating-table-wrap" tabindex="0" role="region" aria-label="CSP-${group} 各地区分数线表，可横向滚动"><table class="rating-table"><caption>按一级分数线从高到低排列；二、三级起点含本分数，须排除已获更高等级者。一级人数来自官方表，不是参赛总人数。</caption><thead><tr><th scope="col">地区</th><th scope="col">一级线</th><th scope="col">一级人数</th><th scope="col">二级起点</th><th scope="col">三级起点</th><th scope="col">代码归档</th></tr></thead><tbody>${rows}</tbody></table></div></section>`;
  }).join('\n');
  return `<!doctype html>
<html data-site-shell="true" lang="zh-CN" data-theme="light" data-appearance="csp"><head>
<meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1"><meta name="color-scheme" content="light dark">
<title>CSP 2026 · 成绩、分数线与相关新闻</title><meta name="description" content="CSP-J/S 2026 分数线、评级名单与官方新闻，含证书、申诉、违规处理、报名及认证规则。">
<link rel="icon" type="image/svg+xml" href="favicon.svg"><link rel="stylesheet" href="assets/home.css"><link rel="stylesheet" href="assets/site-shell.css"><link rel="stylesheet" href="assets/ratings.css">
<script src="assets/theme.js"></script><script type="module" src="assets/ratings.js"></script></head><body>
<a class="skip-link" href="#content">跳到正文</a>${renderSiteHeader({root:'./',active:'ratings'})}
<main id="content" class="wrap results-page" tabindex="-1"><section class="hero"><div><h1>成绩与评级</h1><p>CSP-J/S 2026 · 第二轮 / Results &amp; ratings</p><p>官方公告：<time datetime="${RATINGS.publishedAt}">2026 年 11 月 13 日</time> · 本页核对：${RATINGS.checkedAt}</p></div></section>
<nav class="results-links results-primary" aria-label="官方查询入口">${link(RATINGS.scoreURL,'个人成绩与申诉结果')}${link(RATINGS.queryURL,'获奖信息与证书编号查询')}${link(RATINGS.listsURL,'评级名单公告')}${link(RATINGS.rulesURL,'官方评级规则')}<a href="ratings.csv" download>下载分数线 CSV ↓</a><a href="#related-news">相关新闻 ↓</a><a href="#title-J">直达分数线 ↓</a></nav>
${renderNoticeDates()}
${renderRelatedNews()}
<section class="feature results-explainer" aria-labelledby="rating-rules"><header><h2 id="rating-rules">先选组别和地区，再看对应等级</h2></header><div class="feature-body"><p>全国一级基准线用于名额与评级规则计算，各省一级线以官方附表为准。一级线达到或高于全国一级基准线的地区，按该组全国二、三级基准线确定相应起点。</p><p>一级线低于全国一级基准线的地区：CSP-J 二级从 114 分起，CSP-S 二级从 35 分起，均不设三级。二级须排除已获一级者，三级须排除已获一、二级者。</p><p>本页整理官方公开的分数线和人数；个人正式评级以官方名单、查询结果为准。</p></div></section>
<form id="rating-filters" class="rating-filters" aria-label="筛选分数线" hidden><label>组别<select id="rating-group"><option value="all">J / S 全部</option><option value="J">CSP-J 入门组</option><option value="S">CSP-S 提高组</option></select></label><label>地区<select id="rating-region"><option value="all">全部 32 个地区</option>${regionOptions}</select></label><button type="reset">重置筛选</button><p id="rating-filter-status" role="status" aria-live="polite"></p></form>
${groupSections}
<section aria-labelledby="rating-timeline"><div class="section-head"><h2 id="rating-timeline">成绩发布与申诉时间</h2></div><ol class="rating-timeline"><li><time datetime="2026-11-05T16:00:00+08:00">11 月 5 日 16:00</time>：初评成绩公示、申诉开始。</li><li><time datetime="2026-11-08T13:00:00+08:00">11 月 8 日 13:00</time>：申诉提交截止；同日 18:00 缴费截止。<strong>本次申诉窗口已结束。</strong></li><li><time datetime="2026-11-13">11 月 13 日</time>：评级规则、六份评级名单及违规处理公告发布；按成绩通知，11 月 13 日以后可登录个人账号查看申诉结果。</li></ol><p>${link(RATINGS.scoreNoticeURL,'成绩与申诉通知')} · ${link(RATINGS.appealNoticeURL,'申诉受理范围')}</p></section>
<section aria-labelledby="rating-faq"><div class="section-head"><h2 id="rating-faq">常见问题与相关资料</h2></div>
<details class="rating-faq"><summary>为什么全国基准线与本省一级线不同？</summary><p>全国基准线参与名额分配；一级分数线按地区公布。例如浙江 J 为 291 分、S 为 200 分，重庆 J 为 295 分、S 为 239 分。请以表中本人所在地区和组别为准。</p></details>
<details class="rating-faq"><summary>一级人数、代码归档人数能直接比较吗？</summary><p>官方表中的“总人数”指一级评级人数。代码归档按收到的文件目录统计，覆盖范围、统计对象均不同，不能据此计算本省参赛人数或评级比例。分数线覆盖官方表的 32 个地区，代码归档目前覆盖其中 ${available.size} 个地区。</p></details>
<details class="rating-faq"><summary>CSP 一级能称为一等奖吗？</summary><p>CSP-J/S 认证使用一级、二级、三级能力等级名称，不设置一等奖、二等奖、三等奖。${link(NEWS.items.find(item=>item.id==='930554').url,'CCF 称谓规范公告')}。</p></details>
<details class="rating-faq"><summary>在哪里查询个人成绩、奖项和证书？</summary><p>登录官方报名系统，进入对应活动的“成绩与申诉”查看个人成绩和申诉结果；在官方获奖信息查询页核对奖项及证书编号。申领或下载证书请查看<a href="#notice-dates-title">第二轮证书办理</a>。</p></details>
<details class="rating-faq"><summary>违规处理公告和代码比较是什么关系？</summary><p>${link(RATINGS.disciplineURL,'查看 CCF 官方违规处理公告')}。本归档的文件对比、相似度或目录信息不构成官方违规结论；处理认定应以 CCF 公告及相关组织单位通知为准。</p></details>
<nav class="results-links" aria-label="复盘资料"><a href="papers/">两轮试题 PDF</a><a href="code/browse.html?view=sources">资料来源与官方数据入口</a><a href="code/?mode=split">代码阅读与比较</a></nav></section>
<footer class="footer"><p>数据整理自 ${link(RATINGS.rulesURL,'CCF 官方评级规则及附表')}。数值与链接核对日期：${RATINGS.checkedAt}。</p><nav><a href="./">返回首页</a><a href="docs.html">使用文档</a></nav></footer></main></body></html>`;
}
