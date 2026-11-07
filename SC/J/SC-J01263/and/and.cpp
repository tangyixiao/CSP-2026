#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005];
ll shu[35];
ll dp[10005][10005];
int main () {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	int n, m, s = 1;
	for (int i = 1; i <= 30; i++) {
		s *= 2;
		shu[i] = s - 1;
	}
	bool f = 1;
	ll maxx = -1e18;
	cin >> n >> m;
	int ss = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		for (auto x : shu) {
			if (a[i] == x) {
				ss++;
				break;
			}
		}
		if (a[i] != i - 1) f = 0;
		maxx = max(a[i], maxx);
	}
	if (f) {
		cout << (a[n] & a[n - 1]);
		return 0;
	}
	if (ss == n) {
		sort(a + 1, a + 1 + n);
		cout << a[n - m + 1];
		return 0;
	}
	if (m == 1) {
		cout << maxx;
		return 0;
	}
	if (m == n) {
		ll sum = 0;
		for (int i = 1; i <= n; i++) {
			sum &= a[i];
		}
		cout << sum;
		return 0;
	}
	if (m == 2) {
		ll ma = -1e18;
		for (int i = 1; i < n; i++) {
			for (int j = i + 1; j <= n; j++) {
				ma = max(ma, (a[i] & a[j]));
			}
		}
		cout << ma;
		return 0;
	}
	if (m == n - 1) {
		ll maxx = -1e18;
		for (int i = 1; i <= n; i++) {
			ll su = a[1];
			for (int j = 2; j <= n; j++) {
				if (j != i) su &= a[j];
			}
			maxx = max(maxx, su);
		}
		cout << maxx;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		dp[i][1] = a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 2; j <= m; j++) {
			ll maxx = -1e18;
			for (int k = 1; k < i; k++) {
				maxx = max(maxx, dp[k - 1][j]);
			}
			dp[i][j] = max((dp[i - 1][j - 1] & a[i]), maxx);
		}
	}
	ll ma = -1e18;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cout << dp[i][j] << ' ';
//		}
//		cout << '\n';
//	}
	for (int i = 1; i <= n; i++) {
		ma = max(ma, dp[i][m]);
	}
	cout << ma;
	return 0;
}
/*
4 2
3 15 12 12
*/