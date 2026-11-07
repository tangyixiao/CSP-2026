#include <bits/stdc++.h>
using namespace std;

int a[1000005], p[1000005], ans[1000005], s[1000005];
int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int cur = 0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> p[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		cur = 0;
		for (int j = i; j <= n; ++j)
		{
			a[p[j]]++;
			if (a[p[j]] > 1)
			{
				while (s[cur] != p[j])
				{
					a[s[cur]]--;
					s[cur--] = 0;
				}
				a[p[j]]--;
			}
			else
			{
				s[++cur] = p[j];
			}
		}
		for (int j = 1; j <= cur; ++j)
		{
			s[i] = 0;
		}
		for (int j = 1; j <= m; ++j)
		{
			if (a[j] != 0) ans[j]++;
			a[j] = 0;
		}
	}
	for (int j = 1; j <= m; ++j)
	{
		cout << ans[j] << ' ';
	}
	return 0;
}
