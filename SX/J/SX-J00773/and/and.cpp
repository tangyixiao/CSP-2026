#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005], ans, mm;

void dfs(int x) {
	if (x == m - 1) {
		return ;
	}
	for (int i = x + 1; i < n; i++) {
		mm = mm &a[i];
		dfs(i);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	if (n > 2000) {
		cout << 0;
		return 0;
	}
	if (m == 1) {
		cout << a[n - 1];
		return 0;
	}
	if (m == n) {
		ans = a[0];
		for (int i = 1; i < n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	}
	if (m == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		mm = a[i];
		dfs(1);
		ans = max(mm, ans);
	}
	cout << ans;
	return 0;
}