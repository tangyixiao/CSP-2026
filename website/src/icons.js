import code from '@primer/octicons/build/svg/code-16.svg?raw';
import copy from '@primer/octicons/build/svg/copy-16.svg?raw';
import search from '@primer/octicons/build/svg/search-16.svg?raw';
import discussion from '@primer/octicons/build/svg/comment-discussion-16.svg?raw';
import sun from '@primer/octicons/build/svg/sun-16.svg?raw';
import moon from '@primer/octicons/build/svg/moon-16.svg?raw';
import close from '@primer/octicons/build/svg/x-16.svg?raw';
import up from '@primer/octicons/build/svg/arrow-up-16.svg?raw';
import down from '@primer/octicons/build/svg/arrow-down-16.svg?raw';
import left from '@primer/octicons/build/svg/arrow-left-16.svg?raw';
import right from '@primer/octicons/build/svg/arrow-right-16.svg?raw';
import link from '@primer/octicons/build/svg/link-16.svg?raw';
import file from '@primer/octicons/build/svg/file-code-16.svg?raw';

const icons = { code, copy, search, discussion, sun, moon, close, up, down, left, right, link, file };

export function setIcon(element, name) {
  // SVG strings are fixed imports from the MIT-licensed Octicons package.
  element.innerHTML = icons[name] || '';
  const svg = element.querySelector('svg');
  svg?.setAttribute('aria-hidden', 'true');
  svg?.classList.add('octicon');
}

export function initializeIcons() {
  document.querySelectorAll('[data-icon]').forEach(element => setIcon(element, element.dataset.icon));
}
