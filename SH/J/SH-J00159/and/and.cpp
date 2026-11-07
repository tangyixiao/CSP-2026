#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005];
int main()
{	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	if (m == 1)
	{
		sort(a + 1, a + n + 1);
		cout << a[n];
	}
	else if (m == 2)
	{
		int maxn = -1;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (i != j)
				{
					if ((a[i] & a[j]) > maxn) 
						maxn = (a[i] & a[j]);
				}
			}
		}
		cout << maxn;
	}
	else if (m == n)
	{
		int ans = a[1];
		for (int i = 2; i <= n; i++)
		{
			ans &= a[i];
		}
		cout << ans;
	}
	return 0;
}
