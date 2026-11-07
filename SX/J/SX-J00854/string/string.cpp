#include <bits/stdc++.h>
using namespace std;
int n, a[100010], m, s, num, m1, k;
string c, b, d;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		m1 += a[i];
		for (int j = m + 1; j <= m1; j++) {
			d[j] = c[i];
		}
		m += a[i];
	}
	if (m % 2 != 0) {
		k = m / 2 + 1;
	} else {
		k = m / 2;
	}
	for (int i = m; i >= k; i--) {
		s++;
		b[s] = d[i];
	}
	for (int i = 1; i <= k; i++) {
		if (b[i] != d[i]) {
			num++;
		}


	}
	cout << num;
	return 0;
}
