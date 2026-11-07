#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], c[300005], y[800005], r = 0;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			r += 1;
			y[r] = a[j];
			for (int k = 1; k < r; k++) {
				if (y[k] == y[r]) {
					r = k;
				}
			}
		}
		for (int j = 1; j <= r; j++) {
			c[y[j]]++;
		}
		r = 0;
	}

	for (int j = 1; j <= m; j++) {
		cout << c[j] << ' ';
	}
	return 0;
}