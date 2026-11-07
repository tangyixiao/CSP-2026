#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n, m, a[N], ans;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	ans = a[1];
	if (m == n) {
		for (int i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
	} else if (m == 1) {
		for (int i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
	} else {
		sort(a + 1, a + n + 1);
		ans = a[n];
		for (int i = n - 1; m > 0; i--, m--) {
			ans = ans &a[i];
		}
	}
	cout << ans;
	return 0;
}
