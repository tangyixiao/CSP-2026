#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], c[500005], a1, b1, c1;
bool h, b[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = n; i >= 1; i--) {
		cin >> a[n];
		a1++;
	}
	for (int i = 1; i <= n; i++) {
		c1 = a1 - i + 1;
		for (int j = i; j <= n; j++) {
			c[j] = a[j];
			h = false;
			for (int k = i; k <= n; k++) {
				if (a[j] == a[k]) {
					c1 = k;
					break;
				}
			}
			c[++c1] = c[j];
		}
		for (int j = i; j <= n; j++) {
			for (int k = 1; k <= m; k++) {
				if (c[j] == k) {
					b[k] = true;
				}
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		if (b) {
			cout << i;
		}
	}
	return 0;
}
