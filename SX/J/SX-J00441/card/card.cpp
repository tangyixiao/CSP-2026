#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int i, n, m, a[500001], b[500001], j, s, x = 0, c[300001], k = 0;
	cin >> n >> m;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (i = 1; i <= m; i++) {
		c[i] = 0;
	}
	for (i = 1 + k; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			b[j] = a[j];
		}
		s = 0;
		for (j = 1; j <= n; j++) {
			if (b[i] == b[j])
				s = a[i];
		}
		if (b[i] == s)
			x++;
		if (x % 2 == 0) {
			for (j = 1; j <= m; j++) {
				if (b[i] == j)
					c[j] = c[j] + 1;
			}
		}
		k++;
	}
	for (i = 1; i <= m; i++) {
		cout << c[j];
	}
	return 0;
}
