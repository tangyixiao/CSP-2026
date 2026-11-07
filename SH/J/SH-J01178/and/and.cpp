#include <bits/stdc++.h>
using namespace std;
int n, m, sum;
long long a[200005];
int check (int x)
{
	int cnt = 0;
	while (x)
	{
		cnt = cnt * 10 + x % 2;
		x /= 2;
	}
	return cnt;
}


bool cmp(long long a, long long b)
{
	return check(a) > check(b);
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n - m + 1; i++)
	{
		sum = a[i];
		for (int j = 1; j < m; j++)
		{
			sum = sum & a[i + j];
		}
		ans = max(ans, sum);
	}
	cout << ans;
	return 0;
}
