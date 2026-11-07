#include <bits/stdc++.h>
using namespace std;

int a[100010], n, m, ans = 0;

void pts15()
{
	sort(a + 1, a + n + 1);
	int ans = a[n];
	for (int i = n - 1; i >= n - m + 1; i--)
	{
		ans &= a[i];
	}
	cout << ans << '\n';
}

void pts20(int step, int now, int andd)
{
	if (now == m)
	{
		ans = max(ans, andd);
		return;
	}
	if (now > m)
		return;
	if (step > n)
		return;
	pts20(step + 1, now, andd);
	pts20(step + 1, now + 1, andd & a[step]);
}

void pts152()
{
	for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			ans = max(ans, a[i] & a[j]);
	cout << ans << '\n';
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 2)
		pts152();
	else if (n > 20 || m == 1 || m == n)
		pts15();
	
	else if (n <= 20)
	{
		pts20(1, 0, pow(2, 31) - 1);
		cout << ans << '\n';
	}
	return 0;
}
