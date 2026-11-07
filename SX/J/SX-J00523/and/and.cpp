#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, a[2000005], b = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == m) {
		b = a[1];
		for (int i = 1; i <= n; i++)
			b = b & a[i];
		cout << b << endl;
		return 0;
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++)
			b = max(b, a[i]);
		cout << b;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				b = max(b, a[i] & a[j]);
			}
		}
		cout << b;
		return 0;
	}
	if (m == 3) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					b = max(b, a[i] & a[j] & a[k]);
				}
			}
		}
		cout << b;
		return 0;
	}
	if (m == 4) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int o = k + 1; o <= n; o++) {
						b = max(b, a[i] & a[j] & a[k] & a[o]);
					}
				}
			}
		}
		cout << b;
	}
	if (m == 5) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					for (int o = k + 1; o <= n; o++) {
						for (int oo = o + 1; oo <= n; oo++) {
							b = max(b, a[i] & a[j] & a[k] & a[o] & a[oo]);
						}
					}
				}
			}
		}
		cout << b;
	}
	return 0;
}
