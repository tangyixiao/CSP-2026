#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long a[N], b[41], c[40];

int main() {
	long long n, m, sum, ans = 0;
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	c[1] = 1;
	for (int i = 2; i <= 30; i++) {
		c[i] = c[i - 1] * 2;
	}
	for (int i = 30; i >= 1; i--) {
		sum = 0;
		for (int j = 1; j <= n; j++) {
			if (a[j] != -1) {
				if ((a[j]&c[i] ) == c[i]) {
					sum++;
				}
			}
		}
		if (sum >= m) {
			b[i] = 1;
			for (int j = 1; j <= n; j++) {
				if ((a[j]&c[i] ) != c[i]) {
					a[j] = -1;
				}
			}
		}
	}
	for (int i = 30; i >= 1; i--) {
		ans = ans + b[i] * c[i];
	}
	cout << ans;
	return 0;
}
