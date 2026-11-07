#include <bits/stdc++.h>
using namespace std;
int q, x;
const int N = 3e3+5;
int x[N];
char c[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> q;
	int sum = 0;
	for (int i = 1; i <= q; i++) {
		cin >> x[i] >> c[i];
		sum += x[i];
		sum += c[i];
		map c[i]++;
	}
	if (map c[i] == q) {
		cout << 0;
		return 0;
	}
	int ans = 0;
	for (int i = 1; i <= q; i++) {
		if (c[i] != c[i + q - 1]) {
			ans += x[i];
			c[i + sum - 1] = c[i];
		} else if (x[i] != x[i + q - 1]) {
			int zd(c[i + q - 1], c[i]);
			int zx(c[i + q - 1], c[i]);
			sum += zd - zx;
			x[i + q] -= zd - zx;
		}
	}
	cout << c[i + q - 1] << c[i];
	return 0;
}
