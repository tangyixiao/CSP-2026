#include<bits/stdc++.h>
using namespace std;
vector<int> g[500005];
int n, m, a[500005], d[500005], v[500005], nt[500005], sz[500005];
void dfs(int x)
{
	sz[x] = 1;
	for (int i = 0; i < (int)g[x].size(); i++)
	{
		int y = g[x][i];
		dfs(y);
		sz[x] += sz[y];
	}
	if (x <= n)
	{
		d[a[x]] += sz[x];
	}
}
signed main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		v[a[i]] = i;
	}
	for (int i = n; i >= 1; i--)
	{
		g[v[a[i]] + 1].push_back(i);
	}
	dfs(n + 1);
	for (int i = 1; i <= m; i++)
	{
		cout << d[i] << " ";
	}
	return 0;
}
