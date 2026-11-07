#include <bits/stdc++.h>
using namespace std;
const int N = 1e4+5;
int n, m, a[N], mx = -1;
int dp[N][N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	memset(dp, 0, sizeof(dp));
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		dp[i][1] = max(dp[i - 1][1], a[i]);
		mx = max(mx, a[i]);
	}
	if (n == 1) {
		printf("%d\n", a[1]);
		return 0;
	}
	if (m == 1) {
		printf("%d\n", mx);
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dp[i][j] = max(dp[i][j], max(dp[i - 1][j], dp[i - 1][j - 1] & a[i]));
		}
	}
	printf("%d\n", dp[n][m]);
	return 0;
}
