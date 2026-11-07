#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], ans;

int dfs(int s, int step) {
	if (m == step) {
		return INT_MAX;
	}
	for (int i = s - 1; i >= m - step + 1; i--) {
		ans = max(ans, a[i] & dfs(i, step + 1));
	}
	return ans;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	if (m == 1) {
		cout << a[n];
		return 0;
	}
	if (m == n) {
		ans = a[1];
		for (int i = 1; i <= n; i++) {
			ans = (ans &a[i]);
		}
		cout << ans;
		return 0;
	}
	cout << dfs(n, 1);
	return 0;
}
