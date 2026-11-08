#include<bits/stdc++.h>
#define int long long
using namespace std;
char c[200005];
int n, s, d, l, r, ls, rs, len, a[200005];
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
		len += a[i];
	}
	len = len / 2;
	l = 1;
	r = n;
	ls = a[1];
	rs = a[n];
	d = 0;
	while (d <= len)
	{
		if (l >= r)
		{
			break;
		}
		if (c[l] != c[r])
		{
			s += min(len - d, min(ls, rs));
		}
		d += min(len - d, min(ls, rs));
		if (ls == rs)
		{
			l++;
			ls = a[l];
			r--;
			rs = a[r];
		}
		else if (ls > rs)
		{
			ls -= rs;
			r--;
			rs = a[r];
		}
		else
		{
			rs -= ls;
			l++;
			ls = a[l];
		}
	}
	cout << s;
	return 0;
}
