#include <bits/stdc++.h>
using namespace std;
long long a[200005];
long long maxx = -1;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == m) {
		long long ans = a[1];
		for (long long i = 1; i <= n; i++) {
			ans &= a[i];
		}
		cout << ans;
		return 0;
	}
	if (m == 1) {
		for (long long i = 1; i <= n; i++) {
			maxx = max(maxx, a[i]);
		}
		cout << maxx;
		return 0;
	}
	if (m == 2) {
		for (long long i = 1; i <= n; i++) {
			for (long long j = 1; j <= n; j++) {
				if (i != j) {
					maxx = max(maxx, a[i] & a[j]);
				}
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == n - 1) {
		for (long long i = 1; i <= n; i++) {
			long long ans;
			if (i == 1) {
				ans = a[2];
			} else {
				ans = a[1];
			}
			for (long long j = 1; j <= n; j++) {
				if (i != j) {
					ans &= a[j];
				}
			}
			maxx = max(maxx, ans);
		}
		cout << maxx;
		return 0;
	}
	for (long long i = 1; i <= n; i++) {
		maxx = max(maxx, a[i]);
	}
	cout << maxx;
	return 0;
}
