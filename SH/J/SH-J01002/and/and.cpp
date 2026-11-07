#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
const int LIM = 2147483647;
int n, m, a[N], pos, ans = -1, ansl[N], pwr;
bool flag = true, stat = true, flag_2 = true, stat_2 = true;
bool cmp(int x, int y)
{
	return x > y;
}
bool check(int x)
{
	int pwr = 0;
	for (int i = 0; i <= 30; i++)
	{
		if (int(pow(2, pwr)) == x + 1) return true;
		pwr++;
	}
	return false;
}
bool check_2(int x)
{
	if (a[x] == x) return true;
	return false;
} 
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if(check(a[i]) == false)
		{
			stat = false;
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (check(n - 1) == false)
		{
			stat_2 = false;
			break;
		}
		if(check_2(i) == false)
		{
			stat_2 = false;
			break;
		}
	}
	if (stat)
	{
		sort(a, a + n, cmp);
		cout << a[m - 1];
		return 0;
	}
	if (stat_2)
	{
		sort(a, a + n, cmp);
		ans = a[0];
		for (int i = 0; i < m; i++)
		{
			ans = (ans & a[i]);
		}
		cout << ans;
		return 0;
	}
	if (m == 1)
	{
		for (int i = 0; i < n; i++) ans = max(ans, a[i]);
		cout << ans;
		return 0;
	}
	if (m == 2)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				ansl[pos] = (a[i] & a[j]);
				pos++;
			}
		}
		sort(ansl, ansl + pos + 1, cmp);
		cout << ansl[0];
		return 0;
	}
	if (m == n - 1)
	{
		for (int i = 0; i < n; i++)
		{
			ans = LIM;
			for (int j = 0; j < n; j++)
			{
				if (j != i) ans = (ans & a[j]);
			}
			ansl[i] = ans;
		}
		sort(ansl, ansl + n - 1, cmp);
		cout << ansl[0];
		return 0;
	}
	if (m == n)
	{
		for (int i = 0; i < n; i++) ans = (ans & a[i]);
		cout << ans;
		return 0;
	}
	return 0;
}
