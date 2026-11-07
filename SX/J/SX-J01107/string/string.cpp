#include <bits/stdc++.h>
using namespace std;
int n, sy;
long long a[200005];
long long ans;
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		if (i <= n - i + 1) {
			if (sy != 0) {
				ans += abs(sy - a[n - i + 1]);
				if (a[n - i + 1] > sy) {
					a[n - i + 1] -= sy;
				} else {
					a[n - i + 1] = 0;
				}
			}
			if (c[i] != c[n - i + 1]) {
				if (a[i] == a[n - i + 1]) {
					ans += a[i];
				} else if (a[i] > a[n - i + 1]) {
					ans += a[n - i + 1];
					sy = a[i] - a[n - i + 1];
				} else if (a[i] < a[n - i + 1]) {
					ans += a[i];
					sy = a[n - i + 1] - a[i];
				}
			}
		} else {
			break;
		}
	}
	cout << ans;
	return 0;
}