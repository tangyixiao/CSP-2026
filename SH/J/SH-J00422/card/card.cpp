#include <bits/stdc++.h>
using namespace std;
int n, m, a[500020], pos[500020], cnt, c[500020], ans[500020];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		cnt = 0;
		for (int j = 1; j <= max(m, n); j++) pos[j] = c[j] = 0;
		for (int j = i; j <= n; j++)
		{
			if (pos[a[j]] == 0)
			{
				c[++cnt] = a[j];
				pos[a[j]] = cnt;
			}
			else
			{
				for (int k = pos[a[j]] + 1; k <= cnt; k++)
				{
					pos[c[k]] = 0;
					c[k] = 0;
				}
				cnt = pos[a[j]];
			}
		}
		for (int j = 1; j <= cnt; j++) ans[c[j]]++;
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}
