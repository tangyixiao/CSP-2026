#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 1;
int n, m, ans, a[N];

void dfs(int x, int cnt, int val) {
	if (cnt == m) {
		ans = max(ans, val);
		return;
	}
	for (int i = x + 1; i < n; i++)
		dfs(i, cnt + 1, val & a[i]);
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		if (i <= n - m)
			dfs(i, 1, a[i]);
	}
	cout << ans;
	return 0;
}
