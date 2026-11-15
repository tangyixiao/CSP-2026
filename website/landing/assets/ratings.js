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
if ([...newsTopic.options].some(option=>option.value===parameters.get('newsTopic'))) newsTopic.value=parameters.get('newsTopic');
function updateNews() {
  let count=0;
  for (const item of document.querySelectorAll('[data-news-item]')) {
    const topicMatches=newsTopic.value==='all' || item.dataset.newsTopic===newsTopic.value;
    item.hidden=!topicMatches;
    if (!item.hidden) count++;
  }
  document.getElementById('news-filter-status').textContent=`当前显示 ${count} 条 CSP 通知`;
  document.getElementById('news-empty').hidden=count!==0;
  const url=new URL(location.href);
  url.searchParams.delete('newsProvince');
  if (newsTopic.value==='all') url.searchParams.delete('newsTopic'); else url.searchParams.set('newsTopic',newsTopic.value);
  history.replaceState(null,'',url);
}
const newsDetails=document.getElementById('related-news');
if (location.hash==='#related-news' || newsTopic.value!=='all') newsDetails.open=true;
window.addEventListener('hashchange',()=>{if(location.hash==='#related-news') newsDetails.open=true;});
newsForm.hidden=false;
newsForm.addEventListener('change',updateNews);
newsForm.addEventListener('reset',()=>{newsTopic.value='all'; updateNews();});
updateNews();
