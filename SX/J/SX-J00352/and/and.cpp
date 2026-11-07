#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
int n, m;
int ans = INT_MIN;
bool vis[200005];

void dfs(int step, int x) {
	if (step == m) {
		if (ans < x)
			ans = x;
//		cout << endl;
	} else {
		for (int i = 1; i <= n; i++) {
			if (!vis[i]) {
//				cout << a[i] << ':' << vis[i] << ':';
				vis[i] = 1;
//				cout << vis[i] << ' ';
				dfs(step + 1, x &a[i]);
				vis[i] = 0;
			}
		}
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	memset(vis, 0, sizeof(vis));
	dfs(0, INT_MAX);
	cout << ans;
	return 0;
}