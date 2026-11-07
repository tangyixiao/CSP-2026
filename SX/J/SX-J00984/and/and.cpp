#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, m, a[N], maxx = LLONG_MIN, b[20], c[20], l;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			if (a[i] >= maxx)
				maxx = a[i];
		}
		cout << maxx;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				l = 0;
				memset(b, 0, sizeof(b));
				memset(c, 0, sizeof(c));
				while (a[i] != 0) {
					b[i] = a[i] % 2;
					a[i] /= 2;
				}
				while (a[j] != 0) {
					c[i] = a[j] % 2;
					a[j] /= 2;
				}
				for (int k = 8; k >= 1; k--) {
					if (b[k] != 0 && c[k] != 0) {
						l = l + pow(2, 8 - k);
					} else
						continue;
				}
				if (l >= maxx)
					maxx = l;
			}
		}
		cout << maxx;
	}
	return 0;
}