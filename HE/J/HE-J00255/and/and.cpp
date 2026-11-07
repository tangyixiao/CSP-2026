#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5 + 10;
long long n, m;
long long a[N];
long long dp[N];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort (a + 1, a + n + 1);
	long long ans = a[n - m + 1];
	for (int i = n - m + 1; i <= n; i++) {
		ans = (ans & a[i]);
	}
	cout << ans;
	return 0;
}
