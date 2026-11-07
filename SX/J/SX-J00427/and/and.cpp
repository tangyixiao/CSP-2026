#include <bits/stdc++.h>
using namespace std;
int a, s, d, f[200007][20000007], z, x, c, q;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> a >> s;
	for (int i = 1; i <= a; i++) {
		cin >> d;
		while (d >= 2) {
			z++;
			f[i][z] = d % 2;
			d /= 2;
		}
		if (x < z) {
			x = z;
		}
		z = 0;
	}
	for (int i = 1; i <= a; i++) {
		for (int k = i; k <= a; k++) {
			for (int j = 1; j <= x; j++) {
				if (f[i][j] == f[k][j]) {
					c++;
				}
			}
			if (c > q) {
				q = c;
			}
			c = 0;
		}
	}
	cout << q;
	return 0;
}