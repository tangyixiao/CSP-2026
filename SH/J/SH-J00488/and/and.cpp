#include <bits/stdc++.h>
using namespace std;
constexpr int MAXN = 2e5 + 5;

int n, m, a[MAXN], ans = INT_MIN;
bool vis[MAXN];

void dfs(int x, int sum)
{
	if (x > m)
	{
		ans = max(ans, sum);
		return;
	}
	if (sum <= ans)
		return;
	for (int i = 1; i <= n; i++)
		if (!vis[i])
		{
			vis[i] = true;
			dfs(x + 1, sum & a[i]);
			vis[i] = false;
		}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1, greater<int>());
	dfs(1, INT_MAX);
	cout << ans << "\n";
	return 0;
}
