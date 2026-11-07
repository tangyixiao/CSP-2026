#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n = 0, m = 0, a[200010] = {}, dp[200010] = {};
	cin >> n >> m;
	memset(dp, -1, memset(dp));
	for (int i = 0; i < n; ++i) cin >> a[i], dp[1] = max(dp[1], a[i]);
	if (m == 1) {
		cout << dp[1];
		return 0;
	}
	if (m == 2) {
		int mx = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) if (i != j) mx = max(mx, a[i] & a[j]);
		}
		cout << mx; 
		return 0;
	}
	return 0;
}
