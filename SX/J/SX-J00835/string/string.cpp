#include <bits/stdc++.h>
using namespace std;
int a[200005];
char b[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string .out", "w", stdout);
	int n, l = 1, r, a1 = 1, b1 = 1, c1 = 1, f = 0, m;
	cin >> n;
	r = n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		m = b[1];
		if (m != b[i]) {
			c1 = 0;
		}
	}
	if (c1 == 1) {
		cout << 0;
		return 0;
	}
	while (l <= r) {
		if (a[l] != a[r]) {
			a1 = 0;
			break;
		} else {
			l++;
			r--;
		}
	}
	while (l <= r) {
		if (b[l] != b[r]) {
			b1 = 0;
			break;
		} else {
			l++;
			r--;
		}
	}
	if (a1 == 1 && b1 == 1) {
		cout << 0;
		return 0;
	}
	for (int i = n; i >= 0; i--) {
		if (b[i] != b[i - 1]) {
			for (int j = 1; j <= i; j++) {
				f = f + a[j];
			}
			cout << f / 2;
			return 0;
		}
	}
	return 0;
}
