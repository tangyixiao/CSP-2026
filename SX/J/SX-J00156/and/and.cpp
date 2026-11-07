#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[1000009];

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	if (m == 1) {
		cout << a[1];
	} else if (m == 2) {
		int mmax = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				int aa = a[i] & a[j];
				mmax = max(mmax, aa);
			}
		}
		cout << mmax;
	} else if (m == n) {
		int mmax = a[1];
		for (int i = 1; i <= n; i++) {
			mmax = (mmax &a[i]);
		}
		cout << mmax;
	} else {
		int mmax = a[1];
		for (int i = 1; i <= m; i++) {
			mmax = (mmax &a[i]);
		}
		cout << mmax;
	}
	return 0;
}
