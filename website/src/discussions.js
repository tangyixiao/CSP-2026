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
  const fallback = document.createElement('p');
  const link = document.createElement('a');
  link.href = `https://github.com/${config.repo}/discussions`;
  link.textContent = '在 GitHub Discussions 打开讨论区 ↗';
  link.target = '_blank'; link.rel = 'noopener noreferrer';
  fallback.append(link);
  const host = document.createElement('div'); host.className = 'giscus';
  host.setAttribute('aria-label', `${title || '当前代码'}的 GitHub 评论`);
  container.append(status, host, fallback);
  void discussionKey(term).then(key => {
    if (pending.get(container) !== token || !container.isConnected) return;
    const widget = document.createElement('giscus-widget');
    const attrs = { repo:config.repo, repoid:config.repoId, category:config.category,
      categoryid:config.categoryId, mapping:'specific', term:key, strict:'1',
      reactionsenabled:'1', emitmetadata:'0', inputposition:'top',
      theme:theme === 'light' ? 'light' : 'dark', lang:'zh-CN', loading:'lazy' };
    for (const [name, value] of Object.entries(attrs)) widget.setAttribute(name, value);
    status.textContent = '使用 GitHub 登录后，可在下方评论和回复。若评论未加载，可使用下方 GitHub 入口。';
    host.append(widget);
  }).catch(() => { status.textContent = '评论标识生成失败，请刷新或从 GitHub 打开讨论区。'; });
}
