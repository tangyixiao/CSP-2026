#include <bits/stdc++.h>
using namespace std;
const int Q = 2e5+5;
long long n, a[Q], q = -1, w, ans = -1, m;

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		ans = max(ans, a[i]);
	}
	if (m == 1)
	{
		cout << ans;
		return 0;
	}
	if (m == 2)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n && j != i; j++)
			{
				w = a[i] & a[j];
				q = max(q, w);
			}
		}
		cout << q;
		return 0;
	}
	cout << n*m;
	return 0;
}
