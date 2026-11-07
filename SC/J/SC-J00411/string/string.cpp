#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll n, sum, a[200010];
char ch[200010];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i] >> ch[i];
	int l = 1, r = n;
	while (l < r)
	{
		if (ch[l] != ch[r])
		{
			if (a[l] == a[r])
			{
				sum += a[l];
				l ++;
				r --;
			}
			else if (a[l] > a[r])
			{
				a[l] -= a[r];
				sum += a[r];
				r--;
			}
			else
			{
				a[r] -= a[l];
				
				sum += a[l];
				l++;
			}
		}
		else
		{
			if (a[l] == a[r])
			{
				l ++;
				r --;
			}
			else if (a[l] > a[r])
			{
				a[l] -= a[r];
				r--;
			}
			else
			{
				a[r] -= a[l];
				l++;
			}
		}
	}
	cout << sum;
//	for (int i = 1; i <= n; i++)
//	{
//		cout << a[i] << " ";
//	}
	return 0;
}