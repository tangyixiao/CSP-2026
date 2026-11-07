#include <bits/stdc++.h>
using namespace std;
long long n, m, s, l;
long long k[9999999];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> k[i];
	}
	if (m == n) {
		for (int i = 2; i <= n; i++) {
			k[i] = k[i] && k[i] - 1;
		}
		cout << k[n];
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				int a = k[i] && k[j];
				if (a < l)
					l = a;
			}
		}
		cout << l;
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			if (k[i] > l)
				l = k[i];
		}
		cout << l;
	}
	if (m == 3) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int z = j + 1; z <= n; z++) {
					int a = k[i] && k[j] && k[z];
					if (a > l)
						l = a;
				}
			}
		}
		cout << l;
	}
	return 0;
}