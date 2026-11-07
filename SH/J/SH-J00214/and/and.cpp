#include <iostream>
#include <algorithm>
using namespace std;

int a[200010];
int f[200010];

bool check(int x)
{
	while(x % 2 == 0)
	{
		x /= 2;
	}
	return x == 1;
}

bool cmp(int x, int y)
{
	return x > y;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int ans;
	int mx = 0;
	bool ff = true;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		mx = max(mx, a[i]);
		if(i == 1)	ans = a[1];
		else	ans = ans & a[i];
		if(check(a[i] + 1) == false)	ff = false;
	}
	if(m == 1)
	{
		cout << mx << endl;
		return 0;
	}
	if(ff)
	{
		sort(a + 1, a + n + 1, cmp);
		ans = 2147483647;
		for(int i = 1; i <= m; i++)
		{
			ans = ans & a[i];
		}
		cout << ans << endl;
		return 0;
	}
	if(n == m)
	{
		cout << ans << endl;
		return 0;
	}
	if(m == 2)
	{
		int ans = 0;
		for(int i = 1; i <= n; i++)
		{
			for(int j = i + 1; j <= n; j++)
			{
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	f[0] = 2147483647;
	for(int i = 1; i <= n; i++)
	{
		for(int j = m; j >= 1; j--)
		{
			f[j] = max(f[j], f[j - 1] & a[i]);
		}
	}
	cout << f[m] << endl;
	return 0;
}
