#include <bits/stdc++.h>
using namespace std;
int a[200005], vis[200005], n, m, ans;

void dfs(int cur, int sum, int lst) {
	vis[lst] = 1;
	if (cur == n + 1) ans = max(ans, sum);
	if (sum <= ans) return ;
	for (int i = 1; i <= n; i++) if (!vis[i]) dfs(cur + 1, sum & a[i], i);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	if (m == 1) {
		int maxn = -1e9;
		for (int i = 1; i <= n; i++) maxn = max(maxn, a[i]);
		cout << maxn;
	} else if (m == 2) {
		int maxn = -1e9;
		for (int i = 1; i <= n; i++) for (int j = i + 1; j <= n; j++) maxn = max(maxn, a[i] & a[j]);
		cout << maxn;
	} else if (m == n) {
		int sum = a[1];
		for (int i = 2; i <= n; i++) sum &= a[i];
		cout << sum;
	} else {
		for (int i = 1; i <= n; i++) dfs(2, a[i], i);
		cout << ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
