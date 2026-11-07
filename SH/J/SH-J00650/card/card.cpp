#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], ans[300005], b[500005], len, c[300005];
set <int> s;
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for(int k = 1;k <= n;k++)
	{
		b[1] = a[k];
		len = 1;
		memset(c, 0, sizeof(c));
		for(int i = k + 1;i <= n;i++)
		{
			if(upper_bound(b + 1, b + len + 1, a[i]) - lower_bound(b + 1, b + len + 1, a[i]) == 0)
			{
				b[++len] = a[i];
			}
			else
			{
				len = upper_bound(b + 1, b + len + 1, a[i]) - lower_bound(b + 1, b + len + 1, a[i]);
			}
		}
		for(int i = 1;i <= n;i++)
		{
			if(c[b[i]] == 0)
			{
				ans[b[i]]++;
				c[b[i]]++;
			}
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cout << ans[i] << " ";
	}
	return 0;
}
