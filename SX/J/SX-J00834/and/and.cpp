#include <bits/stdc++.h>
using namespace std;
long long n, m, mmax, t, a[200005];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		t = a[i] & a[i + 1];
		mmax = max(mmax, t);
	}
	cout << mmax;
	return 0;
}
