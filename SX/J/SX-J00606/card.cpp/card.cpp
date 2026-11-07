#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, i,k = 0;
	cin >> n >> m >> i;
	int a[10000], b[10000];
	for (int h = 0; h <= n; h++) {
		a[h] = h + 1;
	}
	for (int j = 0; j <= n; j++) {
		if (a[j] = i) {
			for (int l = j; l >= 0; l-- ) {
				a[l] = 0;
				k += 1;
			}
		}
		cout << k;
		return 0;
	}
}