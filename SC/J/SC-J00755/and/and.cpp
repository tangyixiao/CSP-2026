#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
int n, m;
int a[N];
int get(int x);
bool checkA(int *a, int n);
bool checkB(int *a, int n);
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    	cin >> a[i];
    if (n <= 20)
    {
    	int ans = 0;
    	for (int msk = 0; msk < (1 << n); msk++)
    	{
    		if (get(msk) == m)
    		{
    			int res = (1 << 30) - 1;
    			for (int i = 0; i < n; i++)
    			{
    				int x = msk & (1 << i);
    				if (x)
    					res &= a[i];
				}
				ans = max(res, ans);
			}
		}
		cout << ans << '\n';
	}
	else if (m == 1)
	{
		int ans = 0;
		for (int i = 0; i < n; i++)
			ans = max(ans, a[i]);
		cout << ans << '\n';
	}
	else if (m == n)
	{
		int ans = (1 << 30) - 1;
		for (int i = 0; i < n; i++)
			ans &= a[i];
		cout << ans << '\n';
	}
	else if (m == 2)
	{
		int ans = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < i; j++)
				ans = max(ans, a[i] & a[j]);
		cout << ans << '\n';
	}
	else if (m == n - 1)
	{
		int cnt[50] = {0}, lst[50] = {0};
		for (int i = 30; i >= 0; i--)
		{
			for (int j = 0; j < n; j++)
				if (a[j] & (1 << i))
					cnt[i]++;
			lst[i] = n - cnt[i];
		}
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			int res = (1 << 30) - 1;
			for (int j = 30; j >= 0; j--)
			{
				int c = a[i] & (1 << j);
				if (c)
				{
					if (lst[j])
						res ^= (1 << j);
				}
				else
				{
					if (cnt[j] >= m) {}
					else
						res ^= (1 << j);
				}
			}
			ans = max(ans, res);
		}
		cout << ans << '\n';
	}
	else if (checkA(a, n))
	{
		sort(a, a + n);
		cout << a[n - m] << '\n';
	}
	else if (checkB(a, n))
	{
		if (m > n / 2)
			cout << "0\n";
		else
		{
			sort(a, a + n);
			int ans = n - 1;
			for (int i = n - 1; i >= n - m; i--)
				ans &= a[i];
			cout << ans << '\n';
		}
	}
    return 0;
}
bool checkB(int *a, int n)
{
	bool tg = false;
	for (int i = 0; i <= 30; i++)
		if (n == (1 << i))
			tg = true;
	if (!tg)
		return false;
	for (int i = 0; i < n; i++)
		if (a[i] == i)
			continue;
		else
			return false;
	return true;
}
bool checkA(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		int x = a[i] + 1;
		bool tg = false;
		for (int k = 0; k <= 30; k++)
			if (x == (1 << k))
			{
				tg = true;
				break;
			}
		if (!tg)
			return false;
	}
	return true;
}
int get(int x)
{
	int res = 0;
	while (x)
	{
		res += x & 1;
		x >>= 1;
	}
	return res;
}
