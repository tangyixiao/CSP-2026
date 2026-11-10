import test from 'node:test';
import assert from 'node:assert/strict';
import { fetchDiscussionSnapshot, normalizeSnapshot } from '../scripts/sync-discussion-metadata.mjs';

const syncedAt = '2026-11-09T16:00:00.000Z';
const now = () => new Date(syncedAt);
const key = `csp-2026-v1-${'a'.repeat(64)}`;
const node = (id, title = key, comments = 2) => ({ id, title, url: `https://github.com/tangyixiao/CSP-2026/discussions/${id}`, updatedAt: syncedAt, comments: { totalCount: comments }, reactions: { totalCount: 3 }, body: 'must never persist' });
const page = (nodes, hasNextPage = false, endCursor = null) => ({ ok: true, json: async () => ({ data: { repository: { discussions: { nodes, pageInfo: { hasNextPage, endCursor } } } } }) });

test('exhaustive pagination aggregates only stable mapping keys without bodies, duplicate threads or reply claims', async () => {
  const calls = [];
  const responses = [page([node('1'), node('2', 'general discussion')], true, 'cursor-1'), page([node('1'), node('3', key, 4)])];
  const snapshot = await fetchDiscussionSnapshot({ token: 'test-server-token', now, fetchImpl: async (url, options) => { calls.push({ url, options }); return responses.shift(); } });
  assert.equal(snapshot.complete, true);
  assert.equal(snapshot.totalThreads, 3);
  assert.equal(snapshot.syncedAt, syncedAt);
  assert.equal(snapshot.byKey[key].threadCount, 2);
  assert.equal(snapshot.byKey[key].commentCount, 6);
  assert.equal(snapshot.byKey[key].reactionCount, 6);
  assert.deepEqual(calls.map(call => JSON.parse(call.options.body).variables.after), [null, 'cursor-1']);
  assert.ok(calls.every(call => call.options.headers.Authorization === 'Bearer test-server-token'));
  assert.equal(JSON.stringify(snapshot).includes('test-server-token'), false);
  assert.equal(JSON.stringify(snapshot).includes('must never persist'), false);
  assert.match(snapshot.measures.comments, /replies not queried/);
});

test('a genuinely empty repository establishes a complete zero snapshot', async () => {
  const snapshot = await fetchDiscussionSnapshot({ token: 'token', now, fetchImpl: async () => page([]) });
  assert.equal(snapshot.availability, 'available');
  assert.equal(snapshot.complete, true);
  assert.equal(snapshot.totalThreads, 0);
  assert.equal(snapshot.syncedAt, syncedAt);
  assert.deepEqual(snapshot.byKey, {});
});

test('missing token, failed later page and page limits stay unknown instead of retaining partial or stale zero counts', async () => {
  const noToken = await fetchDiscussionSnapshot({ now, fetchImpl: () => assert.fail('must not fetch without a token') });
  let calls = 0;
  const failedPage = await fetchDiscussionSnapshot({ token: 'token', now, fetchImpl: async () => ++calls === 1 ? page([node('1')], true, 'next') : { ok: false } });
  const limited = await fetchDiscussionSnapshot({ token: 'token', now, maxPages: 1, fetchImpl: async () => page([node('1')], true, 'next') });
  const stale = normalizeSnapshot({ nodes: [node('1')], complete: false, syncedAt });
  for (const snapshot of [noToken, failedPage, limited, stale]) {
    assert.equal(snapshot.availability, 'unavailable');
    assert.equal(snapshot.complete, false);
    assert.equal(snapshot.totalThreads, null);
    assert.equal(snapshot.syncedAt, null);
    assert.equal(snapshot.checkedAt, syncedAt);
    assert.deepEqual(snapshot.byKey, {});
  }
});

test('GraphQL errors, repeated cursors and malformed mapped counts cannot masquerade as successful counts', async () => {
  const graphql = await fetchDiscussionSnapshot({ token: 'token', now, fetchImpl: async () => ({ ok: true, json: async () => ({ errors: [{ message: 'remote sensitive diagnostic' }] }) }) });
  const repeated = await fetchDiscussionSnapshot({ token: 'token', now, fetchImpl: async () => page([], true, 'same') });
  const malformed = normalizeSnapshot({ nodes: [{ ...node('1'), comments: { totalCount: null } }], complete: true, syncedAt });
  assert.equal(graphql.complete, false);
  assert.equal(JSON.stringify(graphql).includes('remote sensitive diagnostic'), false);
  assert.equal(repeated.reason, 'invalid-pagination');
  assert.equal(malformed.totalThreads, null);
  assert.equal(malformed.complete, false);
});
