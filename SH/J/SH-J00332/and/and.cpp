#include <bits/stdc++.h>
using namespace std;

long long dp[1000005], a[1000005];
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	dp[0] = 0;
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			dp[i] = max(a[j], dp[i - 1] & a[j]);
		}
	}
	cout << dp[m];
	return 0;
}
