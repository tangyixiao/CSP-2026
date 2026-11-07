#include <bits/stdc++.h>
using namespace std;
long long a[200010];
int c[100000010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, j, k, ll, ma = -1;
	cin >> n >> m;
	int g[n + 1] = {0};
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		j = a[i];
		while (j != 0) {
			c[i] = c[i] * 10;
			c[i] = c[i] + j % 2;
			j = j / 2;
		}
	}
	for (int i = 1; i <= n - m + 1; i++) {
		while (c[i] != 0 && c[i + 1] != 0) {
			g[i] = c[i] % 10;
			c[i] = c[i] / 10;
			g[i + 1] = c[i + 1] % 10;
			c[i + 1] = c[i + 1] / 10;
			if (g[i] == 1 && g[i + 1] == 1) {
				k = k + 1;
				k = k * 10;
				cout << k << " ";
			}
		}
		if (k > ma)
			ma = k;
	}
	ma = ma / 10;
	cout << ma << endl;
	ll = 0;
	while (ma != 0) {
		ll = ll * 2 + ma % 10;
		ma = ma / 10;
	}
	cout << ll;
	return 0;
}
