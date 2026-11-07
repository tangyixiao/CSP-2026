#include <bits/stdc++.h>
using namespace std;

int main() {
	int y[1000];
	int b[1000];
	//freopen("card.in", "r", stdin);
	//freopen("card.out", "w", stdout);
	int m, n, a[1000];
	cin >> m >> n; // ‰»Î
	for (int i = 1; i < m; i++) {
		cin >> a[i];
	}
	for (int iee = 1; iee <= m; iee++) {

		for (int i = iee + 1; i <= m; i++) {
			for (int p = i - 1; p > 0; p++) {
				if (a[i] == a[p]) {
					for (int o = p; o < i; o++) {
						y[o] = 1;
					}
				}
			}
		}
		for (int io = 1; io <= m; io++) {
			for (int iop = 1; iop <= n; iop++) {
				if (y[io] != 1 && a[io] == iop) {
					b[iop]++;

				}
			}
		}


	}
	for (int i = 1; i <= n; i++) {
		cout << b[i];
	}
	return 0;
}