#include <iostream>
#include <cstring>

#define int long long

int n, m;
int a[500005], b[300005];
int vis[300005];

void dfs(int depth)
{
	if (depth > n)
	{
		for (int i = 1; i <= m; i++)
		{
			if (vis[i])
			{
				b[i]++;
			}
		}
		return;
	}
	int x = a[depth];
	if (vis[x])
	{
		for (int i = vis[x]; i <= depth; i++)
		{
			vis[a[i]] = 0;
		}
	}
	vis[x] = depth;
	dfs(depth + 1);
}

signed main()
{
	std::ios::sync_with_stdio(false);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	std::cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		std::cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		memset(vis, 0, sizeof(vis));
		dfs(i);
	}
	for (int i = 1; i <= m; i++)
	{
		std::cout << b[i] << ' ';
	}
	
	return 0;
}
