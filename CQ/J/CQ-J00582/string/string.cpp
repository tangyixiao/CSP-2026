#include <bits/stdc++.h>
#define int long long
using namespace std;
struct Node
{
	int n;
	char c;
};
Node a[200005];
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	int num = 0;
	a[0].n = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i].n >> a[i].c;
		num += a[i].n;
	}
	if(n == 1)
	{
		cout << 0;
		return 0;
	}
	int ln = 1, rn = n;
	int l = 0, r = num;
	int ans = 0;
	while(l < r)
	{
		if(a[ln].n < a[rn].n)
		{
			l += a[ln].n;
			r -= a[ln].n;
			if(a[ln].c != a[rn].c)
			{
				ans += a[ln].n;
			}
			a[rn].n -= a[ln].n;
			ln++;
		}
		else if(a[ln].n > a[rn].n)
		{
			l += a[rn].n;
			r -= a[rn].n;
			if(a[ln].c != a[rn].c)
			{
				ans += a[rn].n;
			}
			a[ln].n = a[ln].n - a[rn].n;
			rn--;
		}
		else
		{
			l += a[rn].n;
			r -= a[rn].n;
			if(a[ln].c != a[rn].c)
			{
				ans += a[rn].n;
			}
			ln++;
			rn--;
		}
	}
	cout << ans;
	return 0;
}

