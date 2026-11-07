#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct S {
	char y;
	ll x;
} a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].x >> a[i].y;
	}
	ll l = 1, r = n, ls = a[l].x, rs = a[r].x, ans = 0;
	while (l < r) {
		if (a[l].y != a[r].y) {
			ans += min(ls, rs);
		}
		ll s = min(ls, rs);
		ls -= s;
		rs -= s;
		if (ls == 0)
			l++, ls += a[l].x;
		if (rs == 0)
			r--, rs += a[r].x;
	}
	cout << ans;
	return 0;
}
