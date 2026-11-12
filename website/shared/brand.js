// Original CSP identity: navy outer letters, a smaller curved crimson S.
// Paths keep the approved silhouette independent of installed display fonts.
export const brandPaths = Object.freeze({
  c: 'M160 0H66C35 0 21 15 10 43L3 63C-1 78 0 87 12 96L5 104H121L137 66L116 78C110 82 103 84 92 84H62C44 84 39 77 44 63L53 40C58 25 68 19 83 19H111L142 39Z',
  s: 'M274 10H203C178 10 161 19 155 34C149 48 157 57 173 62L214 74C225 77 220 83 208 83H174L146 74L134 104H222C247 104 264 94 269 79C274 65 265 55 250 50L207 37C195 33 204 27 216 27H267Z',
  p: 'M283 0H376C405 0 423 17 414 42C405 66 389 72 368 72H323L318 85C316 91 321 96 337 104H252L277 88L293 19ZM343 20L334 50H356C371 50 380 42 382 34C386 23 377 20 368 20Z',
});

export function renderBrandMark() {
  return `<svg class="csp-mark" xmlns="http://www.w3.org/2000/svg" viewBox="0 0 420 104" width="420" height="104" aria-hidden="true" focusable="false"><path fill="var(--brand-navy,#29255c)" d="${brandPaths.c}"/><path fill="var(--brand-red,#d22525)" d="${brandPaths.s}"/><path fill="var(--brand-navy,#29255c)" fill-rule="evenodd" d="${brandPaths.p}"/></svg>`;
}

export function renderBrandFavicon() {
  return `<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 128 128"><rect width="128" height="128" rx="24" fill="#29255c"/><path fill="#fff" d="M100 26H63C43 26 32 35 29 48C26 59 33 67 47 71L74 79C82 82 79 87 69 87H36L27 103H69C90 103 101 93 103 80C105 69 98 62 84 58L57 50C49 47 53 42 63 42H95Z"/><path fill="#d22525" d="M47 71L74 79C82 82 79 87 69 87H36L27 103H69C90 103 101 93 103 80Z"/></svg>\n`;
}
