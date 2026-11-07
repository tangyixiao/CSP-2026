#include <bits/stdc++.h>

using namespace std;

#define int long long

int n, m;
int a[500010];
int cnt;
int now[500010];
int ans[500010];
int F;

signed main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		if(a[i] < a[i - 1]) F = 1;
	}
	for(int i = 1; i <= n; i ++)
	{
		for(int j = i; j <= n; j ++)
		{
			if(!cnt)
			{
				cnt ++;
				now[cnt] = a[j];
			}
			else
			{
				int f = 0;
				for(int k = cnt; k >= 1; k --)
				{
					if(now[k] < a[j] && (!F)) break;
					if(now[k] == a[j])
					{
						cnt = k;
						now[cnt] = a[j];
						f = 1;
						break;
					}
				}
				if(!f)
				{
					cnt ++;
					now[cnt] = a[j];
				}
			}
		}
		for(int k = 1; k <= cnt; k ++)
		{
			ans[now[k]] ++;
		}
		cnt = 0;
	}
	for(int i = 1; i <= m; i ++)
	{
		cout << ans[i] << ' ';
	}
	return 0;
}
