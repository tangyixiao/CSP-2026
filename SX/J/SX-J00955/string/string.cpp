#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long n, m, a[N], cnt, ds[N], dz[N], k, qh, x, y, e;
string zm[N], h;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k >> h;
		m += k;
		if (h == zm[i - 1]) {
			a[i - 1] += k;
			dz[i - 1] = m;
			i--;
			n--;
		} else {
			a[i] = k;
			zm[i] = h;
			ds[i] = m - a[i];
			dz[i] = m;
		}

	}
	m = m / 2;
	for (int i = 1; i <= n ; i++) {
		if (y > n - x) {
			cout << cnt;
			return 0;
		}
		if (dz[y] > ds[n - x]) {
			e = y;
			if (zm[y] != zm[n - x]) {
				cnt += dz[y] - ds[n - x];
				y--;

			}
			dz[e] = dz[e] - ds[n - x];
		} else if (dz[y] < ds[n - x]) {
			e = x;
			if (zm[y] != zm[n - x]) {
				cnt += ds[n - x] - dz[y];
				x--;
			}
			ds[n - e] = ds[n - e] - dz[y];

		} else if (zm[y] != zm[n - x]) {
			cnt += dz[y];
		}
		x++;
		y++;
	}
	cout << cnt;
	return 0;
}
