#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
const int N = 2e5+10;
int a[N];

void dfs(int x, int k, int s) {
	if (k == m)
		ans = max(ans, s);
	for (int i = x + 1; i <= n; i++) {
		dfs(i, k + 1, (s &a[i]));
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		ans = max(ans, a[i]);
	}
	if (m == 1) {
		cout << ans;
		return 0;
	} else
		ans = 0;
	for (int i = 1; i <= n; i++) {
		dfs(i, 1, a[i]);
	}
	cout << ans;
	return 0;
}
