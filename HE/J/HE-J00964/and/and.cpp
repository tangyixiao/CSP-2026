#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 5;
int n, m;
int a[N];
bool cmp(int a, int b) {
	return a > b;
}
void solve() {
	sort(a + 1, a + n + 1, cmp);
	int ans = a[1];
	for (int i = 2; i <= m; i++) {
		ans &= a[i];
	}
	cout << ans << '\n';
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
		cout << ans << '\n';
		return 0;
	}
	if (m == n) {
		int ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans &= a[i];
		}
		cout << ans << '\n';
		return 0;
	}
	solve();
	return 0;
}
