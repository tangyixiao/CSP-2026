#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, l = 0;
	cin >> n >> m;
	int a[n + 10], b[n + 10], c[n + 10], t[n + 10];

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		t[i] = a[i];
		b[i] = 0;
		c[i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (a[k] == j) {
					l++;
					b[l] = k;
				}
			}
			if (l > 1) {
				for (int k = b[1]; k < b[l]; k++)
					a[k] = 0;
			}
			l = 0;
		}
		for (int j = 1; j <= n; j++) {
			if (a[j] != 0) {
				c[a[j]]++;
			}
		}

		for (int j = i + 1; j <= n; j++) {
			a[j] = t[j];
		}
		a[i] = 0;
	}

	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}
