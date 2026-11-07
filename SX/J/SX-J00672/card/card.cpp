#include <bits/stdc++.h>
using namespace std;
int n, m, a[300005], b[300005], c[300005], e[300005], d = -1;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			b[a[j]]++;
			d++;
			if (b[a[j]] >= 2) {
				bool g = 0;
				for (int k = 0; k < m; k++) {
					if (c[k] == a[j]) {
						d = k;
						g = 1;
						b[a[j]] = 1;
						c[k] = 0;
					}
					if (g) {
						b[c[k]] = 0;
						c[k] = 0;
					}
				}
			}
			c[d] = a[j];
		}
		for (int j = 0; j < m; j++) {
			if (b[j]) {
				e[j]++;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		cout << e[i] << ' ';
	}
	return 0;
}
//4 3 1 2 1 3