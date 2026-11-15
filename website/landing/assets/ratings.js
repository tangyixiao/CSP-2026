import { mountSiteShell } from './site-shell.js';
mountSiteShell();

const form = document.querySelector('.rating-filters');
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
