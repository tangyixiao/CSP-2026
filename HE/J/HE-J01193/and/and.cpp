#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int a[N], ans, m, n, sum;
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
		cin >> a[i];
	for (int j = 29; j >= 0; j --)
	{
		sum = 0;
		for (int i = 1; i <= n; i ++)
			sum += ((a[i] & (1 << j)) > 0);
		if (sum >= m)
		{
			ans += (1 << j);
			for (int i = 1; i <= n; i ++)
				if ((a[i] & (1 << j)) == 0)
					a[i] = 0;
		}
	}
	cout << ans;
	return 0;
}
