#include<bits/stdc++.h>
using namespace std;
//按位与&：都是1才为1
long long n, m, ans = 0;
long long a[200005];
int t[2000006] = {};
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	const int N = n;
	const int M = m;
	for (int k = 1; k <= n; ++k) {
		if (t[a[k]] == 1) continue;
		t[a[k]] = 1;
		bool vis[N] = {};
		long long dp[M + 5] = {};
		dp[1] = a[k];
		vis[k] = 1;
		for (int i = 2; i <= m; ++i) {
			int fl = 0;
			for (int j = 1; j <= n; ++j) {
				if (vis[j] == 1) continue;
				else {
					if (dp[i] < (dp[i - 1]&a[j])) {
						fl = j;
						dp[i] = (dp[i - 1] & a[j]);
					}
				}
			}
			vis[fl] = 1;
		}
		ans = max(ans, dp[m]);
	}
	cout << ans;
	return 0;
}