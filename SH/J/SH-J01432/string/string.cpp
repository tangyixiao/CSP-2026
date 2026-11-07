#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, a[200005], p[200005], l, r, ll, rl, lr, rr, s, ans;
char c[200005];
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	p[0] = 1, s = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		p[i] = p[i - 1] + a[i - 1];
		s += a[i];
	}
	l = 1, r = n;
	ll = p[1], lr = p[2] - 1, rl = p[n], rr = s;
	while (lr <= rl) {
		int lrl = s - rr, lrr = s - rl;
		if (c[l] != c[r]) {
			ans += min(lrr, lr) - max(lrl, ll) + 1;
		}
		if (lrr == lr) {
			++l, --r;
			ll = p[l], lr = p[l + 1] - 1;
			rl = p[r], rr = p[r + 1] - 1;
		} else if (lrr < lr) {
			--r;
			rl = p[r], rr = p[r + 1] - 1; 
		} else if (lrr > lr) {
			++l;
			ll = p[l], lr = p[l + 1] - 1;
		}
	}
	cout << ans;
	return 0;
}
