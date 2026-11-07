import config from './discussion-config.json';
import 'giscus';

const pending = new WeakMap();

export async function discussionKey(term) {
  const data = new TextEncoder().encode(term || 'archive-general');
  const digest = await crypto.subtle.digest('SHA-256', data);
  return `csp-2026-v1-${Array.from(new Uint8Array(digest), n => n.toString(16).padStart(2, '0')).join('')}`;
}

export function mountDiscussion(container, { term, title, theme = 'dark' }) {
  const token = {};
  pending.set(container, token);
  container.replaceChildren();
  const status = document.createElement('p');
  status.textContent = '正在连接 GitHub 评论…';
  status.setAttribute('role', 'status');
  const host = document.createElement('div'); host.className = 'giscus';
  host.setAttribute('aria-label', `${title || '当前代码'}的 GitHub 评论`);
  container.append(status, host);
  void discussionKey(term).then(key => {
    if (pending.get(container) !== token || !container.isConnected) return;
    const widget = document.createElement('giscus-widget');
    const attrs = { repo:config.repo, repoid:config.repoId, category:config.category,
      categoryid:config.categoryId, mapping:'specific', term:key, strict:'1',
      reactionsenabled:'1', emitmetadata:'0', inputposition:'top',
      theme:theme === 'light' ? 'light' : 'dark', lang:'zh-CN', loading:'lazy' };
    for (const [name, value] of Object.entries(attrs)) widget.setAttribute(name, value);
    status.hidden = true;
    host.append(widget);
  }).catch(() => { status.hidden = false; status.textContent = '评论加载失败，请刷新或打开全部讨论。'; });
}
