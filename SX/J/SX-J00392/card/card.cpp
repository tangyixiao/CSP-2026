#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen ("card.in", "r", stdin);
	freopen ("card.out", "w", stdout);

	int n, m;
	cin >> n >> m;
	int a[5000005];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int b[5000005];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			b[j] = a[j];
			for (int q = 1; q <= n; q++) {
				if (b[j] == a[q]) {
					b[q] = b[j];
				}
			}
		}
		a[i] = a[i + 1];
	}
	for (int i = 1; i <= m; i++) {
		int cnt = 0;
		for (int j = 1; j <= m; j++) {
			if (b[j] == i) {
				cnt++;
			}
		}
		cout << cnt;
	}
	return 0;
}
