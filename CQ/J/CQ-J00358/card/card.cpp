#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int sum[500005], a[500005], nxt[500005];
int pre[300005], ans[300005];
struct Segment_tree {
	int l, r, sum, add;
}t[500005 * 4];
void build(int p, int l, int r) {
	t[p].l = l, t[p].r = r;
	if (l == r) {
		return; 
	}
	int mid = (l + r) >> 1;
	build(p * 2, l, mid);
	build(p * 2 + 1, mid + 1, r); 
}
void push_down(int p) {
	if (t[p].add) {
		t[p * 2].sum += t[p].add * (t[p * 2].r - t[p * 2].l + 1);
		t[p * 2 + 1].sum += t[p].add * (t[p * 2 + 1].r - t[p * 2 + 1].l + 1);
		t[p * 2].add += t[p].add;
		t[p * 2 + 1].add += t[p].add;
		t[p].add = 0;
	}
}
void push_up(int p) {
	t[p].sum = t[p * 2].sum + t[p * 2 + 1].sum;
}
void update(int p, int l, int r, int val) {
	if (l <= t[p].l && t[p].r <= r) {
		t[p].add += val;
		t[p].sum += (t[p].r - t[p].l + 1) * val;
		return;
	}
	push_down(p);
	int mid = (t[p].l + t[p].r) >> 1;
	if (l <= mid) {
		update(p * 2, l, r, val);
	}
	if (r > mid) {
		update(p * 2 + 1, l, r, val);
	}
	push_up(p);
}
int query(int p, int x) {
	if (t[p].l== t[p].r) return t[p].sum;
	int mid = (t[p].l + t[p].r) >> 1;
	push_down(p);
	if (x <= mid) {
		return query(p * 2, x);
	}
	else {
		return query(p * 2 + 1, x);
	}
}
signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	build(1, 1, n);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum[i] = i;
		if (!pre[a[i]]) {
			pre[a[i]] = i;
		}
		else {
			nxt[pre[a[i]]] = i;
			pre[a[i]] = i;
		}
	}
	int Rl = 0, Rr = 0;
	for (int i = 1; i <= n; i++) {
		if (nxt[i] == 0) continue;
		int j = nxt[i];
//	    cout << i << ' ' << j << ' ' << subc << '\n';
		int sub = query(1, i);
		int sub2 = query(1, j);
//		cout << sub << ' ' << sub2 << ' ' << i << ' ' << j << '\n';
//		cout << i - max(sub, sub2) << '\n';
		update(1, i, j - 1, i - max(sub, sub2));
	}
	for (int i = 1; i <= n; i++) {
//		cout << c[i] << ' ' << nxt[i] << '\n';
//		c[i] = c[i - 1] + c[i];
//		cout << query(1, i) << '\n';
		sum[i] -= query(1, i);
		ans[a[i]] = max(ans[a[i]], sum[i]); 
	}
	for (int i = 1; i <= m; i++) {
		if (i == m) cout << ans[i];
		else cout << ans[i] << ' ';
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1

*/
