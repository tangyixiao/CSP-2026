#include <bits/stdc++.h>
using namespace std;
int a, s, d[500007], f[300007], q, z, w[500007], e, x;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> a >> s;
	for (int i = 1; i <= a; i++) {
		cin >> d[i];
	}
	for (int i = 1; i <= a; i++) {
		for (int j = 1 + z; j <= a; j++) {
			e++;
			for (int k = 1; k <= e; k++) {
				if (d[j] == w[k]) {
					x++;
					for (int l = k; l <= j; l++) {
						w[l] = -1;
					}
					e = k;
				}
			}
			if (x != 1) {
				w[e] = d[j];
			}
			x = 0;
		}
		for (int k = 1; k <= s; k++) {
			for (int j = 1; j <= e; j++) {
				cout << w[j] << ' ';
				if (w[j] == k) {
					f[k]++;
					k++;
				}
			}
		}
		for (int j = 1; j <= e; j++) {
			w[j] = -1;
		}
		z++;
		e = 0;
	}
	for (int i = 1; i <= s; i++) {
		cout << f[i] << ' ';
	}
	return 0;
}
