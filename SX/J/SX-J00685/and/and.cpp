#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		ll maxn = 0;
		for (int i = 1; i <= n; i++) {
			maxn = max(maxn, a[i]);
		}
		cout << maxn;
	} else if (m == 2) {
		ll maxn = 0;
		for (int i = 1; i < n; i++) {
			for (int j = 1; j <= n; j++) {
				maxn = max(maxn, a[i] & a[j]);
			}
		}
		cout << maxn;
	} else if (m == n) {
		ll sum = a[1];
		for (int i = 2; i <= m; i++) {
			sum &= a[i];
		}
		cout << sum;
	}
	return 0;
}