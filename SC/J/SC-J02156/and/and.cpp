#include <bits/stdc++.h>

using namespace std;

const int Maxn = 2e4 + 5; // ***
int a[Maxn], dp[Maxn][Maxn];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	
	int n, m; cin >> n >> m;
	int state = 1;
	dp[0][0] = (1 << 30) - 1;
	for (int i = 1; i <= n; i++) {
		cin >> a[i]; dp[i][0] = (1 << 30) - 1;
		if (1 << (__lg(a[i]) + 1) != a[i] + 1)
			state = 0;
	}
	
	if (m == n) {
		int ans = a[1];
		for (int i = 2; i <= n; i++)
			ans &= a[i];
		cout << ans << endl;
		return 0;
	}
	
	if (m == 1) {
		int ans = a[1];
		for (int i = 2; i <= n; i++)
			ans = max(ans, a[i]);
		cout << ans << endl;
		return 0;
	}
	
	if (m == 2) {
		int ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans << endl;
		return 0;
	}
	
	if (state) {
		sort(a + 1, a + n + 1);
		cout << a[m] << endl;
		return 0;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i && j <= m; j++) {
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1] & a[i]);
		}
	}
	
	cout << dp[n][m] << endl;
	return 0;
}