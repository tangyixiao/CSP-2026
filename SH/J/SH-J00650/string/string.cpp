#include <bits/stdc++.h>
using namespace std;
int n, l, r;
char c[200005];
long long a[200005], ans, x, y;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a[i] >> c[i];
	}
	l = 1, r = n, x = a[1], y = a[n];
	while(l < r)
	{
		if(c[l] != c[r])
		{
			ans += min(x, y);
		}
		if(x < y)
		{
			y -= x;
			l++;
			x = a[l];
		}
		else if(x == y)
		{
			l++;
			r--;
			x = a[l];
			y = a[r];
		}
		else
		{
			x -= y;
			r--;
			y = a[r];
		}
	}
	cout << ans;
	return 0;
}
