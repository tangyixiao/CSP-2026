#include <bits/stdc++.h>
using namespace std;


string fun(int a) {
	int q;
	string bb, b;
	while (a > 0) {
		b += char(a % 2);
		a /= 2;
		q++;
	}
	for (int i = 1; i <= q; i++) {
		bb[b.size() - i] = b[i];
	}
	return bb;
}

int funn(int a) {
	int b;
	while (a > 0) {
		b++;
		a /= 2;
	}
	return b;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n, a[100000], o, x, x1, s = 0, xx, k;
	string x, x1;
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
	}
	if (n == 1) {
		for (int i = 1; i <= m; i++) {
			if (a[i] > xx) {
				xx = a[i];
				k = fun(a[i]);
			}
		}
		cout << k;
		return 0;
	}

	if (m % 2 == 0) {
		o = o / 2;
	} else {
		o = o / 2 + 1;
	}
	for (int i = 1; i <= o; i++) {
		for (int j = i + 1; j <= m; j++) {
			for (int p = 1; p <= min(funn(a[i]), funn(a[j])); p++) {
				x = fun(i);
				x1 = fun(j);

				if (x[p]  == 1 && x1[p] == 1) {
					s += pow(2, p);
				}
			}
			if (s > xx) {
				xx = s;
				s = 0;
			}
		}
	}
	cout << xx;
	return 0;
}
