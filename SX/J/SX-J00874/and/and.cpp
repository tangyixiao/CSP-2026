#include <bits/stdc++.h>
using namespace std;
int n, m;
long long dp[10005], a[100005];

int main() {
	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int ia, ja;
	long long maxn = INT_MIN;
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			int md = dp[2];
			dp[2] = max(a[i] & a[j], dp[2]);
			if (dp[2] != md) {
				ia = i;
				ja = j;
			}

		}
	}
	maxn = dp[2];
	a[ia] = 0;
	a[ja] = 0;
	for (int k = 3; k <= m; k++) {


		for (int j = 1; j <= n; j++) {
			int md = dp[k];
			dp[k] = max(dp[k - 1] & a[j], dp[k]);
			if (dp[k] != md) {

				ja = j;
			}



		}
		maxn = dp[k];
		a[ja] = 0;
	}
	cout << maxn;
	return 0;

}
