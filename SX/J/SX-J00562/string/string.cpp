#include <bits/stdc++.h>
using namespace std;
int n, a[200005], l, r;
char c[200005];
long long ans;
int main()
{
    freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
    	cin >> a[i] >> c[i];
	}
	l = 1;
	r = n;
	while (l < r)
	{
        if (a[l] >= a[r])
        {
		    a[l] -= a[r];
        	if (c[l] != c[r])
			{
               ans += a[r];
			}
			-- r;
			if (a[l] == 0)-- l;
		}
		else
		{
			if (c[l] != c[r])
			{
               ans += a[l];
			}
			a[r] -= a[l];
			++ l;
		}
	}
	cout << ans;
	return 0;
}