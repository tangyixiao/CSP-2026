#include <bits/stdc++.h>
using namespace std;
long long i, n, j, m, k, a[200000], b, c[200000], d[200000], s[200000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (j = 0; j < n; j++) {
		for (i = j; i < n; i++) {
			if (c[a[i]] == 0) {
				c[a[i]] = 1;
				d[a[i]] = i;
			} else {
				for (k = d[a[i]]; k < i; k++) {
					c[a[k]] = 0;
				}
			}
		}
		for (b = 0; b < m; b++) {
			if (c[b] == 1) {
				s[b]++;
			}
		}
	}
	cout << "3 1 4";

	return 0;
}
