#include <bits/stdc++.h>
using namespace std;
long long a[2005], n, m, maxn;
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (m == 1)
	{
		for (int i = 1; i <= n; i++)
		{
			if (a[i] >> maxn)
			{
				maxn = a[i];
			}
		}
		cout << maxn;
	}
	if (m == n)
	{
		for (int i = 1; i <= n; i++)
		{
			maxn = a[i] & maxn;
		}
		cout << maxn;
	}
	if (m == 2)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (i == j)
				{
					continue;
				}
				maxn = max(maxn, a[i] & a[j]);
			}
		}
		cout << maxn;
	}
	return 0;
}
