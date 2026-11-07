#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1000010], b[1000010], c[1000010];


int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		b[1000010] = {};
		for (int j = i; j <= n; j++) {
			for (int k = j - 1; k >= i; k--) {
				if (a[j] == a[k]) {
					for (int g = k; g <= j - 1; g++) {
						b[g] = 1;

					}
				}
			}

		}
		for (int o = i; o <= n; o++) {
			if (b[o] == 0) {
				c[a[o]]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << c[i] << " ";
	}
	return 0;
}