#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[500001];
int v[500001];
int vis[500001];
signed main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
		cin >> a[i];
	for(int i = 1; i <= n; i ++)
	{
		int cnt = 0;
		memset(v, 0, sizeof(v));
		for(int j = i; j <= n; j ++)
		{
			bool f = 0;
			for(int k = 1; k <= cnt; k ++)
			{
				if(v[k] == a[j])
				{
					f = 1;
					cnt = k - 1;
					break;
				}
			}
			if(f)
			{
				for(int k = cnt + 1; k <= n; k ++)
					v[k] = 0;
			}
			v[++cnt] = a[j];
		}
		for(int i = 1; i <= cnt; i ++)
			vis[v[i]] ++;
	}
	for(int i = 1; i <= m; i ++)
		cout << vis[i] << ' ';
	return 0;
}
