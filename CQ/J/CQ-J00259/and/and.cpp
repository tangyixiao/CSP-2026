#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005],dp[200005];
	memset(a,sizeof(a),0);
	memset(dp,sizeof(dp),1);
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i++)
	{
		cin >> a[i];
	}
	dp[1] = a[1];
	for (int i = n ; i >= 2 ; i--)
	{
		for (int j = 1 ; j <= m ; j++)
		{
			if (i < j)
			{
				dp[j] = dp[j - 1] & a[i];
			}
			else
			{
				dp[j] = max(dp[j],dp[j - 1] & a[i]);
			}
		}
	}
	cout << dp[m];
	return 0;
}
