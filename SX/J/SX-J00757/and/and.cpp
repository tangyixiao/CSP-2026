#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m, a[200005], sum;

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int mmax1 = 0, mmax2 = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum = sum &a[i];
		mmax1 = max(mmax1, a[i]);
		for (int j = 1; j < i; j++) {
			mmax2 = max(mmax2, a[i] & a[j]);
		}
	}
	if (n == m) {
		cout << sum;
	} else if (m == 1) {
		cout << mmax1;
	} else if (m == 2) {
		cout << mmax2;
	} else {

		sort(a + 1, a + n + 1);
		reverse(a + 1, a + n + 1);
		int sum2 = a[1];
		for (int i = 2; i <= m; i++) {
			sum2 = sum2 &a[i];
		}
		cout << sum2;
	}
	return 0;
}
