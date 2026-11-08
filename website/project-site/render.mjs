import { cpSync, mkdirSync, writeFileSync } from 'node:fs';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import project from '../../project.json' with { type:'json' };

export const RELEASE_TAG = project.release.tag;
export const REPOSITORY = `https://github.com/${project.repository}`;
const sourceDirectory = dirname(fileURLToPath(import.meta.url));
const names = {
  AH:['安徽','Anhui'],BJ:['北京','Beijing'],CQ:['重庆','Chongqing'],FJ:['福建','Fujian'],GD:['广东','Guangdong'],GS:['甘肃','Gansu'],GX:['广西','Guangxi'],GZ:['贵州','Guizhou'],HA:['河南','Henan'],HB:['湖北','Hubei'],HE:['河北','Hebei'],HI:['海南','Hainan'],HL:['黑龙江','Heilongjiang'],HN:['湖南','Hunan'],JL:['吉林','Jilin'],JS:['江苏','Jiangsu'],JX:['江西','Jiangxi'],LN:['辽宁','Liaoning'],NM:['内蒙古','Inner Mongolia'],NX:['宁夏','Ningxia'],QH:['青海','Qinghai'],SC:['四川','Sichuan'],SD:['山东','Shandong'],SH:['上海','Shanghai'],SN:['陕西','Shaanxi'],SX:['山西','Shanxi'],TJ:['天津','Tianjin'],XJ:['新疆','Xinjiang'],YN:['云南','Yunnan'],ZJ:['浙江','Zhejiang'],
};
const copy = {
  'zh-CN':{
    nav:['首页','功能','下载与使用','社区'],preview:'新版网站预览',formal:'返回正式网站',language:'选择语言',theme:'选择主题',themes:['浅色','深色','跟随系统'],menu:'导航菜单',skip:'跳到正文',
    eyebrow:'CSP-J/S 2026 · 第二轮',headline:'CSP 2026<br>第二轮源代码归档',intro:'按省份、组别和考号查找选手提交。在线阅读、并排比对，也可下载原始归档。',browse:'打开代码库',download:'下载与使用',regions:'个地区',groups:'个组别',cases:'条比较材料',
    screen:'代码工作台 · 真实界面',try:'打开工作台 ↗',caption:'按考号查阅文件，选择 A、B 两份代码即可并排比对。图中为归档文件的实际阅读界面。',
    taskTitle:'从一份提交开始',taskText:'知道考号就可以直接搜索；也可以先选省份与组别，再按题目浏览。原始文件名和目录结构保留在档案中。',taskLink:'按考号查找 →',
    compareTitle:'看代码，也看差异',compareText:'将两份提交放到一起，查看具体修改行。每条讨论材料都保留来源，作者报告的相似度与文件逐字节是否一致分别呈现。',compareLink:'查看比较材料 →',
    coverage:'当前归档',coverageText:'已收录的地区与组别以本次发布的目录为准。所有入口都可以从站内浏览器继续检索。',
    featuresTitle:'查阅、比对，再回到原始文件',featuresIntro:'从选手提交到具体代码行，用同一份归档完成查找、阅读和交流。',
    findTitle:'找到一名选手的文件',findText:'按省份与 J/S 组别缩小范围，再输入考号、题目或文件名。保留特殊大小写、无扩展名文件与备份文件的原始路径。',
    diffTitle:'两份代码，逐行比较',diffText:'支持并排与内联差异、差异跳转、复制分享链接。源码字节摘要与忽略空白后的显示差异各有说明。',
    keepTitle:'下载保留原样',keepText:'可以下载单个文件、选手目录 ZIP，或整个省份的 J/S 归档。文件下载保留原始字节；压缩保存的大文件保留 .gz 后缀。',
    downloadsTitle:'下载与使用',downloadsIntro:'在线查阅不需要下载整份仓库。需要本地保存时，按文件、选手或省份选择范围。',snapshot:'2026-11-08 归档快照',snapshotMeta:'各省独立 ZIP · 包含已收录 J/S 与来源记录',release:'查看发布记录 ↗',
    downloadMode:'下载模式',international:'国际直连',domestic:'国内加速',internationalNote:'直连 GitHub 官方 Release；所有下载均保留原始内容。',domesticNote:'通过第三方 GH-Proxy 加速公开文件下载；请使用 SHA-256 校验。',proxy:'加速服务说明 ↗',
    provinceTitle:'按省份下载',search:'搜索省份或缩写',zip:'下载 ZIP ↓',empty:'没有匹配的省份，请尝试中文、英文或省份缩写。',checksums:'下载 SHA256SUMS',checksumsNote:'校验文件与各省 ZIP 一同保存在 Release。',
    singleTitle:'只需要一个文件',singleText:'在代码工作台中选中文件，点击“下载文件”。支持原始 CPP、文本、备份及其他归档文件。',singleLink:'进入代码工作台 →',
    folderTitle:'下载一名选手的目录',folderText:'在工作台中选择任意一份提交，再点“下载选手目录”。ZIP 保留选手目录内的文件名与相对路径。',
    gitTitle:'按范围检出 Git 仓库',gitText:'只在需要维护版本或增量同步时使用。下面以上海 S 为例：',
    limit:'GitHub 目录页只显示前 1,000 项。上海 S 实际有 1,505 个选手目录，最大考号为 SH-S01518；完整文件可在站内检索、直接访问或下载。',
    communityTitle:'一起完善这份归档',communityIntro:'补充缺失材料、报告文件问题，或围绕具体代码参与交流。',
    communityRows:[['＋','补充缺失材料','目前仍在征集宁夏、香港、澳门 J/S。请提供来源、组别与可核验的文件信息。'],['↗','报告文件问题','反馈缺失、损坏、路径错误或同一路径出现不同版本。'],['⌘','参与代码讨论','从具体文件或比较材料进入评论，使用 GitHub 登录即可参与。']],
    contribution:'贡献与来源要求',contributionText:'提交补充材料时保留原始文件，附上来源和校验信息；不要在公开 Issue、提交或评论中上传密码和凭据。',
    footer:'选手文件的原始内容与来源信息分别保留',readme:'归档说明',docs:'使用文档',issues:'反馈问题',
  },
  en:{
    nav:['Home','Features','Get started','Community'],preview:'Website preview',formal:'Open current website',language:'Choose language',theme:'Choose theme',themes:['Light','Dark','System'],menu:'Navigation menu',skip:'Skip to content',
    eyebrow:'CSP-J/S 2026 · Second round',headline:'CSP 2026<br>Contestant code archive',intro:'Find a submission by region, group and contestant ID. Read it online, compare two files, or download the original archive.',browse:'Open code browser',download:'Get the archive',regions:'regions',groups:'groups',cases:'comparison records',
    screen:'Code workbench · Actual interface',try:'Open workbench ↗',caption:'Find a contestant file, then select two files as A and B to compare them. This is the actual interface with archived code.',
    taskTitle:'Start with a submission',taskText:'Search by contestant ID, or select a region and group before choosing a problem. Original filenames and directory structures remain in the archive.',taskLink:'Find a contestant →',
    compareTitle:'Read the code. See the changes',compareText:'Compare two submissions and inspect individual changed lines. Source attribution is retained; reported similarity and independently checked byte identity are shown separately.',compareLink:'Browse comparisons →',
    coverage:'Archive coverage',coverageText:'These regions and groups are present in the current published catalog. Continue into the browser to search the complete file list.',
    featuresTitle:'Find a submission. Read the original',featuresIntro:'One archive for finding files, comparing code and discussing the details.',
    findTitle:'Find a contestant file',findText:'Choose a region and J/S group, then search by contestant, problem or filename. Original casing, extensionless filenames and backups retain their original paths.',
    diffTitle:'Compare two files line by line',diffText:'Use side-by-side or inline views, jump between changes and share the exact selection. Byte identity remains separate from differences shown after ignoring whitespace.',
    keepTitle:'Download the original bytes',keepText:'Download a file, a contestant directory ZIP or a region archive containing both groups. Oversized sources stored with a .gz suffix keep their compressed original.',
    downloadsTitle:'Download and get started',downloadsIntro:'You can read code without downloading the whole repository. For local use, choose a file, contestant directory or region.',snapshot:'Archive snapshot · 2026-11-08',snapshotMeta:'One ZIP per region · Available J/S groups and source records',release:'Release notes ↗',
    downloadMode:'Download mode',international:'International · GitHub',domestic:'China · Accelerated',internationalNote:'Direct links to GitHub Releases. Downloads preserve the original archive contents.',domesticNote:'Third-party GH-Proxy accelerates public downloads. Verify the downloaded files with SHA-256.',proxy:'About the proxy ↗',
    provinceTitle:'Download a region',search:'Search region or code',zip:'Download ZIP ↓',empty:'No matching region. Try its Chinese name, English name or code.',checksums:'Download SHA256SUMS',checksumsNote:'Checksums are published alongside the region ZIPs in the release.',
    singleTitle:'Download one file',singleText:'Select a file in the code browser and choose Download file. Original CPP, text, backup and other archived bytes are preserved.',singleLink:'Open code browser →',
    folderTitle:'Download a contestant directory',folderText:'Select any submission and choose Download contestant directory. The ZIP retains filenames and relative paths inside that contestant folder.',
    gitTitle:'Check out only the region you need',gitText:'Use Git when you need version history or incremental updates. This example checks out Shanghai Senior:',
    limit:'GitHub directory pages show only the first 1,000 entries. Shanghai Senior contains 1,505 contestant directories through SH-S01518. Use the online browser, direct links or downloads for the complete files.',
    communityTitle:'Help improve the archive',communityIntro:'Contribute missing materials, report file issues or discuss the code in context.',
    communityRows:[['＋','Contribute missing materials','Ningxia J/S, Hong Kong J/S and Macau J/S are still being sought. Include the source, group and verifiable file information.'],['↗','Report a file issue','Report missing or damaged files, incorrect paths or differing versions at one path.'],['⌘','Discuss the code','Open comments from a file or comparison and sign in with GitHub to take part.']],
    contribution:'Contributions and provenance',contributionText:'Keep the original files and include their source and verification information. Do not publish passwords or credentials in issues, commits or comments.',
    footer:'Original contestant files and their source records are preserved',readme:'Archive notes',docs:'Documentation',issues:'Report an issue',
  },
};
const pageNames = ['index','features','downloads','community'];
const escape = value => String(value).replace(/[&<>"']/g, character => ({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[character]));

export function provinceFilename(code) {
  if (!/^[A-Z]{2}$/.test(code)) throw new Error('Invalid province code');
  return `CSP-2026-${code}-${RELEASE_TAG}.zip`;
}

export function renderProjectPage(page, language, { catalog, caseCount = 39 } = {}) {
  if (!pageNames.includes(page) || !copy[language]) throw new Error('Unknown page or language');
  if (!catalog?.groups?.length || !/^[a-f0-9]{40}$/.test(catalog.revision)) throw new Error('A pinned catalog is required');
  const en = language === 'en', t = copy[language], assets = en ? '../assets/' : 'assets/', root = en ? '../../' : '../';
  const groups = new Map();
  for (const item of catalog.groups) {
    if (!/^[A-Z]{2}$/.test(item.province) || !['J','S'].includes(item.group)) throw new Error('Invalid catalog group');
    if (!groups.has(item.province)) groups.set(item.province, []);
    groups.get(item.province).push(item.group);
  }
  const provinces = [...groups.keys()].sort();
  const releaseUrl = `${REPOSITORY}/releases/tag/${RELEASE_TAG}`;
  const downloadBase = `${REPOSITORY}/releases/download/${RELEASE_TAG}/`;
  const originalLink = (url, label, className = '') => `<a class="${className}" data-download-original="${escape(url)}" href="${escape(url)}">${label}</a>`;
  const image = `<img src="${assets}workbench.png" alt="${escape(t.screen)}" width="1266" height="712" loading="lazy">`;
  const browserLink = `${root}code/`;
  let content = '';
  if (page === 'index') content = `<section class="intro"><p class="eyebrow">${t.eyebrow}</p><h1>${t.headline}</h1><p class="lede">${t.intro}</p><div class="hero-actions"><a class="button" href="${browserLink}">${t.browse} <span aria-hidden="true">↗</span></a><a href="downloads.html">${t.download} →</a></div><div class="facts"><span>${provinces.length} ${t.regions}</span><span>${catalog.groups.length} ${t.groups}</span><span>${caseCount} ${t.cases}</span></div></section>
  <figure class="workbench-figure"><div class="figure-toolbar"><span>${t.screen}</span><a href="${browserLink}">${t.try}</a></div><a class="workbench-image" href="${browserLink}">${image}</a><figcaption>${t.caption}</figcaption></figure>
  <section class="section"><div class="task-row"><h2>${t.taskTitle}</h2><div><p>${t.taskText}</p><a href="${browserLink}">${t.taskLink}</a></div></div><div class="task-row"><h2>${t.compareTitle}</h2><div><p>${t.compareText}</p><a href="${browserLink}?case=sd-j01423-sd-j01948-card">${t.compareLink}</a></div></div></section>
  <section class="section"><h2>${t.coverage}</h2><p class="section-lead">${t.coverageText}</p><div class="province-inline">${provinces.map(code=>`<a href="${browserLink}?province=${code}&group=S" title="${escape((names[code]||[code,code])[en?1:0])}">${code}</a>`).join('')}</div></section>`;
  if (page === 'features') content = `<section class="page-intro"><p class="eyebrow">${t.nav[1]}</p><h1>${t.featuresTitle}</h1><p>${t.featuresIntro}</p></section><section class="feature-section"><div><h2>${t.findTitle}</h2><p>${t.findText}</p></div><div class="filter-demo"><label>${en?'Region':'省份'}</label><div>${en?'Shanghai':'上海'} · SH</div><label>${en?'Group':'组别'}</label><div>CSP-S</div><label>${en?'Contestant ID':'考号'}</label><div>SH-S01518</div><a class="button" href="${browserLink}?province=SH&group=S&search=SH-S01518">${t.browse} ↗</a></div></section><section class="feature-section"><div><h2>${t.diffTitle}</h2><p>${t.diffText}</p></div><figure><a href="${browserLink}">${image}</a><figcaption>${t.caption}</figcaption></figure></section><section class="feature-section"><div><h2>${t.keepTitle}</h2><p>${t.keepText}</p></div><div><pre class="code-block">SH/S/SH-S01518/
├── crystal/crystal.cpp
└── subway/subway.cpp</pre><a href="downloads.html">${t.download} →</a></div></section>`;
  if (page === 'downloads') content = `<section class="page-intro"><p class="eyebrow">${t.nav[2]}</p><h1>${t.downloadsTitle}</h1><p>${t.downloadsIntro}</p></section><div class="release-row"><span class="release-mark" aria-hidden="true">↓</span><div><p class="release-title">${t.snapshot}</p><p class="release-meta">${t.snapshotMeta}</p></div><a href="${releaseUrl}">${t.release}</a></div>
  <div class="mode-bar"><span>${t.downloadMode}</span><div class="mode-buttons" role="group" aria-label="${t.downloadMode}"><button type="button" data-download-mode="domestic" aria-pressed="false">${t.domestic}</button><button type="button" data-download-mode="international" aria-pressed="true">${t.international}</button></div></div><p class="mode-note" data-mode-note="international">${t.internationalNote}</p><p class="mode-note" data-mode-note="domestic" hidden>${t.domesticNote} <a href="https://gh-proxy.com/docs/quick-start" target="_blank" rel="noopener noreferrer">${t.proxy}</a></p>
  <div class="download-heading"><h2>${t.provinceTitle}</h2><input id="province-search" type="search" placeholder="${t.search}" aria-label="${t.search}"></div><ul class="province-list">${provinces.map(code=>{const label=(names[code]||[code,code])[en?1:0];return `<li data-province="${escape(`${code} ${(names[code]||[code,code]).join(' ')}`)}"><div><p class="province-name">${escape(label)} <span class="province-groups">${code}</span></p><p class="province-groups">CSP-${[...groups.get(code)].sort().join(' / CSP-')}</p></div>${originalLink(downloadBase+provinceFilename(code),t.zip)}</li>`;}).join('')}</ul><p id="province-empty" hidden>${t.empty}</p><p class="download-notes">${originalLink(downloadBase+'SHA256SUMS',t.checksums)} · ${t.checksumsNote}<br>${t.limit}</p>
  <section class="section download-levels"><div><h2>${t.singleTitle}</h2><p>${t.singleText}</p><a href="${browserLink}">${t.singleLink}</a></div><div><h2>${t.folderTitle}</h2><p>${t.folderText}</p><a href="${browserLink}">${t.singleLink}</a></div></section><section class="section"><h2>${t.gitTitle}</h2><p class="section-lead">${t.gitText}</p><pre class="code-block">git clone --filter=blob:none --sparse ${REPOSITORY}.git
cd CSP-2026
git sparse-checkout add /SH/S/</pre></section>`;
  if (page === 'community') {
    const links=[`${REPOSITORY}/discussions/new/choose`,`${REPOSITORY}/issues/new/choose`,`${REPOSITORY}/discussions`];
    content=`<section class="page-intro"><p class="eyebrow">${t.nav[3]}</p><h1>${t.communityTitle}</h1><p>${t.communityIntro}</p></section><ul class="community-list">${t.communityRows.map(([icon,title,text],i)=>`<li><a href="${links[i]}"><span class="community-icon" aria-hidden="true">${icon}</span><div><h2>${title}</h2><p>${text}</p></div><span class="arrow" aria-hidden="true">→</span></a></li>`).join('')}</ul><section class="section"><h2>${t.contribution}</h2><p class="section-lead">${t.contributionText}</p><p class="section-lead"><a href="${REPOSITORY}/blob/main/CONTRIBUTING.md">${t.readme} ↗</a></p></section>`;
  }
  const otherLanguage = en ? `../${page}.html` : `en/${page}.html`;
  return `<!doctype html><html lang="${language}" data-theme="light"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1"><meta name="description" content="${escape(page==='index'?t.intro:t.downloadsIntro)}"><meta name="color-scheme" content="light dark"><meta name="robots" content="noindex"><title>${escape(t.nav[pageNames.indexOf(page)])} · CSP 2026</title><script src="${assets}theme.js"></script><link rel="stylesheet" href="${assets}site.css"></head><body><a class="skip" href="#main">${t.skip}</a><div class="preview-strip"><div class="wrap"><span>${t.preview}</span><a href="${root}">${t.formal} ↗</a></div></div><header class="site-header"><div class="wrap header-inner"><a class="brand" href="index.html"><span aria-hidden="true">⌘</span>CSP 2026</a><nav class="main-nav" aria-label="${t.menu}">${pageNames.map((name,i)=>`<a href="${name}.html"${page===name?' aria-current="page"':''}>${t.nav[i]}</a>`).join('')}</nav><div class="header-tools"><details class="picker"><summary aria-label="${t.language}">${en?'English':'简体中文'}</summary><div class="picker-menu"><a lang="zh-CN" href="${en?otherLanguage:page+'.html'}"${!en?' aria-current="true"':''}>简体中文</a><a lang="en" href="${en?page+'.html':otherLanguage}"${en?' aria-current="true"':''}>English</a></div></details><details class="picker theme-picker"><summary aria-label="${t.theme}"><span class="theme-current">${t.themes[0]}</span></summary><div class="picker-menu">${t.themes.map((label,i)=>`<button type="button" data-theme-choice="${['light','dark','system'][i]}" aria-pressed="${i===0}">${label}</button>`).join('')}</div></details><a href="${REPOSITORY}">GitHub ↗</a></div><button class="menu-toggle" type="button" aria-label="${t.menu}" aria-expanded="false" hidden>☰</button></div></header><main id="main" class="wrap">${content}</main><footer class="site-footer"><div class="wrap footer-inner"><p>CSP 2026 · ${t.footer}</p><nav><a href="${root}docs.html">${t.docs}</a><a href="${REPOSITORY}">GitHub</a><a href="${REPOSITORY}/issues/new/choose">${t.issues}</a></nav></div></footer><script type="module" src="${assets}site.js"></script></body></html>\n`;
}

export function writeProjectPreview(outputDirectory, options) {
  mkdirSync(resolve(outputDirectory,'en'), { recursive:true });
  mkdirSync(resolve(outputDirectory,'assets'), { recursive:true });
  for (const file of ['site.css','site.js','theme.js','download-mode.js','workbench.png']) {
    cpSync(resolve(sourceDirectory,file),resolve(outputDirectory,'assets',file));
  }
  for (const language of ['zh-CN','en']) for (const page of pageNames) {
    writeFileSync(resolve(outputDirectory,language==='en'?'en':'',page+'.html'),renderProjectPage(page,language,options));
  }
}
