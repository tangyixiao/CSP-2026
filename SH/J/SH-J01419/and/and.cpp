#include <bits/stdc++.h>
using namespace std;
const int maxn = 200005;
int n, m;
long long a[maxn];
unsigned long long dp[maxn]; //空间优化 将i维优化 表示（前i个选j个的最大值）
// dp不行 按位与不具有传递性 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	if (m == 1) {
		long long ans = -1;
		for (int i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
		cout << ans << '\n';
		return 0;
	} else if (m == 2) {
		long long ans = -1;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		} 
		cout << ans << '\n';
		return 0;
	} else if (m == n) {
		long long ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans & a[i];
		} 
		cout << ans << '\n';
		return 0;
	} else if (m == n - 1) {
		long long ans = -1;
		for (int i = 2; i <= n; i++) {
			long long tmp = a[1];
			for (int j = 2; j <= n; j++) {
				if (j != i) {
					tmp = tmp & a[j];
				}
			}
			ans = max(ans, tmp);
		} 
		cout << ans << '\n';
		return 0;
	}
	
	dp[1] = a[1];
	for (int i = 2; i <= n; i++) {
		if (i <= m) {
			dp[i] = dp[i - 1] & a[i];
			for (int j = i - 1; j >= 2; j--) {
				dp[j] = max(dp[j], dp[j - 1] & a[i]);
			}
		} else {
			for (int j = m; j >= 2; j--) {
				dp[j] = max(dp[j], dp[j - 1] & a[i]);
			}
		}
	} 
	
	cout << dp[m] << endl;
	return 0;
}
