#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, m, a[N], b[N], o, u, s, ma = -1, p = 1, x, y, l, r;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		o = a[i];
		b[i] = 1;
		while (o != 0) {
			u = o % 2;
			o = o / 2;
			b[i] *= 10;
			p = p * 10;
			b[i] += u;
		}
		b[i] -= p;
	}
	for (int i = 1; i <= n; i++) {
		l = b[i];
		for (int j = i + 1; j <= n; j++) {
			r = b[j];
			if (i == j)
				continue;
			s = 0;
			while (max(l, r) != 0) {
				if (min(l, r) == 0) {
					if (max(l, r) % 10 == 0)
						s++;
					l = l / 10;
				} else {
					x = l % 10;
					y = r % 10;
					if (x == y)
						s++;
					l = l / 10;
					r = r / 10;
				}
			}
			if (ma < s) {
				ma = s;
			}
		}
	}
	cout << ma;
	return 0;
}
