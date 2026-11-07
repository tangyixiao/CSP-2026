#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define fi first
#define se second 
const int N = 5e5 + 10;
int n, m, a[N], pos[N], sz[N], ans[N];
vector<pii> gph[N];
void dfs(int u)
{
	sz[u] = 1;
	for (int i = 0; i < (int)gph[u].size(); ++i)
	{
		int v = gph[u][i].fi, w = gph[u][i].se;
		dfs(v);
		sz[u] += sz[v];
		ans[w] += sz[v];
	}
}

signed main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	for (int i = n; i >= 1; --i)
	{
		if (!pos[a[i]]) pos[a[i]] = i;
		gph[pos[a[i]] + 1].push_back({i, a[i]});
	}
	dfs(n + 1);
	for (int i = 1; i <= m; ++i) cout << ans[i] << ' ';
	cout << '\n';
	return 0;
}
//interesting
