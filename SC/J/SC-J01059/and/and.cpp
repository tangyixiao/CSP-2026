#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull; 
const int M = 2e5+10;
int n, m;
int dp[M];
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;;
	memset(dp, 0, sizeof(dp));
	int a[n+1];
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		dp[i][1] = max(dp[i][1], a[i]);
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m && j <= i; j++)
		{
			dp[i][j] = max(dp[i][j], max((dp[i-1][j-1] & a[i]), dp[i-1][j]));
		}
	}
	cout << dp[n][m];
	return 0;
}