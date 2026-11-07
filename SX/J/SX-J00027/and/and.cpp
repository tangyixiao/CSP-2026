#include <bits/stdc++.h>

using namespace std;

const int kMaxN = 2e5 + 10;

int a[kMaxN], dp[kMaxN], n, k, sum;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios :: sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
		dp[0] = max(dp[0], a[i]);
		if (i == 1)
			sum = a[i];
		else
			sum &= a[i];
	}
	if (k == 1) {
		cout << dp[0];
		return 0;
	} else if (k == n) {
		cout << sum;
		return 0;
	}
	for (int i = 1; i <= n; i ++) {
		for (int j = k; j >= 1; j --) {
			dp[j] = max(dp[j], dp[j - 1] & a[i]);
		}
	}
	cout << dp[k];
	return 0;
}
