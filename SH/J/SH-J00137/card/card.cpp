#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;

int n, m, a[N], b[N], mp[N], t[N], ans[N];
bool spea = true;

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		if (i > 1)
		{
			if (a[i] < a[i - 1]) spea = false;
		}
	}
	
	if (spea)
	{
		for (int i = 1; i <= n; ++i)
		{
			if (a[i + 1] != a[i])
			{
				ans[a[i]] = i;
			}
		}
	}
	else
	{
		for (int i = 1; i <= n; ++i)
		{
			int cur = 0;
			memset(mp, 0, sizeof(mp));
			memset(t, 0, sizeof(t));
			for (int j = 1; j <= n; ++j) b[j] = a[j];
			for (int j = i; j <= n; ++j)
			{
				if (!mp[b[j]])
				{
					mp[b[j]] = ++cur;
					t[cur] = b[j];
				}
				else
				{
					for (int k = mp[b[j]] + 1; k <= cur; ++k) mp[t[k]] = 0;
					cur = mp[b[j]];
					t[cur] = b[j];
				}
			}
			for (int j = 1; j <= m; ++j)
			{
				if (mp[j]) ans[j]++;
			}
		}
	}
	for (int i = 1; i <= m; ++i) cout << ans[i] << " ";
	return 0;
} 
