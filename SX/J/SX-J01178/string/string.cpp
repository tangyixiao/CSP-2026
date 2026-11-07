#include <bits/stdc++.h>
using namespace std;
long long n, a, l = 1, r = 0, k = 0, m = 1;
const long long z = 900000000009000000;
char c, c1[z], d;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a >> c;
		l = r + 1;
		r += a;
		c1[l] += c;
		c1[r + 1] -= c;
	}
	for (long long i = 1; i <= r + 1; i++) {
		c1[i] = c1[i - 1] + c1[i];
	}
	for (long long i = r; i >= 1; i--) {
		d = char(c1[i]);
		if (d != char(c1[m])) {
			k++;
			c1[m] = d;
		}
		m++;
	}
	cout << k;
	return 0;
}