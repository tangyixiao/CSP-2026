#include<bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5 + 5;
int a[N], dp[N];
int n, m, ans;
void dfs(int step, int now, int p)
{
	if(step == m)
	{
		ans = max(ans, now);
		return;
	}
	if(p < n)
	{
		dfs(step+1, now&a[p+1], p+1);
		dfs(step, now, p+1);
	}
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++)
	{
		dfs(1, a[i], i);
	}
	cout << ans;
	return 0;
}