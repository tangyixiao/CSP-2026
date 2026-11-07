#include <bits/stdc++.h>
using namespace std;
#define N 200010
#define endl '\n'
#define int long long
int a[N], vis[N], ans = 0;
int n, m;

void dfs(int step, int ans2) {
	if (step == m + 1) {
		if (ans2 > ans) {
			ans = ans2;
		}
		return;
	}
	int ans3 = ans2;
	for (int i = 1; i <= n; i++) {
		if (step == 1) {
			vis[i] = 1;
			int b = a[i];
			ans2 = b;
			dfs(step + 1, ans2);
			vis[i] = 0;
		} else {
			if (vis[i] == 1)
				continue;
			vis[i] = 1;
			int b = a[i];
			ans2 = ans3 &b;
			dfs(step + 1, ans2);
			vis[i] = 0;
		}
	}
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(1, 0);
	cout << ans;

	return 0;
}