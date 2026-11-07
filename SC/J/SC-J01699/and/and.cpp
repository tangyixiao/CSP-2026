#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m, ans = 0;
int a[200005];
bool vis[200005];

void dfs(int sum, int num) {
	if (num == m) {
		ans = max(ans, sum);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			vis[i] = 1;
			dfs(sum & a[i], num + 1);
			vis[i] = 0;
		}
	}
	return;
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	dfs((1 >> 63) - 1, 0);
	cout << ans;
	return 0;
}