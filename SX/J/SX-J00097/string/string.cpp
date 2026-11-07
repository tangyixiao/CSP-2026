#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[200010];
char b[200010];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int x;
		char y;
		cin >> x >> y;
		if (y == b[i - 1]) {
			a[i - 1] += x;
			i--;

			n--;
		} else {
			a[i] = x;
			b[i] = y;
		}
	}
	int tt = n, hh = 1;
	int ans = 0;
	while (tt - hh + 1 > 1) {

		if (b[tt] == b[hh]) {
			if (a[hh] < a[tt]) {
				a[tt] -= a[hh];
				hh++;
			} else if (a[hh] > a[tt]) {
				a[hh] -= a[tt];
				tt--;
			} else if (a[hh] == a[tt]) {
				hh++;
				tt--;
			}
		}
		if (b[tt] != b[hh]) {
			if (a[hh] < a[tt]) {
				a[tt] -= a[hh];
				ans += a[hh];
				hh++;
			} else if (a[hh] > a[tt]) {
				a[hh] -= a[tt];
				ans += a[tt];
				tt--;
			} else if (a[hh] == a[tt]) {
				ans += a[hh];
				hh++;
				tt--;
			}
		}
	}
	cout << ans;
	return 0;
}
