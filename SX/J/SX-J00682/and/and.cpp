#include <bits/stdc++.h>

using namespace std;
int dp[5005][5005];
int n, m, a[5005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 1) {
		int ans = 0;
		for (int i = 1; i <= n; i++)
			ans = max(ans, a[i]);
		cout << ans;
		return 0;
	} else if (m == n) {
		int ans = a[1];
		for (int i = 2; i <= n; i++)
			ans = ans & a[i];
		cout << ans;
		return 0;
	} else if (m == 2) {
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans;
		return 0;
	}
	bool flag = 1;
	for (int i = 1; i <= n; i++) {
		bool f = 0;
		for (int j = 0; j <= 30; j++) {
			if (a[i] == (1 << j) - 1) {
				f = 1;
				break;
			}
		}
		if (!f)
			flag = 0;
	}
	if (flag) {
		sort(a + 1, a + n + 1, greater<int>());
		cout << a[m];
		return 0;
	}
	for (int i = 1; i <= n; i++)
		dp[i][1] = a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= min(i, m); j++) {
			for (int k = j - 1; k <= i; k++)
				dp[i][j] = max(dp[i][j], dp[k][j - 1] & a[i]);
		}
	}
	cout << dp[n][m];
	return 0;
}
