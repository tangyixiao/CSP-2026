#include<bits/stdc++.h>
using namespace std;
#define N 500005
vector<int>mp[N];
int n, m, rt, ans, a[N], d[N], s[N], nxt[N];
void dfs (int u) {
	for (int v : mp[u]) dfs (v), s[u] += s[v];
}
signed main() {
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);
	ios::sync_with_stdio (0);
	cin.tie (0), cout.tie (0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i], s[a[i]]++;
	rt = a[n];
	for (int i = n - 1; i; i--) if (a[i] != rt && !nxt[a[i]]) nxt[a[i]] = a[i + 1], mp[a[i + 1]].emplace_back (a[i]);
	dfs (rt);
	for (int i = 1; i <= m; i++) cout << s[i] << ' ';
	return 0;
}
/*
freopen ("travel.in", "r", stdin);
freopen ("travel.out", "w", stdout);
freopen ("travel.in", "r", stdin);
freopen ("travel.out", "w", stdout);
freopen ("travel.in", "r", stdin);
freopen ("travel.out", "w", stdout);
*/