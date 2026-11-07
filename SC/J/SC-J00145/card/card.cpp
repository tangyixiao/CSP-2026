#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[500005];
int c[500005];
int ans[5000005];
vector<int> G[500005];
int fa[500005];
int son[500005];
void dfs(int x)
{
	for (auto y : G[x])
		dfs(y), son[x] += son[y];
}
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
		fa[i] = i;
	for (int i = n; i >= 1; i--)
		cin >> a[i], c[a[i]] = i, son[i] = 1;
	for (int i = 1; i <= n; i++)
		if (c[a[i]] == i)
			G[i - 1].push_back(i), fa[i] = i - 1;
		else
			G[c[a[i]]].push_back(i), fa[i] = c[a[i]];
	dfs(1);
	for (int i = 1; i <= n; i++)
		if (fa[i] == i - 1)
			ans[a[i]] = max(ans[a[i]], son[i]);
		else
			ans[a[i]] = max(ans[a[i]], son[i] - 1);
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
	
	return 0;
}