#include <bits/stdc++.h>
using namespace std;
int n, m;
long long a[200005];
long long dp[5555555][5555555];

int main() {
	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dp[0][0] = a[1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] & a[i]);
		}
	}
	cout << dp[n][m];
	return 0;
}
