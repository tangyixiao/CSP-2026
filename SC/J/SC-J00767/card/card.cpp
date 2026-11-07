#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5+5;
int a[maxn],vis[maxn],viss[maxn],f[maxn],id[maxn],dis[maxn];
int find(int x)
{
	if (!vis[x]) return x;
	return find(f[x]);
}
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
		f[i] = id[a[i]];
		id[a[i]] = i;
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = i;j <= n;j++)
		{
			vis[j] = 0;
		}
		for (int j = i;j <= n;j++)
		{
			int t = find(f[j]);
			if (t >= i)
			{
				for (int k = t;k < j;k++)
				{
					vis[k] = 1;
				}
			}
		}
		for (int j = i;j <= n;j++)
		{
			if (!vis[j]) viss[a[j]] = 1;
		}
		for (int j = 1;j <= m;j++)
		{
			if (viss[j])
			{
				dis[j]++;
				viss[j] = 0;
			}
		}
	}
	for (int i = 1;i <= m;i++)
	{
		cout << dis[i] << " ";
	}
	return 0;
}