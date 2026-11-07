#include <bits/stdc++.h>
using namespace std;
long long n, p, l, s, c;
long long a[1900000];
char b[1900000];
string m;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		if (p == 0) {
			p = a[i];
		} else {
			p = gcd(p, a[i]);
		}
	}
	for (int i = 1; i <= n; i++) {
		c = a[i] / p;
		for (int j = 1; j <= c ; j++) {
			m += b[i];
		}
	}
	l = m.size();
	for (int i = 0; i < l / 2 ; i++) {
		if (m[i] != m[l  - i - 1]) {
			s++;
		}
	}
	cout << s*p;
	return 0;
}