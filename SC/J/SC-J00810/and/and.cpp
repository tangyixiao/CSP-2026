#include<bits/stdc++.h>
using namespace std;
const int MAXN = 5000;
int n, m, a[MAXN], ans, dp[MAXN][MAXN];
int main ()
{
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n); 
	for (int i = 1; i <= n; i ++)
	{
		dp[1][i] = a[i];
	}
	for (int i = 1; i <= m; i ++)
	{
		dp[i][1] = a[1];
	}
	for (int i = 2; i <= m; i ++)
	{
		for (int j = 2; j <= n; j ++)
		{
			dp[i][j] = max (dp[i][j - 1], dp[i - 1][j - 1] & dp[i - 1][j]);
		}
	}
	cout << dp[m][n];
	return 0;
} 