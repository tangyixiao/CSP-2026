#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
int n, m, a[maxn], ans = INT_MIN, vis[maxn];
int inf = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 - 1; 

void dfs(int sum, int d) {
	if (d == m) {
		ans = max(ans, sum);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			vis[i] = 1;
			dfs(sum & a[i], d + 1);
			vis[i] = 0;
		}
	}
	return;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(inf, 0);
	cout << ans;
	
	return 0;
}
