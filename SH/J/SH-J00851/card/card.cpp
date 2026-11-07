#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
struct node
{
	int pos;
	int situ;
}vis[300010];
int n, m, a[500010], s[500010];
int re[300010][500010];
vector<int> q;
int main()
{
	//freopen("card.in", "r", stdin);
	//freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i <= n;i++)
	{
		q.clear();
		memset(vis, 0, sizeof(vis));
		memset(s, 0, sizeof(s));
		int l = i;
		while (l <= m)
		{
			if (vis[a[l]].situ)
			{
				bool f = 0;
				for (auto x:q)
				{
					if (x == vis[a[l]].pos)
					{
						f = 1;
					}
					if (f)
					{
						s[x] = 1;
					}
				}
				
			}
			else
			{
				q.push_back(a[l]);
				vis[a[l]].situ = 1;
				vis[a[l]].pos = a[l];
			}
			l++;
			
		}
		for (auto x:q)
		{
			if (!s[a[l]])
			{
				re[i][a[l]] = 1;
			}
		}
	}
	long long ans;
	for (int i = 1;i <= m;i++)
	{
		ans = 0;
		for (int j = 1;j <= n;j++)
		{
			if (re[j][i]) ans++;
		}
		cout<< ans << " ";
	}
}
