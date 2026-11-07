#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int n;
#define pii pair<int, int>
#define ll long long
pii a[200005];
signed main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].first;
		char c;
		cin >> c;
		a[i].second = (c - 'a');
	}
	int l = 1, r = n;
	ll ans = 0;
	while (l < r)
	{
		int ls = a[l].second, rs = a[r].second;
		int lf = a[l].first, rf = a[r].first;
//		cout << lf << ' ' << ls << ' ' << rf << ' ' << rs << endl;
		if (ls == rs)
		{
			int mn = min(lf, rf);
			lf -= mn, rf -= mn;
		}
		else
		{
			int mn = min(lf, rf);
			ans += mn;
			lf -= mn, rf -= mn;
		}
		a[l].first = lf;
		a[r].first = rf;
		if (lf == 0)
			l++;
		if (rf == 0)
			r--; 
//		cout << ans << endl;
	}
	cout << ans << endl;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
