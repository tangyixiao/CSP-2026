#include <bits/stdc++.h>
#define int long long

using namespace std;

int n, m;
int a[500005] = {};
int ans[300005] = {};

void solve() {
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> a[i];

	for (int t = 1; t <= n; ++t) {
		int tbl[n] = {}, it = 0;
		for (int i = t; i <= n; ++i) {
			int now = a[i];
			for (int j = 0; j <= it; ++j) {
				if (now == tbl[j]) {
					it = j;
					break;
				}
			}
			tbl[it++] = now;
		}
		for (int i = 0; i < it; ++i) ans[tbl[i]]++;
	}
	for (int i = 1; i <= m; ++i) cout << ans[i] << ' ';
}

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	solve();
}