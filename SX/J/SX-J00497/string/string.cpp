#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a[200005];
	long long m = 0;
	char c[200005];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
	}
	if (n == 1) {
		cout << 0;
	}
	if (n == 2 && c[0] == c[1]) {
		cout << 0;
	}
	if (n == 2 && c[0] != c[1]) {
		cout << min(a[0], a[1]);
	}
	if (n > 2) {
		if (c[0] == c[(n - 1) / 2]) {
			for (int j = 0; j < (n / 2); j++) {
				m += a[j];
			}
			cout << m;
		}
	}
	return 0;
}