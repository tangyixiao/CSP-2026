#include <bits/stdc++.h>
using namespace std;
int n, m, d[200005];
long long a[200005], ans, dp[200005];
int main()
{
	freopen("ans.in", "r", stdin);
	freopen("ans.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	if(m == n)
	{
		ans = a[1];
		for(int i = 2;i <= n;i++)
		{
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	else if(m == 1)
	{
		cout << a[n];
		return 0;
	}
	dp[1] = a[n];
	for(int i = 2;i <= m;i++)
	{
		long long maxx = 0;
		int p;
		for(int j = 1;j <= n;j++)
		{
			if(d[j] == 1)
			{
				continue;
			}
			if(maxx < dp[i - 1] & a[j])
			{
				maxx = dp[i - 1] & a[j];
				p = j;
			}
		}
		dp[i] = maxx;
		d[p] = 1;
	}
	cout << dp[m];
	return 0;
}
