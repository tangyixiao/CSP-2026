#include <bits/stdc++.h>
using namespace std;
int arr[200005], n, m;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int dp[n + 5][m + 5];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i <= n; i++) {
		dp[i][0] = 1;
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			dp[i][j] = -1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			int x = dp[i - 1][j - 1] & arr[i];
			dp[i][j] = max(dp[i - 1][j], x);
		}
	}
	cout << dp[n][m];
	return 0;
}
