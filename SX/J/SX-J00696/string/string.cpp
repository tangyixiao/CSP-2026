#include <bits/stdc++.h>
using namespace std;
long long n, a[200005];
char c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	long long ans = 0, x = 1, y = n;
	while (x != y) {
		//cout << x << ' ' << y << ' ' << a[x] << ' ' << a[y] << ' ' << c[x] << ' ' << c[y] << ' ' << ans << endl;
		if (c[x] != c[y]) {
			ans += min(a[x], a[y]);
		}
		long long p = a[x], q = a[y];
		if (p < q) {
			a[y] -= a[x];
			x++;
		}
		if (p > q) {
			a[x] -= a[y];
			y--;
		}
		if (p == q) {
			x++;
			y--;
		}
	}
	cout << ans << endl;
	return 0;
}
