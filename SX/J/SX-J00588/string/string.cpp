#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
long long n, s = 0;
int a[N], x, y, z, l, r;
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	l = 1;
	r = n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	x = a[l];
	y = a[r];
	while (l < r) {
		if (c[l] == c[r]) {
			z = min(x, y);
			x = x - z;
			y = y - z;
			if (x == 0) {
				l++;
				x = a[l];
			}
			if (y == 0) {
				r--;
				y = a[r];
			}
		} else {
			z = min(x, y);
			s += z;
			x = x - z;
			y = y - z;
			if (x == 0) {
				l++;
				x = a[l];
			}
			if (y == 0) {
				r--;
				y = a[r];
			}
		}

	}
	cout << s;

	return 0;
}