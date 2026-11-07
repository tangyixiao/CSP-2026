#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[10000005];
int xb[10000005];
int q[10000005];
int cnt1[10000005];
int maxx = 1e9+7;

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		xb[i] = maxx;
	}
	if (n == m) {
		for (int i = 0; i < n; i++) {
			cout << i << " ";
		}
		return 0;
	}
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = i; j < n; j++) {
			if (xb[a[j]] != maxx) {
				cnt = xb[a[j]];
				for (int k = xb[a[j]]; k <= j ; k++) {
					q[k] = 0;
					xb[a[k]] = maxx;
				}
			}
			q[cnt] = a[j];
			xb[a[j]] = cnt;
			cnt++;

		}
		for (int j = 0; j < n; j++) {
			cnt1[q[j]]++;
			q[j] = 0;
			xb[a[j]] = maxx;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt1[i] << " ";
	}
	return 0;
}
