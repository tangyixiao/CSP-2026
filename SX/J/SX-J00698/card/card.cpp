#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[500005], b[500005], c[500005], k, ans[500005], n, m, d[500005];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (i != 1 && a[i] == a[i - 1]) {
			i--;
			n--;
			d[i]++;
		}
	}
	for (int i = 1; i <= n; i++)
		d[i]++;
	for (int i = 1; i <= n; i++) {
		memset(b, 0, sizeof(b));
		k = 0;
		for (int j = i; j <= n; j++) {
			if (b[a[j]]) {
				while (c[k] != a[j]) {
					b[c[k]] = 0;
					k--;
				}
			} else {
				c[++k] = a[j];
				b[a[j]] = 1;
			}
		}
		for (int j = 1; j <= k; j++) {
			ans[c[j]] += d[i];
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i];
		if (i != m)
			cout << ' ';
	}
	return (0 - 0);
}
/*
11 3
3 1 2 1 3 2 3 1 1 2 1
*/
