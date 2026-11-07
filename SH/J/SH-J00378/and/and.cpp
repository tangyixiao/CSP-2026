#include <iostream>
#include <algorithm>
using namespace std;

long long n, a[200010], m, ans = -1e18, vis[200010];

void dfs(long long x, long long cnt)
{
	if (cnt > m) return;
	if (x > n)
	{
		if (cnt == m)
		{
			long long res = 0;
			for (long long i = 1; i <= n; i++)
				if (vis[i])
				{ 
					res = a[i];
					break;
				}
			for (long long i = 1; i <= n; i++)
				if (vis[i]) res &= a[i];
			ans = max(ans, res);
		}
		return;
	}
	
	vis[x] = 0;
	dfs(x + 1, cnt);
	vis[x] = 1;
	dfs(x + 1, cnt + 1);
}

void solve()
{
	if (m == 1)
	{
		for (long long i = 1; i <= n; i++)
			ans = max(ans, a[i]);
		
	}
	else if (m == n)
	{
		ans = a[1];
		for (long long i = 2; i <= n; i++)
			ans &= a[i];
	}
	else
	{
		for (long long i = 1; i <= n; i++)
			for (long long j = i + 1; j <= n; j++)
				ans = max(ans, a[i] & a[j]);
	}
	cout << ans << endl;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++)
		cin >> a[i];
	if (n <= 20)
	{
		dfs(1, 0);
		cout << ans << endl;
	}
	else if (n <= 2000)
	{
		solve();
	}
	
	return 0;
}
