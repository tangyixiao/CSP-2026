#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
int n, m;
int maxn = -1;
void dfs(int x, int num, int ans)
{
	if(ans <= maxn)
	{
		return;
	}
	if(num == m)
	{
		maxn = max(ans, maxn);
		return;
	}
	if(x == n + 1)
	{
		if(num != m)
		{
			return;
		}
		maxn = max(ans, maxn);
		return;
	}
	if(n - x + 1 == m - num)
	{
		dfs(x + 1, num + 1, (ans & a[x]));
		return;
	}
	if(num < m)
	{
		dfs(x + 1, num + 1, (ans & a[x]));
	}
	dfs(x + 1, num, ans);
}
signed main()
{
	freopen("and3.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	dfs(1, 0, ((1 << 30) - 1) * 2 + 1);
	cout << maxn;
	return 0;
}


