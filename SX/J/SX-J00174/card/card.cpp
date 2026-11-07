#include <bits/stdc++.h>
using namespace std;
long long m, n, c[500005], tong[500005], tt[300005];
bool x, xx, yy;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		cin >> c[i];
		if (c[i] <= c[i - 1]) {
			xx = 1;
		}
		if (c[i] >= c[i - 1]) {
			yy = 1;
		}
	}
	if (yy == 0 || xx == 0) {
		cout << 1;
		for (int i = 2; i <= m; i++) {
			cout << " " << i;
		}
		return 0;
	}
	int l = 1, r = 0;
	while (l <= m) {
		r = 0;
		for (int i = l; i <= m; i++) {
			for (int j = 1; j <= r; j++) {
				if (tong[j] == c[i]) {
					for (int k = j + 1; k <= r; k++) {
						tong[k] = 0;
					}
					r = j;
					x = 1;
					break;
				}
			}
			if (x == 0) {
				r++;
				tong[r] = c[i];
			}
			x = 0;
		}
		for (int i = 1; i <= r; i++) {
			tt[tong[i]]++;
			tong[i] = 0;
		}
		l++;
	}
	for (int i = 1; i <= n; i++) {
		cout << tt[i] << ' ';
	}
	return 0;
}