#include <bits/stdc++.h>
using namespace std;
int m, n, a[500010], b[300010], d[300010], c, e[300010];

int main() {
	//freopen("card.in", "r", stdin);
	//freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (b[a[j]] != 0) {
				for (int k = b[a[j]] + 1; k <= c; k++) {
					b[d[k]] = 0;
				}
				c = b[a[j]];
			} else {
				d[++c] = a[j];
				b[a[j]] = c;
			}
		}
		for (int j = 1; j <= m; j++) {
			if (b[j] != 0) {
				e[j]++;
			}
			b[j] = 0;
			if (i == n) {
				cout << e[j] << " ";
			}
		}
		c = 0;
	}
	return 0;
}
