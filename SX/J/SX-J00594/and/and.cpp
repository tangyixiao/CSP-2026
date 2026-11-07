#include <bits/stdc++.h>
using namespace std;

int ans = 0, a[200005], n, m, b[200005], c[200005];

bool check(int n) {
	while (n >= 1) {
		n /= 2;
	}
	if (n == 1)
		return 1;
	return 0;
	return 0;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	if (m == 1) {
		for (int i = 1; i <= n; ++i)
			ans = max(ans, a[i]);
		cout << ans << endl;
		return 0;
	} else if (m == n) {
		ans = a[1];
		for (int i = 1; i <= n; ++i) {
			ans &= a[i];
		}
		cout << ans << endl;
		return 0;
	} else if (m == 2) {
		for (int i = 1; i <= n; ++i) {
			for (int j = i + 1; j <= n; ++j) {
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans << endl;
	} else if (check(n) == 1) {
		int ans = n - 1;
		for (int i = n; i >= 1; --i) {
			ans &= a[i];
		}
		cout << ans << endl;
	} else {
		sort (a + 1, a + n + 1);
		ans = a[n];
		for (int i = n; i >= n - m + 1; ++i) {
			ans &= a[i];
		}
		cout << ans << endl;
	}
	return 0;
}
