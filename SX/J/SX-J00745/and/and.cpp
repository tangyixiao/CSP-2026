#include <bits/stdc++.h>
using namespace std;
long long a[10010], b[10010], c[10010], d[100010], n, m, k = 1, ma = -1, l;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ma = max(ma, a[i]);
		while (a[i]) {
			b[k] = a[i] % 2;
			k++;
			a[i] /= 2;
		}
		for (int j = k - 1; j >= 1; j--) {
			c[l] = b[i];
			l++;
		}
	}
	if (m == 1)
		cout << ma;
	return 0;
}

