#include <bits/stdc++.h>
using namespace std;
int n, m, a[200010], ma, d, k[200020], an, b[200020][35], c;

void abc(int i) {
	int x = a[i], y = 0;
	while (x >= 1) {
		b[i][++y] = x % 2;
		x /= 2;
	}
	ma = max(ma, y);
	return;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		abc(i);
	}
	d = n;
	for (int i = ma; i >= 0; i--) {
		if (d == m || i == 0) {
		}
		for (int j = 1; j <= n; j++) {
			if (b[j][i] == 0 && k[j] == 0) {
				c++;
			}
		}
		if (d - c >= m) {
			for (int j = 1; j <= n; j++) {
				if (b[j][i] == 0 && k[j] == 0) {
					k[j] = 1;
				}
			}
			d -= c;
		} else {
			for (int j = 1; j <= n; j++) {
				if (b[j][i] == 1 && k[j] == 0) {
					k[j] = 2;
				}
			}
		}
	}
	cout << an;
	return 0;
}
