#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+55;
int a[N], n, m, maxx = INT_MIN, ma = INT_MIN;

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxx = max(maxx, a[i]);
	}
	if (m == 1)
		cout << maxx;
	if (m == n) {
		int k = (a[1] & a[2]);
		for (int i = 3; i <= n; i++) {
			k = (k &a[i]);
		}
		cout << k;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == j)
					continue;
				else {
					ma = max(ma, (a[i] & a[j]));
				}
			}
		}
		cout << ma;
	}
	return 0;
}