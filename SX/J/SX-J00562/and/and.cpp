#include <bits/stdc++.h>
using namespace std;
int n, m;
unsigned long long a[200005];
int main()
{
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (m == 1)
	{
		sort (a + 1, a + n + 1);
		cout << a[n];
	}
	else if (m == n)
	{
		unsigned long long ans = a[1];
		for (int i = 2; i <= n; i++)
		{
            ans = ans & a[i];
		}
		cout << ans;
	}
	else if (m == 2)
	{
		unsigned long long ans = 0;
		for (int i = 1; i < n; i++)
		{
            for (int j = i + 1; j <= n; j++)
            {
            	ans = max(ans, (a[i] & a[j]));
			}
		}
		cout << ans;
	}
	else if (m == n - 1)
	{
        unsigned long long sum = a[2];
        for (int i = 3; i <= n; i++)
        {
        	sum = sum & a[i];
		}
		for (int i = 2; i <= n; i++)
		{
		    unsigned long long ans = a[1];
			for (int j = 1; j <= n; j++)
			{
                if (i == j)continue;
                ans = ans & a[j];
			}
			sum = max(ans, sum);
		}
		cout << sum;
	}
	else
	{
		cout << a[n];
	}
	return 0;
}