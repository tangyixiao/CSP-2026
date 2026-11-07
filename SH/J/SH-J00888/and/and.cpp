#include <iostream>
#include <cstring>
using namespace std;

int n, m, a[200010], ans, maxn, as;

void dfs(int step, int x, int last)
{
	if (step == m)
	{
		ans = max(ans, x);
		return;
	}
	for (int i = last + 1; i <= n; i++)
		dfs(step + 1, x & a[i], i);
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("ans.out", "w", stdout); 
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		as &= a[i];
	}
	if (m == n)
	{
		cout << as;
		return 0;
	}
	dfs(0, 2147483647, 0);
	cout << ans;
	return 0;
}
