#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
int n, m, a[N];
int f[2007][2007];
int sum[N], ans;
int main()
{
	freopen("add.in", "r", stdin);
	freopen("add.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (n <= 2000 && m <= 2000)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				f[i][j] = max(f[i - 1][j], f[i - 1][j - 1] & a[i]);
				if (j == 1)
				{
					f[i][j] = max(f[i][j], a[i]);
				}
//				cout << f[i][j] << " ";
			}
//			cout << endl;
		}
		cout << f[n][m];
		return 0;
	}
	if (m == n - 1)
	{
		sum[1] = a[1];
		for (int i = 2; i <= n; i++)
		{
			sum[i] = sum[i - 1] & a[i];
		}
		for (int i = 1; i <= n; i++)
		{
			ans = max(ans, sum[n] |= (a[i - 1] - a[i]));
		}
		return 0;
	}
	sort(a + 1, a + n + 1);
	cout << a[n - m + 1];
	return 0;
}
//4 2
//3 15 12 12
