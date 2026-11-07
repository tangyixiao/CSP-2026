#include <bits/stdc++.h>
using namespace std;
#define int long long
#define eb emplace_back
#define pii pair <int, int>
#define fi first
#define se second
constexpr int MAXN = 200005;
int n;
int a[MAXN];
char c[MAXN];
int ans;
signed main ()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1 ; i <= n ; i ++)
	{
		cin >> a[i] >> c[i];
	}
	for (int l = 1, r = n; l <= r ;)
	{
		if (a[l] > a[r])
		{
			if (c[l] != c[r])
			{
				ans += a[r];
			}
			a[l] -= a[r], a[r] = 0;
			r --;
		}
		else if (a[l] == a[r])
		{
			if (c[l] != c[r])
			{
				ans += a[l];
			}
			a[l] = 0, a[r] = 0;
			l ++, r --;
		}
		else
		{
			if (c[l] != c[r])
			{
				ans += a[l];
			}
			a[r] -= a[l], a[l] = 0;
			l ++;
		}
	}
	cout << ans;
	return 0;
}//8:56

