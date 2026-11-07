#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, a[1000001], b[1000001];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int c = i; c <= j; c++) {
				if (a[i] == a[j] && b[j] != 1) {
					for (int k = c; k < j; k++) {
						b[k] = 1;
					}
				}
			}
		}
		for (int j = i; j <= n; j++) {
			if (b[i] != 1) {
				b[a[i]]++;
			}
		}
		for (int j = 1; j <= n; j++) {
			b[i] = 0;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}