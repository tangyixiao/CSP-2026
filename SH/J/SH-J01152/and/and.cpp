#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[200005], dp[20005][20005];

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int maxans = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		dp[i][1] = max(a[i], dp[i - 1][1]);
		if (maxans == 0) {
			maxans = a[i];
		}
		maxans = (maxans & a[i]);
	}
	if (m == n) {
		cout << maxans;
		return 0;
	}
	if (m == 1) {
		cout << *max_element(a + 1, a + 1 + n);
		return 0;
	}
	if (m == 2) {
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans = max(ans, (a[i] & a[j]));
			}
		}
		cout << ans;
		return 0;
	}
	dp[1][1] = a[1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i][j] = max(dp[i - 1][j], (dp[i - 1][j - 1] & a[i]));
		}
	}
	cout << dp[n][m]; 
	return 0;
}
