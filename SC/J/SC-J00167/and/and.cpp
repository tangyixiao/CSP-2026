#include<bits/stdc++.h>
using namespace std;
int a[200010], trie[400010][2], tot = 1, cnt[400010], siz[400010];
inline void insert(int x)
{
	int u = 0;
	while(x)
	{
		int v = (x & 1);
		if(!trie[u][v])
		{
			trie[u][v] = ++tot;
		}
		u = trie[u][v];
		x >>= 1;
	}
	cnt[u]++;
	return;
}
inline void dfs(int u)
{
	siz[u] = cnt[u];
	if(trie[u][0])
	{
		dfs(trie[u][0]);
		siz[u] += siz[trie[u][0]];
	}
	if(trie[u][1])
	{
		dfs(trie[u][1]);
		siz[u] += siz[trie[u][1]];
	}
	return;
}
int n, m;
inline int ask(int x)
{
	int u = 0, ans = 0, cnt = 0;
	while(x)
	{
		int v = (x & 1);
		if(siz[u] >= m && siz[trie[u][v]] < m)
		{
			if(v && siz[trie[u][0]] >= m)
			{
				v = 0;
			}
			else
			{
				return ans;
			}
		}
		ans += (v << cnt);
		u = trie[u][v];
		cnt++;
		x >>= 1;
	}
	return ans;
}
int ans = 0;
//inline void dfs2(int u, int now, int cnt)
//{
//	if(trie[u][0] && siz[trie[u][0]] >= m)
//	{
//		ans = max(ans, now);
//		dfs2(trie[u][0], now, cnt + 1);
//	}
//	if(trie[u][1] && siz[trie[u][1]] >= m)
//	{
//		ans = max(ans, now + (1 << cnt));
//		dfs2(trie[u][0], now + (1 << cnt), cnt + 1);
//	}
//	return;
//}
//int dp[2010][2010];
int main(void)
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	if(n <= 2000)
	{
		for(int i = 1;i <= n;i++)
		{
			cin >> a[i];
			insert(a[i]);
		}
		dfs(0);
		for(int i = 1;i <= n;i++)
		{
			if(ans >= a[i])
			{
				continue;
			}
			ans = max(ans, ask(a[i]));
			int pp = __builtin_popcount(a[i]);
			vector<int> g;
			g.clear();
			for(int k = 0;k < 21;k++)
			{
				if(a[i] & (1 << k))
				{
					g.push_back(k);
				}
			}
			for(int k = 0;k <= (1 << pp);k++)
			{
				if(a[i] & (1 << k))
				{
					int fw = a[i];
					for(int kk = 0;kk < 21;kk++)
					{
						if(k & (1 << kk))
						{
							fw -= g[kk];
						}
					}
					ans = max(ans, ask(fw));
				}
			}
		}
		cout << ans;
	}
	else
	{
		for(int i = 1;i <= n;i++)
		{
			cin >> a[i];
			insert(a[i]);
		}
		dfs(0);
		for(int i = 1;i <= n;i++)
		{
			if(ans >= a[i])
			{
				continue;
			}
			ans = max(ans, ask(a[i]));
		}
		cout << ans;
	}
	return 0;
}
/*
5 3
31 3 1 15 7
*/