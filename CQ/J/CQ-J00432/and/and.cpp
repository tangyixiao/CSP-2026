#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, m, s, a[200005];
signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 30; i >= 0; i--)
	{
		int x = 0;
		for (int j = 1; j <= n; j++)
		{
			if ((a[j] & s) != s)
			{
				continue;
			}
			if (a[j] & (1ll << i))
			{
				x++;
			}
		}
		if (x >= m)
		{
			s |= (1ll << i);
		}
	}
	cout << s;
	return 0;
}
