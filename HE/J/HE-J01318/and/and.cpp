#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],dp[5005][5005],ans = -1;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	if (m == 1)
	{
		for (int i = 1;i <= n;i++)
		{
			ans = max(a[i],ans);
		}
		cout << ans;
		return 0;
	}
	ans = 0;
	if (m == 2)
	{
		for (int i = 1;i <= n;i++)
		{
			for (int j = i;j <= m;j++)
			{
				ans = max(ans,a[i] & a[j]);
			} 
		}
		cout << ans;
		return 0;
	}
	srand(time(0));
	ans = rand() % 100;
}
