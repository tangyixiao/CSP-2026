#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int n, m;
int ans;
int a[N];
bool st[N][32];
bool th[N];

signed main ()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		for (int j = 0; j <= 30; j++)
			if (a[i] >> j & 1) 
			{
				st[i][j] = 1;
			}
	}
	for (int i = 30; i >= 0; i--)
	{
		int len = 0;
		for (int j = 1; j <= n; j++) 
		{
			if (!th[j] && st[j][i])
				len++;
		}
		if (len < m) continue;
		for (int j = 1; j <= n; j++) 
		{
			if (!st[j][i]) 
				th[j] = 1;
		}
		ans += 1 << i;
	}
	cout << ans;
	return 0;
}
