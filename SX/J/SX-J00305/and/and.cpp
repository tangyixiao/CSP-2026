#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, mmax = LLONG_MIN;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		mmax = max(mmax, a[i]);
	}
	if (m == 1) {
		cout << mmax;
	} else if (m == 2) {
		mmax = LLONG_MIN;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				mmax = max(mmax, a[i] & a[j]);
			}
		}
		cout << mmax;
	} else if (m == n) {
		int sum = a[1];
		for (int i = 2; i <= n; i++) {
			sum &= a[i];
		}
		cout << sum;
	} else {
		cout << mmax;
	}

	return 0;
}