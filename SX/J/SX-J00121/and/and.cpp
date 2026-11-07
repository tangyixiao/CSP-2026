#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,s,n) for(int i=s;i<=n;i++)
int a[100005], b[100005], _a[100005], _b[100005];
int c[100005];


signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, x, k = 0, y, r, e, maxx = -1, cnt = 0, d, q = 0, u, s;
	cin >> n >> m;
	fr(i, 1, n) {
		cin >> c[i];
	}
	fr(i, 1, n) {
		fr(j, 2, n) {
			cnt = 0;
			k = 0;
			q = 0;
			u = 0;
			s = 0;
			x = c[i];
			y = c[j];
			while (x) {
				a[++k] = x % 2;
				x /= 2;
			}
			while (y) {
				b[++q] = y % 2;
				y /= 2;
			}
			for (int h = k; h >= 1; h--) {
				_a[++u] = a[h];
			}
			for (int h = q; h >= 1; h--) {
				_b[++s] = b[h];
			}
			d = max(u, s);

			fr(h, 1, d) {
				e = _a[h];
				r = _b[h];
				if (e & r)
					cnt += 1;
			}
			maxx = max(maxx, cnt);
		}

	}
	cout << maxx;

	return 0;
}