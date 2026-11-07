#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[200005];
int dp[2005][2005];

signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	scanf("%lld %lld", &n, &m);
	for(int i = 1;i <= n;i++)
		scanf("%lld", &a[i]);
	
	int num = pow(2, 31) - 1;
	for(int i = 0;i <= n;i++)
		for(int j = 0;j <= m;j++)
		{
			dp[i][j] = 0;
			if(j == 0)
				dp[i][j] = num;
		}
	
	int ans = 0;
	for(int i = 1;i <= n;i++)
	{
		for(int j = m;j >= 1;j--)
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] & a[i]);
		if(i >= m)
			ans = max(ans, dp[i][m]);
	}
	
	printf("%lld", ans);
	return 0;
}
