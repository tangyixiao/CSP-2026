#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5, M = 2e2+5;
int n, m, a[N], dp[N][M];
int ans = -0x3f3f3f3f;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	if (m > M) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		dp[i][1] = a[i];
	}
	for (int i = 2; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (j == 1) {
				dp[j][i] = 0;
			} else {
				ans = 0;
				for (int k = 1; k < j; k++) {
					ans = max(ans, (dp[k][i - 1] & dp[j][1]));
				}
				dp[j][i] = ans;
			}
		}
	}
	ans = 0;
	for (int i = 1; i <= n; i++) {
		ans = max(ans, dp[i][m]);
	}
	cout << ans;
	return 0;
}