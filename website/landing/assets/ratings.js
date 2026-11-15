import { mountSiteShell } from './site-shell.js';
mountSiteShell();

const form = document.getElementById('rating-filters');
const group = document.getElementById('rating-group');
const region = document.getElementById('rating-region');
const status = document.getElementById('rating-filter-status');
const parameters = new URLSearchParams(location.search);
if ([...group.options].some(option => option.value === parameters.get('group'))) group.value = parameters.get('group');
if ([...region.options].some(option => option.value === parameters.get('province'))) region.value = parameters.get('province');
function update() {
  let count = 0;
  for (const section of document.querySelectorAll('.rating-group')) {
    section.hidden = group.value !== 'all' && section.dataset.group !== group.value;
    for (const row of section.querySelectorAll('tbody tr')) {
      row.hidden = region.value !== 'all' && row.dataset.region !== region.value;
      if (!section.hidden && !row.hidden) count++;
    }
  }
  status.textContent = `当前显示 ${count} 条地区／组别记录`;
  const url = new URL(location.href);
  for (const [key, value] of [['group', group.value], ['province', region.value]]) {
    if (value === 'all') url.searchParams.delete(key); else url.searchParams.set(key, value);
  }
  history.replaceState(null, '', url);
}
form.hidden = false;
form.addEventListener('change', update);
form.addEventListener('reset', () => { group.value = 'all'; region.value = 'all'; update(); });
update();

const newsForm = document.querySelector('.news-filters');
const newsTopic = document.getElementById('news-topic');
const newsRegion = document.getElementById('news-region');
for (const [control,key] of [[newsTopic,'newsTopic'],[newsRegion,'newsProvince']]) {
  if ([...control.options].some(option=>option.value===parameters.get(key))) control.value=parameters.get(key);
}
function updateNews() {
  let count=0,localCount=0;
  for (const item of document.querySelectorAll('[data-news-item]')) {
    const topicMatches=newsTopic.value==='all' || item.dataset.newsTopic===newsTopic.value;
    const regionMatches=newsRegion.value==='all' || item.dataset.newsRegion==='national' || item.dataset.newsRegion===newsRegion.value;
    item.hidden=!(topicMatches && regionMatches);
    if (!item.hidden) { count++; if(item.dataset.newsRegion!=='national') localCount++; }
  }
  const missingLocal=!['all','national'].includes(newsRegion.value) && localCount===0;
  document.getElementById('news-filter-status').textContent=missingLocal ? `当前地区和主题暂无已收录地方通知，显示 ${count} 条全国通知` : `当前显示 ${count} 条通知；按地区筛选时保留全国通知`;
  document.getElementById('news-empty').hidden=count!==0;
  const url=new URL(location.href);
  for (const [key,value] of [['newsTopic',newsTopic.value],['newsProvince',newsRegion.value]]) {
    if (value==='all') url.searchParams.delete(key); else url.searchParams.set(key,value);
  }
  history.replaceState(null,'',url);
}
const newsDetails=document.getElementById('related-news');
if (location.hash==='#related-news' || newsTopic.value!=='all' || newsRegion.value!=='all') newsDetails.open=true;
window.addEventListener('hashchange',()=>{if(location.hash==='#related-news') newsDetails.open=true;});
newsForm.hidden=false;
newsForm.addEventListener('change',updateNews);
newsForm.addEventListener('reset',()=>{newsTopic.value='all'; newsRegion.value='all'; updateNews();});
updateNews();
