#include <bits/stdc++.h>
using namespace std;

int n, m, a[200005], maxnn;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			maxnn = max(maxnn, a[i]);
		}
		cout << maxnn;
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				maxnn = max(maxnn, (a[i] & a[j]));
			}
		}
		cout << maxnn;
	} else if (m == 3) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					maxnn = max(maxnn, (a[i] & a[j] & a[k]));
				}
			}
		}
		cout << maxnn;
	} else if (m == 4) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						maxnn = max(maxnn, (a[i] & a[j] & a[k] & a[l]));
					}
				}
			}
		}
		cout << maxnn;
	} else if (m == 5) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int l = k + 1; l <= n; l++) {
						for (int o = l + 1; o <= n; o++) {
							maxnn = max(maxnn, (a[i] & a[j] & a[k] & a[l] & a[o]));
						}
					}
				}
			}
		}
		cout << maxnn;
	}
	return 0;
}