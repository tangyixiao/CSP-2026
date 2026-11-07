#include <bits/stdc++.h>
using namespace std;
int a[500005];
int ans[300005];
signed main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		map<int, int> mp;
		int cnt = 0;
		for (int j = i; j <= n; j++)
		{
			if (!mp.count(a[j]) || mp[a[j]] == 0)
				cnt++, mp[a[j]] = cnt;
			else
			{
				cnt = mp[a[j]];
				for (int k = 1; k <= n; k++)
					if (mp[a[k]] > cnt)
						mp[a[k]] = 0;
			}
		}
		for (int j = 1; j <= m; j++)
			if (mp.count(j) && mp[j] != 0)
				ans[j]++;
	}
	for (int i = 1; i <= m; i++)
	{
		cout << ans[i] << ' ';
	}
	cout << endl;
}
