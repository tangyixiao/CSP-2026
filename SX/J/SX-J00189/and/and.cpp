#include <bits/stdc++.h>
using namespace std;
long long  n, m;
long long  a[20000005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.in", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	long long ans = 0;
	if (m == 1) {
		sort(a + 1, a + n + 1);
		cout << a[n];
		return 0;
	}
	if (m == n) {
		sort(a + 1, a + n + 1);
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	}
	if (m == n - 1) {
		sort(a + 1, a + n + 1);
		ans = a[2];
		for (int i = 3; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	}
	/*if (m == 2) {
		sort(a + 1, a + n + 1);
		cout << 1LL * a[n]&a[n - 1] * 1LL;
		return 0;
	}*/
	ans = a[n];
	for (int i = m; i <= 1; i--) {
		ans = ans &a[i];
	}
	cout << ans;

	return 0;

}
