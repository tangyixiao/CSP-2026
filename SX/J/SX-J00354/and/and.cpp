#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m, a[200005], maxn = INT_MIN, x;

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			if (maxn < i) {
				maxn = i;
			}
		}
		cout << maxn;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == j) {
					continue;
				}
				if ((a[i] & a[j]) > maxn) {
					maxn = a[i] & a[j];
				}
			}
		}
		cout << maxn;
	} else if (m == n) {
		x = a[1];
		for (int i = 2; i <= n; i++) {
			x &= a[i];
		}
		cout << x;
	} else if (m == n - 1) {
		for (int i = 1; i <= n; i++) {
			x = a[i];
			for (int j = 2; j <= n; j++) {
				if (i == j) {
					continue;
				}
				x &= a[j];
			}
			if (x > maxn) {
				maxn = x;
			}
		}
	}
	return 0;
}
