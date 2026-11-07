#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, dp[20005][20005], v, m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> v;
		dp[i][1] = v;
		for (int j = 2; j <= m; j++) {
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] & v);
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans = max(ans, dp[i][m]);
	}
	cout << ans;
	return 0;
}