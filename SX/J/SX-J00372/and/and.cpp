#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 10;
ll a[N], mxx, xi, xj;

int main() {
	//freopen("and.in", "r", stdin);
	//freopen("and.out", "w", stdout);
	ll n, m, mx = 1;
	cin >> n >> m;
	for (ll i = 1; i <= n; i ++)
		cin >> a[i];
	if (m == 1) {
		for (ll i = 1; i <= n; i ++) {
			if (a[i] > mx)
				mx = a[i];
		}
	} else if (m == 2) {
		for (ll i = 1; i <= n - 1; i ++) {
			for (ll j = i + 1; j <= n; j ++) {
				if (a[i] & a[j] > mx) {
					int q = a[i];
					int w = a[j];
					mx = q &w;
				}

			}
		}
	} else if (m > 2) {
		for (ll i = 1; i <= n - 1; i ++) {
			for (ll j = i + 1; j <= n; j ++) {
				if (a[i] & a[j] > mx) {
					mx = a[i] & a[j];
					xi = i;
					xj = j;
				}

			}
		}
		a[xi] = 0;
		a[xj] = 0;
		mxx = mx & 1;
		for (ll i = 1; i <= m - 2; i ++) {
			for (ll j = 1; j <= n; j ++) {
				if (a[j]) {
					if (mx & a[j] > mxx) {
						mxx = mx & (a[j]);
						xj = j;
					}
				}
			}
			a[xj] = 0;
		}
	}

	cout << mxx;
	//fclose(stdin);
	//fclose(stdout);

	return 0;
}
