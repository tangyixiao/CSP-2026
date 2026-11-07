#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, mm = 0, maxn = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		mm = max(mm, a[i]);
	}
	if (m == 1) {
		cout << mm;
		return 0;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				maxn = max(maxn, a[i] & a[j]);
			}
		}
		cout << maxn;
		return 0;
	} else if (m == n) {
		int b = a[1];
		for (int i = 2; i <= n; i++) {
			b = b &a[i];
		}
		cout << b;
		return 0;
	} else if (m == 3) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					maxn = max(maxn, a[i] & a[j] & a[k]);
				}
			}
		}
		cout << maxn;
	} else if (m == 4) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int x = k + 1; x <= n; x++) {
						maxn = max(maxn, a[i] & a[j] & a[k] & a[x]);
					}
				}
			}
		}
		cout << maxn;
	} else if (m == 5) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int x = k + 1; x <= n; x++) {
						for (int y = k + 1; y <= n; y++) {
							maxn = max(maxn, a[i] & a[j] & a[k] & a[x] & a[y]);
						}
					}
				}
			}
		}
		cout << maxn;
	}
	return 0;
}
