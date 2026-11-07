#include <bits/stdc++.h>

using namespace std;

#define int long long

int n, m;
int a[200010];
int mx, cnt, ans;
int vis[200010];
int dp[2010][2010];
int ct[25];

bool cmp(int x, int y)
{
	return x > y;
}

signed main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		mx = max(mx, a[i]);
		if(!ans) ans = a[i];
		else ans &= a[i];
		dp[i][i] = ans;
		dp[i][0] = (1 << 20) - 1; 
	}
	if(m == 1)
	{
		cout << mx;
		return 0;
	}
	if(m == n)
	{
		cout << ans;
		return 0;
	}
	if(m == 2)
	{
		ans = 0;
		for(int i = 1; i <= n; i ++)
		{
			for(int j = i + 1; j <= n; j ++)
			{
				if((a[i] & a[j]) > ans) ans = (a[i] & a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	if(n <= 2000)
	{
		dp[0][0] = (1 << 20) - 1; 
		for(int i = 1; i <= n; i ++)
		{
			for(int j = 1; j <= min(i, m); j ++)
			{
				dp[i][j] = max(dp[i - 1][j], (dp[i - 1][j - 1] & a[i]));
			}
		}
		cout << dp[n][m];
		return 0;
	}
	sort(a + 1, a + 1 + n, cmp);
	for(int i = 20; i >= 0; i --)
	{
		int t = (1 << i);
		if(cnt == m) break;
		for(int j = 1; j <= n; j ++)
		{
			if(a[j] & t) ct[i + 1] ++;
			if(vis[j]) continue;
			if(a[j] & t)
			{
				vis[j] = 1;
				if(!ans) ans = a[j];
				else ans &= a[j];
				cnt ++;
				break;
			}
		}
	}
	for(int i = 20; i >= 1; i --)
	{
		if(ct[i] >= m)
		{
			ans = (1 << i) - 1;
			break;
		}
	}
	cout << ans;
	return 0;
}
