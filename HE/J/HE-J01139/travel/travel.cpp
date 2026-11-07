#include <bits/stdc++.h>
#define int long long

using namespace std;

string ax, ay, bx, by;
int ans1, ans2, ans3, ans4;
int a, b, c, d;

signed main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> ax >> ay >> bx >> by;
	if (ax == bx) ans1 = 1;
	if (ans1)
	{
		if (ay[0] == '0')
		{
			a = ay[1] - '0';
		}
		else
		{
			a = (ay[0] - '0') * 10 + ay[1] - '0';
		}
		c = ay[2] - 'A';
		if (by[0] == '0')
		{
			b = by[1] - '0';
		}
		else
		{
			b = (by[0] - '0') * 10 + by[1] - '0';
		}
		d = by[2] - 'A';
		if (a == b)
		{
			ans2 = 1;
			if (((c >= 0 && c <= 2) && (d >= 0 && d <= 2)) || ((c >= 3 && c <= 4) && (d >= 3 && d <= 4)))
			{
				ans3 = 1;
				if (abs(c - d) == 1)
				{
					ans4 = 1;
				}
			}
		}
	}
	cout << ans1 << ans2 << ans3 << ans4;
	return 0;
}
