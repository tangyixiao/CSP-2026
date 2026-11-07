#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;
ll n, m, a[N], ans;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == n) {
		ans = a[1];
		for (int i = 1; i <= n; i++) {
			ans &= a[i];
		}
	} else if (m == 1) {
		sort(a + 1, a + n + 1);
		ans = a[n];
	} else if (m == 2) {
		ans = INT_MIN;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
	} else if (m == 3) {
		ans = INT_MIN;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					ans = max(ans, a[i] & a[j] & a[k]);
				}
			}
		}
	} else if (m == 4) {
		ans = INT_MIN;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						ans = max(ans, a[i] & a[j] & a[k] & a[l]);
					}
				}
			}
		}
	} else if (m == 5) {
		ans = INT_MIN;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int ii = l + 1; ii <= n; ii++) {
							ans = max(ans, a[i] & a[j] & a[k] & a[l] & a[ii]);
						}
					}
				}
			}
		}
	} else if (m == 6) {
		ans = INT_MIN;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int ii = l + 1; ii <= n; ii++) {
							for (int jj = ii + 1; jj <= n; jj++) {
								ans = max(ans, a[i] & a[j] & a[k] & a[l] & a[ii] & a[jj]);
							}
						}
					}
				}
			}
		}
	} else {
		cout << 0;
		return 0;
	}
	cout << ans;
	return 0;
}
