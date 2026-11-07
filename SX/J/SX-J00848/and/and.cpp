#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, a[200010], ans, mx, f = 1, ff = 1, anss;

void dfs(int sum, int cnt, int pos) {
	if (pos > n) {
		if (m == cnt) {
			mx = max(mx, sum);
		}
		return ;
	}
	dfs(sum, cnt, pos + 1);
	dfs(sum &a[pos], cnt + 1, pos + 1);
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if ((a[i] + 1) & (-(a[i] + 1)) != a[i] + 1) {
			f = 0;
		}
		if (a[i] != i - 1) {
			ff = 0;
		}
		ans = a[1];
		if (m == n) {
			ans = ans &a[i];
		}
	}
	if (m == n) {
		cout << ans;
		return 0;
	}
	sort(a + 1, a + n + 1, greater<int>());
	if (f == 1) {
		cout << a[m];
		return 0;
	}
	if (ff = 0) {
		cout << a[m];
		return 0;
	}
	if (m == 1) {
		cout << a[1];
		return 0;
	}
	anss = a[1];
	if (m == n - 1) {
		for (int i = 1; i <= n - 1; i++) {
			anss = anss &a[i];
		}
		cout << anss << ' ';
	}
	if (n <= 50) {
		dfs(a[1], 0, 1);
		cout << mx;
		return 0;
	}
	return 0;
}
