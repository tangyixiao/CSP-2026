#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n;
	int m;
	cin >> n >> m;
	int a[n + 3], c[m + 3] = {0}, d[m + 3];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	c[a[1]]++;
	d[a[1]]++;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (c[a[j]] != 0) {
				for (int k = 1; k <= a[j]; k++) {
					c[k] = 0;
				}
				continue;
			}
			c[a[j]] = 1;
		}
		for (int j = 1; j <= n; j++) {
			if (c[j] != 0) {
				d[j]++;
			}
		}

	}
	for (int i = 1; i <= m; i++) {
		cout << d[i] << ' ';
	}
	return 0;
}
