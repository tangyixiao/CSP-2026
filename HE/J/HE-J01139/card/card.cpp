#include <bits/stdc++.h>
#define int long long

using namespace std;
const int M = 3e5 + 20;
const int N = 5e5 + 20;

int n, m;
int a[N];
int f[M];
bool vis[M];
int sum[M];
bool w;
bool l[N];

signed main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);	
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		if (i > 1)
		{
			if (a[i - 1] > a[i]) w = 1;		
		}
	}
	if (!w)
	{
		for (int i = 1; i <= m; i ++)
		{
			cout << n << ' ';
		}
	}
	else
	{
		int now = 0;
		for (int i = 1; i <= n; i ++)
		{
			memset (l, 0, sizeof l);
			for (int j = i; j <= n; j ++)
			{
				if (!vis[a[j]] && !l[a[j]])
				{
					f[a[j]] = ++ now;
					vis[a[j]] = 1;
				}
				else
				{
					for (int x = f[a[j]]; x <= now; x ++)
					{
						vis[a[x]] = 0;
						l[a[x]] = 1;
						cout << a[x] << ' ';
					}
					f[a[j]] = ++ now;
					vis[a[j]] = 1;
				}
			}
			for (int j = 1; j <= now; j ++)
			{
				if (vis[a[j]]) sum[a[j]] ++;
			}
		}
		for (int i = 1; i <= m; i ++)
		{
			cout << sum[i] << ' ';
		}	
	}
	return 0;
}
