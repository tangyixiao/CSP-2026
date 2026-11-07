#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, s = 0, z[200005], z1, c = 0, b;
	char f[200005], q, h;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> z1 >> f[i];
		z[i] = z[i - 1] + z1;
		s += z1;
	}
	if (s % 2 == 1) {
		b = (s + 1) / 2;
	} else {
		b = s / 2;
	}
	if (n == 1) {
		cout << 0;
	}
	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= n; j++) {
			if (i <= z[j]) {
				q = f[j];
			}
		}
		for (int j = 1; j <= n; j++) {
			if (s - i >= z[j]) {
				h = f[j + 1];
			}
		}
		if (q != h) {
			c++;
		}
	}
	cout << c;
	return 0;
}