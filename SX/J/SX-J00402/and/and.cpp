#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 2 * 1e5;
long long n, m, cnt;
long long a[maxn], dp[maxn];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		dp[0] = a[1];
		for (int j = i + 1; j <= n; j++) {
			for (int l = m; l >= 1; l--) {
				dp[l] = max(dp[l], dp[l - 1] & a[j]);
			}
		}
		cnt = max(dp[m], cnt);
	}
	cout << cnt;
	return 0;
}
