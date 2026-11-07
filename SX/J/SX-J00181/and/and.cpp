#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], ans, mmax = INT_MIN;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == n) {
		ans = a[1];
		for (int i = 1; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
	} else if (m == 1) {
		for (int i = 1; i <= n; i++) {
			mmax = max(mmax, a[i]);
		}
		cout << mmax;
	}
	return 0;
}
