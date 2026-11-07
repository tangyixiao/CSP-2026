#include <bits/stdc++.h>
using namespace std;
long long a[200005], n, ans, l;
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		l += a[i];
	}
	l /= 2;
	long long r = n;
	for (int i = 1; i <= n; i++) {
		if (l == 0)
			break;
		long long t;
		if (a[i] <= l) {
			l -= a[i];
			t = a[i];
		} else {
			t = l;
			l = 0;
		}
		while (t != 0) {
			if (c[r] != c[i]) {
				if (a[r] > t) {
					a[r] -= t;
					ans += t;
					t = 0;
				} else {
					t -= a[r];
					ans += a[r];
					r--;
				}
			} else {
				if (a[r] > t) {
					a[r] -= t;
					t = 0;
				} else {
					t -= a[r];
					r--;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
