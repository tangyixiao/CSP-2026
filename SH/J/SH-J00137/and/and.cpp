#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;

int n, m, a[N], ans, maxn;
bool f[N];

void dfs(int step, int tmp)
{
	if (step > m)
	{
		ans = max(ans, tmp);
		return ;
	}
	for (int i = 1; i <= n; ++i)
	{
		if (!f[i])
		{
			f[i] = true;
			dfs(step + 1, tmp & a[i]);
			f[i] = false;
		}
	}
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i]; 
		maxn = max(maxn, a[i]);
	}
	if (m == 1)
	{
		cout << maxn << endl;
		return 0;
	}
	else if (n <= 20)
	{
		for (int i = 1; i <= n; ++i)
		{
			dfs(1, a[i]);
		}
	}
	else if (m == 2)
	{
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				if (i == j) continue;
				ans = max(ans, a[i] & a[j]);
			}
		}
	}
	cout << ans << endl;
	return 0;
} 
