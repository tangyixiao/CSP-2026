#include <bits/stdc++.h>
using namespace std;
int a[20000000], d[20000000], g[20000000], f[20000000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int b, c, e, m = 1, n = 0;
	cin >> b >> c;
	e = b;
	for (int i = 1; i <= b; i++) {
		cin >> a[i];
	}
	for (int j = 1; j <= b; j++) {
		for (int i = 1 + n; i <= b; i++) {
			if (f[a[i]] == 1) {
				for (int l = 1 + n; l <= b; l++) {
					d[l] = 0;
				}
				for (int l = 1; l <= c; l++) {
					f[l] = 0;
				}
				m = 1;
			}
			d[m] = a[i];
			f[a[i]] = 1;
			m++;
		}
		for (int l = 1; l <= c; l++) {
			if (f[l] == 1) {
				g[l]++;
			}
		}
		for (int l = 1 + n; l <= b; l++) {
			d[l] = 0;
		}
		for (int l = 1; l <= c; l++) {
			f[l] = 0;
		}
		m = 1;
		n++;
	}
	for (int i = 1; i <= c; i++) {
		cout << g[i] << " ";
	}
	return 0;
}