#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, ans;
ll a[200005];

inline bool cmp(ll x, ll y) {
	return (x > y);
}

signed main(void) {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; ++i)
		cin >> a[i];
	sort(a + 1, a + n + 1, cmp);
	ans = a[1];
	for (ll i = 2; i <= m; ++i)
		ans &= a[i];
	cout << ans;
	return 0;
}