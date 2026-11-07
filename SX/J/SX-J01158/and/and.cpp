#include <bits/stdc++.h>
using namespace std;
char s[100000001], sum[100000001];


int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n, p, b = 0;

	cin >> n >> m;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for (int i = 0; i < m; i++) {

		p = a[n - i];
		for (int j = 100000000; p > 0; j--) {
			s[j] = p & 2;
			p = p / 2;
		}
		for (int j = 100000000; j >= 1; j--) {
			sum[j - 1] = (sum[j] + s[j]) / 2;
			sum[j] = (sum[j] + s[j]) % 2;
		}

	}
	for (int i = 1; i <= 100000000; i++) {
		if (sum[i] != 0) {
			b = i;
		}
		break;
	}
	if (b != 0) {
		for (int i = b; i <= 100000000; i++) {
			cout << sum[i];
		}

	} else {
		cout << 0;
	}
	return 0;
}
