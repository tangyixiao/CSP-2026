import { mountSiteShell } from './site-shell.js';
mountSiteShell();
const expansion = document.getElementById('all-regions');
const label = document.querySelector('[data-region-toggle-label]');
if (expansion && label) {
  const update = () => { label.textContent = expansion.open ? label.dataset.expandedLabel : label.dataset.collapsedLabel; };
  expansion.addEventListener('toggle', update); update();
}
