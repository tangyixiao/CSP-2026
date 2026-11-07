#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int it[20000];
int dp[2000][2000];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		cin >> it[i];

	}
	for (int i = 1; i <= a; i++) {
		dp[1][i] = it[1];
	}
	dp[0][0] = 0;
	for (int i = 2; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			dp[i][j] = max(dp[i - 1][j], (dp[i - 1][j] & it[j]));
		}
	}
	for (int i = 1; i <= a; i++) {
		c = max(c, dp[i][b]);
	}
	cout << c;
	return 0;
}
