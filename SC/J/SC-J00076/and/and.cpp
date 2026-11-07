#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[200010];
int ans;
int dfs (int x, int s, int maxn) {
	int k = maxn;
	if (s == 0) {
		ans = max (ans, k);
		return 0;
	}
	if (n - x + s + 1 < m) return 0;
	dfs (x + 1, s, maxn);
	dfs (x + 1, s - 1, maxn & a[x]);
}
int main () {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n <= 20) {
		for (int i = 1; i <= n; i++) {
			dfs (i + 1, m - 1, a[i]);
		}
	} else {
		if (m == 1) {
			for (int i = 1; i <= n; i++) {
				ans = max (a[i], ans);
			}
		} else if (m == n) {
			for (int i = 1; i <= n; i++) {
				ans = ans & a[i];
			}
		} else {
			for (int i = 1; i <= n; i++) {
				for (int j = i + 1; j <= n; j++) {
					ans = max (a[i] & a[j], ans);
				}
			}
		}
	}
	cout << ans;
//	sort (a + 1, a + 1 + n, greater());
	return 0;
}