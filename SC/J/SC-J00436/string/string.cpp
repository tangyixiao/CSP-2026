#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int n, m, ans, a[N], sa[N]; char c[N]; string s;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i] >> c[i];
		m += a[i];
	}
	if (m <= 1e8) {
		for (int i = 1; i <= n; ++i) for (int j = 1; j <= a[i]; ++j) s += c[i];
		for (int i = 0; i < m / 2; ++i) {
			if (s[i] != s[m - 1 - i]) ++ans;
		} cout << ans;
	} else {
		for (int i = 1; i <= n; ++i) sa[i] = sa[i - 1] + a[i];
		int l = 1, r = n, lt = 1, rt = m;
		while (l <= r && lt <= rt) {
			l = lower_bound(sa + 1, sa + n + 1, lt) - sa;
			r = lower_bound(sa + 1, sa + n + 1, rt) - sa;
			if (lt > sa[l]) ++l;
			if (rt > sa[r]) ++r;
			if (l == r) break;
			if (lt + 1 == rt) { ++ans; break; }
			if (a[l] == a[r]) {
				if (c[l] != c[r]) ans += sa[l] - lt + 1;
				lt += a[l]; rt -= a[l];
			} else if (a[l] < a[r]) {
				if (c[l + 1] != c[r]) ans += rt - sa[r] + 1;
				else if (c[l] != c[r]) ans += sa[l] - lt + 1;
				lt += a[r]; rt -= a[r];
			} else {
				if (c[r - 1] != c[l]) ans += sa[l] - lt + 1;
				else if (c[l] != c[r]) ans += rt - sa[r] + 1;
				lt += a[l]; rt -= a[l];
			}
		} cout << ans << endl;
	}
	return 0;
}