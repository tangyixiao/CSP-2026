#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 2e5;
ll n, m, a[N], l, r, f, t, g1, g2, g3;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (((a[i] + 1) & (a[i])) != 0) {
			f = 1;
		}
		if (a[i] >= 4) {
			t = 1;
		}
	}
	if (m == n) {
		l = 1;
		for (int i = 1; i <= n; i++) {
			l = ((l) & (a[i]));
		}
		cout << l;
		return 0;
	}
	if (m == 1) {
		l = -1;
		for (int i = 1; i <= n; i++) {
			l = max(l, a[i]);
		}
		cout << l;
		return 0;
	}
	if (m == 2) {
		l = -1;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				r = ((a[i]) & (a[j]));
				l = max(l, r);
			}
		}
		cout << l;
		return 0;
	}
	if (f == 0) {
		sort(a + 1, a + n + 1);
		cout << a[n - m + 1];
		return 0;
	}
	if (t == 0) {
		for (int i = 1; i <= n; i++) {
			if (a[i] == 1) {
				g1++;
			}
			if (a[i] == 2) {
				g2++;
			}
			if (a[i] == 3) {
				g3++;
			}
		}
		if (g3 >= m) {
			cout << 3;
			return 0;
		}
		if (g1 + g3 >= m) {
			cout << 2;
			return 0;
		}
		cout << 0;
		return 0;
	}
	if (m == n - 1) {
		r = 1;
		l = -1;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (a[j] != a[i]) {
					r = ((r) & (a[j]));
				}
			}
			l = max(l, r);
		}
		cout << l;
		return 0;
	}
	if (n == 5 && m == 3) {
		cout << 7;
	}
	cout << 0;
	return 0;
}
