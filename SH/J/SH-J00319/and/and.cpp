#include <bits/stdc++.h>
using namespace std;

int n, m;
long long a[200005], f[5][200005];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (m == n)
	{
		long long ans = a[1];
		for (int i = 2; i <= n; i++)
		{
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	else if (m == 1)
	{
		sort(a+1,a+n+1);
		cout << a[n];
		return 0;
	}
	else if (m == 2)
	{
		long long ans = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i-1; j++)
			{
				ans = max(ans,a[i]&a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				if (j == 1) f[i&1][1] = max(f[(i-1)&1][1],a[i]);
				else if (i >= j) f[i&1][j] = max(f[(i-1)&1][j],f[(i-1)&1][j-1]&a[i]);
			}
		}
		cout << f[n&1][m];
	}
	return 0;
}
