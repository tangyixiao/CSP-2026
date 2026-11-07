#include <bits/stdc++.h>
using namespace std;
long long n, a[200010], s, r, cc, xx;
char c[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	r = n;
	for (int i = 1; i <= n; i++) {
		s = 0;
		for (int j = r; j >= 1; j--) {
			if (i == j) {
				xx = 1;
				break;
			}
			if (s + a[j] <= a[i]) {
				s += a[j];
				if (c[j] != c[i]) {
					cc += a[j];
				}
			} else {
				if (c[j] != c[i]) {
					cc += a[i] - s;
				}
				a[j] -= (a[i] - s);
				r = j;
				break;
			}
		}
		if (xx == 1) {
			break;
		}
	}
	cout << cc;
	return 0;
}
