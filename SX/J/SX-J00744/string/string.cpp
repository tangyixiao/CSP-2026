#include <bits/stdc++.h>
using namespace std;
char  c;
long long x, y, n, s, d, a[1000000005], b[1000000005], z;

int main() {
	freopen("string.in", "r"stdin);
	freopen("string.out", "w"stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> c;
		for (int j = 1; j <= x; j++) {
			s++;
			a[s] = c;
		}
	}
	for (int i = s; i >= 1; i--) {
		z++;
		b[z] = a[i];
	}
	for (int i = 1; i <= s; i++) {
		if (a[i] != b[i]) {
			d++;
		}
	}
	cout << d / 2;
	return 0;
}
