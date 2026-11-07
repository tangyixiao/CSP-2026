#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[201010];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 1) {
		int Max = LLONG_MIN;
		for (int i = 1; i <= n; i++)
			Max = max(Max, a[i]);
		cout << Max;
		return 0;
	}
	if (m == n) {
		int ans = a[1];
		for (int i = 2; i <= n; i++)
			ans = (ans & a[i]);
		cout << ans;
		return 0;
	}
	if (m == 2) {
		int Max = LLONG_MIN;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i != j) {
					Max = max(Max, (a[i] & a[j]));
				}
			}
		}
		cout << Max;
		return 0;
	}
	sort(a + 1, a + n + 1, greater<int>());
	int ans = a[1];
	for (int i = 2; i <= m; i++) {
		ans = (ans &a[i]);
	}
	cout << ans;
	return 0;
}