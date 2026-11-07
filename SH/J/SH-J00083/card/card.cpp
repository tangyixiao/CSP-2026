#include <bits/stdc++.h>
using namespace std;
int a[500005], ans[300005], t[500005];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++)
	{
		memset(t, 0, sizeof t);
		int len = 0;
		for(int j = i; j <= n; j++)
		{
			int p = -1;
			for(int k = 1; k <= len; k++)
			{
				if(t[k] == a[j])
				{
					p = k;
					break;
				}
			}
			if(p == -1) t[++len] = a[i];
			else
			{
				for(int i = p; i <= len; i++) t[i] = 0;
				len = p - 1;
			}
		}
		for(int j = 1; j <= m; j++)
		{
			int p = -1;
			for(int k = 1; k <= len; k++)
			{
				if(t[k] == j)
				{
					p = k;
					break;
				}
			}
			if(p != -1) ans[j]++;
		}
	}
	for(int i = 1; i <= m; i++) cout << ans[i] << ' ';
	return 0;
}
