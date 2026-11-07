#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int a, c, d, f, h, j;
	cin >> a >> j;
	const int n = a;
	const int i = j;
	int b[n];
	int e[n];
	int g[i + 1] = {0};
	for (c = 0; c < n; c++) {
		cin >> b[c];
	}
	for (c = 0; c < n; c++) {
		for (d = c; d < n; d++) {
			e[d] = b[d];
			for (f = c; f < d; f++) {
				if (e[d] == e[f]) {
					for (h = f; h <= d; h++) {
						e[h] == 0;
					}
					break;
				}
			}
		}
		for (d = c; d < n; d++) {
			cout << e[d];
			if (e[d] > 0) {
				g[e[d]]++;
			}
		}
	}
	for (d = 1; d < i; d++) {
		if (g[d] > 0) {
			cout << g[d] << " ";
		}
	}
	return 0;
}
