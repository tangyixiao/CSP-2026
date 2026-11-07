#include <bits/stdc++.h>
using namespace std;
long long n, m, x[100005], maxn, k;
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> x[i];
		if (x[i] > maxn)
		{
			maxn = x[i];
			k = i;
		}
	}
	x[k] = 0;
	long long d = maxn;
	m--;
	while (m)
	{
		m--;
		maxn = 0;
		for (int i = 1; i <= n; i++)
		{
			if (x[i] > maxn)
			{
				maxn = x[i];
				k = i;
			}
		}
		d = (d & maxn);
		x[k] = 0;
	}
	cout << d;
}
