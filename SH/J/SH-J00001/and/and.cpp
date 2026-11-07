#include <bits/stdc++.h>
using namespace std;

int n, m;
long long ans;
long long a[200005];

void dfs(int i, int x, long long cnt) {
	if (x > m) return;
	if (x == m) {
		ans = max(ans, cnt);
		return;
	}
	if (i > n) return;
	if (m - x > n - i + 1) return;
	if (x != 0) {
		dfs(i + 1, x, cnt);
	}
	dfs(i + 1, x + 1, cnt & a[i]);
}

int main() {
	freopen("and.in", "r", stdin);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n - m; i++) {
		dfs(i, 0, a[i]);
	}
	freopen("and.out", "w", stdout);
	cout << ans;
	return 0;
}

