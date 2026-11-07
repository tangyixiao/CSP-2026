#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+5;
int n, m;
int ans[2];
int a[N];
int st[30];
int path[30];

void dfs(int u) {
	if (u > m) {
		int res = path[1];
		for (int i = 2; i <= m; i++) {
			res = res &path[i];
		}
		ans[1] = max(res, ans[1]);
		return ;
	}
	for (int i = 1; i <= n; i++) {
		if (!st[i]) {
			path[u] = a[i];
			st[i] = 1;
			dfs(u + 1);
			st[i] = 0;
		}
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n <= 20) {
		dfs(1);
		cout << ans[1];
		return 0;
	} else {
		if (m == 1) {
			sort(a + 1, a + 1 + n);
			cout << a[n];
			return 0;
		} else if (m == n) {
			int res = a[1];
			for (int i = 2; i <= n; i++) {
				res = res &a[i];
			}
			cout << res;
			return 0;
		} else {
			sort(a + 1, a + 1 + n);
			cout << a[n];
			return 0;
		}
	}
	return 0;
}
