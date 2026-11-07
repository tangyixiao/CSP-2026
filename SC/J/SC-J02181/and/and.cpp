#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int a [N] , n , m;


int main ()
{
	
	freopen ("and.in" , "r" , stdin);
	freopen ("and.out" , "w" , stdout);
	cin >> n >> m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a [i];
	}
	if (m == 1)
	{
		cout << 0;
		return 0;
	}
	else if (m == 2)
	{
		long long maxn = -2e9;
		for (int i = 1;i <= n;i++)
		{
			for (int j = i;j <= n;j++)
			{
				if (i == j)
				{
					continue;
				}
				long long res = a [i] & a [j];
				maxn = max (maxn , res);
			}
		}
		cout << maxn;
		return 0;
	}
	else if (m == n)
	{
		int ans = a [1];
		for (int i = 2;i <= n;i++)
		{
			ans = ans & a [i];
		}
		cout << ans;
		return 0;
	}
	bool flag = true;
	for (int i = 1;i <= n;i++)
	{
		if (a [i] != i - 1)
		{
			bool flag = false;
		}
	}
	if (flag == true)
	{
		long long ans = 0;
		for (int i = n;i >= 2;i -= 2)
		{
			if (m >= 2)
			{
				ans += (1ll * a [i]) & a [i - 1];
				m -= 2;
			}
		} 
		cout << ans;
		return 0;
	}
	else
	{
		sort (a + 1 , a + 1 + n , greater <int> ());
		long long ans = 0;
		for (int i = 1;i <= n;i += 2)
		{
			if (m >= 2)
			{
				ans += (1ll * a [i]) & a [i - 1];
				m -= 2;
			}
		} 
		cout << ans;
		return 0;
	}
	return 0;
}