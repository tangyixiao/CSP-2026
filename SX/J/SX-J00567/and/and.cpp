#include <bits/stdc++.h>
using namespace std;
int a[200005], dp[2005][2005], maxx = -9;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		maxx = max(maxx, a[i]);
		cin >> a[i];
		dp[i][0] = maxx;
	}
	maxx = -111;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			for (int k = 1; k <= min(n, m); k++) {
				dp[i][k] = max(dp[i][k], (dp[j][k - 1] & a[i]));
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		maxx = max(maxx, dp[i][m]);
	}
	cout << maxx;
	return 0;
}