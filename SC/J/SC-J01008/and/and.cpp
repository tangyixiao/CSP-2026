#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2 * 1e5 + 10;
ll n, m;
ll a[N], dp[N];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0);
    cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = m; j >= 1; j--) {
			dp[i] = a[i];
			dp[j] = max(dp[j], dp[j - 1] & a[i]);
		}
	}
	cout << dp[n];
	return 0;
}