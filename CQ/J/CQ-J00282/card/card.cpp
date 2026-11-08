#include <bits/stdc++.h>
using namespace std;

long long n, m, a[514514], vis[514514], ans[514514], cnt, head[1919810], dp[514514];

struct edge
{
	long long next, to, w;
};
edge e[1919810];

void add(long long from, long long to, long long w)
{
	e[++cnt].to = to;
	e[cnt].w = w;
	e[cnt].next = head[from];
	head[from] = cnt;
}

void dfs(long long u, long long fa)
{
	dp[u] = 1;
	for(int i = head[u]; i; i = e[i].next)
	{
		long long v = e[i].to;
		if(v == fa)
		{
			continue;
		}
		dfs(v, u);
		dp[u] += dp[v];
	}
}

void dfs2(long long u, long long fa, long long s)
{
	ans[s] += dp[u];
	for(int i = head[u]; i; i = e[i].next)
	{
		long long v = e[i].to;
		if(v == fa)
		{
			continue;
		}
		dfs2(v, u, e[i].w);
	}
}

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		scanf("%lld", &a[i]);
	}
	vis[a[n]] = n;
	for(int i = n - 1; i >= 1; i--)
	{
		if(vis[a[i]] == 0)
		{
			vis[a[i]] = i;
			add(i + 1, i, a[i]);
		}
		else
		{
			add(vis[a[i]], i, 0);
			vis[a[i]] = i;
		}
	}
	dfs(n, 0);
	dfs2(n, 0, a[n]);
	for(int i = 1; i <= m; i++)
	{
		if(i == m)
		{
			cout << ans[i];
			break;
		}
		printf("%lld ", ans[i]);
	}
	return 0;
}
//114514
