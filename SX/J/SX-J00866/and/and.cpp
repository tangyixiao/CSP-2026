#include <bits/stdc++.h>
// define int long long
using namespace std;
const int N = 5e3+5;
int n, m;
int a[N], dp[N][N];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
		dp[1][i] = max(dp[1][i - 1], a[i]);
	for (int i = 2; i <= m; i++) {
		for (int j = i; j <= n; j++) {
			for (int k = i - 1; k < j; k++) {
				dp[i][j] = max(dp[i][j], max(dp[i][j - 1], dp[i - 1][k] & a[j]));
			}
		}
	}
	cout << dp[m][n] << '\n';
	return 0;
}/*
please
let me have a silver lining
i don't want to AFO
//freopen()
please
even a little are okey
i'm pleased during this time
please
although i love ccf forever
i'll remember i'm a OIer until i'm dead
please
*/
