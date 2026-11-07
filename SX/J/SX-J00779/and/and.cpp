#include <bits/stdc++.h>
using namespace std;
int n, m, ans = 0;
int a[200005];
int v[200005];

void dfs(int x, int cnt) {
	if (x == m) {
		ans = max(ans, cnt);
		return;
	}
	for (int i = 0; i < n; i++) {
		if (v[i] == 0) {
			v[i] = 1;
			dfs(x + 1, cnt &a[i]);
			v[i] = 0;
		}
	}
	return;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		v[i] = 1;
		dfs(1, a[i]);

	}
	cout << ans;
	return 0;
}
