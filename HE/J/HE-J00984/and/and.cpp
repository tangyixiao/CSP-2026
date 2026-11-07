#include <bits/stdc++.h>
using namespace std;

long long n, m;
long long a[1600005];
long long ans, f;

int main()
{
	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n - m + 1; i++)
	{
		ans = a[i];
		for (int j = i; j <= m + i - 1; j++)
		{
			ans &= a[j];
			cout  << a[j] << ' ';
		}
		cout << ans << ' ' << endl;
		f = max(f, ans);
	}
	cout << f;
	return 0;
}
