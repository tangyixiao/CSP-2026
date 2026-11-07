#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, a[10010], b[10010], ans = 0, m, mm = 1, t, tt, o = 1;
	string q;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> q;
		b[i] = q[0] - 'a';
	}
	m = a[o];
	mm = b[o];
	t = a[n];
	tt = b[n];

	while (o != n) {
		if (m >= t && mm != tt) {
			ans += t;
			m = m - t;
			n--;
			t = a[n];
			tt = b[n];

		} else if (m < t && mm != tt) {
			ans += m;
			t = t - m;
			o++;
			m = a[o];
			mm = b[o];

		} else if (m >= t && mm == tt) {
			m = m - t;
			n--;
			t = a[n];
			tt = b[n];

		} else if (m < t && mm == tt) {
			t = t - m;
			o++;
			m = a[o];
			mm = b[o];

		}
	}
	cout << ans;

	return 0;
}
