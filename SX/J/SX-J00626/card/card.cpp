#include <bits/stdc++.h>
using namespace std;
int f = 0, g, h;
int a[500000], z[300000], b[500000], x[300000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int q, w;
	cin >> q >> w;
	for (int i = 0; i < q; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < q; i++) {
		b[500000] = {0};
		f = 0;
		for (int l = i; l < q; l++) {
			for (int m = 0; m < f ; m++) {
				if (b[m] == a[l]) {
					g += 1;
					h = m;
					break;
				}
			}
			f++;
			if (g == 0) {
				b[f] = a[l];
				z[b[f]]++;
			} else {
				g = 0;
				for (int m = h + 1 ; m < f; m++) {
					z[b[m]]--;
					b[m] = 0;
				}
			}


		}
	}
	for (int d = 1; d <= w; d++) {
		cout << z[d] << ' ';
	}
	return 0;
}
