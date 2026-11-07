#include <bits/stdc++.h>
using namespace std;

int ans (int x, int y) {
	int x0, y0, t1 = 1, t2 = 1, a = 1, sum = 0;
	while (x > 0) {
		x0 += x % 10 * t1;
		x /= 2;
		t1 *= 10;
	}
	while (y > 0) {
		y0 += y % 10 * t2;
		y /= 2;
		t2 *= 10;
	}
	while (x > 0 && y > 0) {
		if (x % 10 && y % 10) {
			sum += a * 1;
		}
		x /= 10;
		y /= 10;
		a *= 2;
	}
	return sum;
}

int main() {
	int m, n, a, maxn = 0;
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cout << ans(m, a);
		if ( ans (m, a) > maxn) {
			maxn = ans (m, a);
		}
	}
	cout << maxn << endl;
	return 0;
}