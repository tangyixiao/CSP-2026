#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200005];
int ans = 0;

void dfs(int x, int cnt, int sum) {
	if (cnt == m) {
		ans = max(ans, sum);
		return;
	}
	for (int i = x + 1; i <= n; i++) {
//		cout << (sum &a[i]) << endl;
		dfs(i, cnt + 1, cnt == 0 ? a[i] : sum &a[i]);
	}
}
int h = 0, mi = INT_MAX;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		h = (i == 1 ? a[i] : a[i] & h);
		mi = min(mi, a[i]);
	}
	if (n == m) {
		cout << h;
		return 0;
	}
	if (n > 2000) {
		cout << mi;
		return 0;
	}
	dfs(0, 0, -1);
	cout << ans;
	return 0;
}
