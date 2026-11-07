#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n >> m;
	int a[n + 1];
	int dp[n + 1][m + 1];
	memset(dp, 0, sizeof(dp));
	int z = 1 << (31) - 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		z = z &a[i];
		dp[i][1] = max(a[i], dp[i - 1][1]);

	}
	for (int i = 1; i <= n; i++) {
		for (int j = 2; j <= min(i, m); j++) {
			dp[i][j] = max(dp[i - 1][j], (dp[i - 1][j - 1] & a[i]));
		}
	}
	cout << dp[n][m];
}
