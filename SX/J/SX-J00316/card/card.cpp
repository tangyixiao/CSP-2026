#include <bits/stdc++.h>

using namespace std;

long long n, m, a[500005], b[300005], c[300005], d[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = n; i >= 1; i--) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		c[a[i]]++;
		if (c[a[i]] >= 2) {
			for (int j = d[a[i]] + 1; j < i; j++) {
				c[a[j]] = 0;
			}
		}
		d[a[i]] = i;
		for (int j = 1; j <= m; j++) {
			if (c[j] > 0)
				b[j]++;
		}
	}
	for (int i = 1; i <= m; i++)
		cout << b[i] << ' ';
	return 0;
}
