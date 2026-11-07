#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5 + 5;

int ans, n, m, a[maxn];

void dfs(int x, int y, int now = INT_MAX) {
	if (x > n) {
		if (y == 0) ans = max(ans, now);
		return;
	}
	if (y == 0) dfs(n + 1, 0, now);
	dfs(x + 1, y - 1, now & a[x]);
	dfs(x + 1, y, now);
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	if (m == n) {
		ans = a[1];
		for (int i = 2; i <= n; ++i) ans &= a[i];
		cout << ans;
	}
	else {
		dfs(1, m);
		cout << ans;
	}
	return 0;
}