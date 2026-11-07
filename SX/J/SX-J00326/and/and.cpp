#include <bits/stdc++.h>
using namespace std;
long long n, m, a[200005], s, mmax = -1, mmax2 = -1, t, x, y;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	s = a[1];
	for (int i = 2; i <= n; i++) {
		s = s &a[i];
		t = a[i] & a[i - 1];
		mmax2 = max(mmax2, t);
		mmax = max(mmax, a[i]);
	}
	if (m == n) {}
	else if (m == 1) {
		s = mmax;
	} else if (m == 2) {
		s = mmax2;
	}
	cout << s;
	return 0;
}
