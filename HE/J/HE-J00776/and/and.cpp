#include<bits/stdc++.h>
using namespace std;

long long n, m, ans, a[200005];

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort (a + 1, a + n + 1);
	for (int i = 2; i <= m; i++)
	{
		if (i == 2)
		{
			ans = a[n - i + 2] & a[n - i + 1];
		}
		else
		{
			ans = ans & a[n - i + 1];
		}
	}
	cout << ans << '\n';
	return 0;
}
