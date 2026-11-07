#include <bits/stdc++.h>
using namespace std;
long long dp[200005];
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		dp[0] = a[i];
		for (int j = m; j >= 1; j--) {
			dp[j] = max(dp[j], dp[j - 1] & a[i]);
		}
	}
	cout << dp[m];
}