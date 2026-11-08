#include <bits/stdc++.h>
#define mk make_pair
#define F first
#define S second 
using namespace std;

const int MAXN = 5e5 + 5, MAXM = 5e5 + 5;
int n, m, ls[MAXN], lst[MAXM], vis[MAXN], cnt[MAXN], nxt[MAXN], ans[MAXN], in[MAXN];
vector<int> g[MAXN];

void Topsort() {
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (in[i] == 0) q.push(i);
		cnt[i] = 1;
	}
	while (!q.empty()) {
		int x = q.front(); q.pop();
		for (auto y : g[x]) {
			cnt[y] += cnt[x];
//			if (lst[x] != 0) cnt[y] --;
			if (--in[y] == 0) q.push(y);
		}
	}
}

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> ls[i];
	int flag = 0;
	for (int i = 1; i <= n - 1; i++) {
		if (ls[i] > ls[i + 1]) flag = 1;
	}
	if (!flag) {
		for (int i = n; i >= 1; i--) {
			cnt[ls[i]] ++;
			if (cnt[ls[i]] == 1) vis[ls[i]] = i; 
		}
		for (int i = 1; i <= m; i++) {
			cout << vis[i];
			if (i != m) cout << ' ';
		}
		return 0;
	}
	for (int i = n; i >= 1; i--) {
		lst[i] = vis[ls[i]];
		vis[ls[i]] = i;
	}
	nxt[n] = 1;
	for (int i = n - 1; i >= 1; i--) {
		if (lst[i] == 0) {
			nxt[i] = 1;
			g[i].push_back(i + 1), in[i + 1] ++; 
			continue;
		}
		g[i].push_back(lst[i]), in[lst[i]] ++;
	}
	Topsort();
	for (int i = 1; i <= n; i++) {
		if (nxt[i]) ans[ls[i]] = cnt[i];
	}
	for (int i = 1; i <= m; i++) {	
		cout << ans[i];
		if (i != m) cout << ' ';
	}
	return 0;
}
/*

7 3
3 1 2 1 3 2 3

10 3
3 1 2 1 3 2 3 1 2 1

4 3
1 2 1 3

1 1 1 1
*/ 
