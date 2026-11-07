#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, l = 0, l1 = 0, t = 0;
	cin >> n;
	int a[n];
	char b[n], c[90000];

	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		l1 = l1 + a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = a[i]; j >= 0; j--) {
			l++;
			c[l] = b[i];
		}
	}
	if (l1 % 2 == 0) {
		l1 = l1 / 2;
		for (int i = 1; i <= l1; i++) {
			if (c[i] != c[l1 * 2 - i])
				t++;
		}
		cout << t;
	} else if (l1 % 2 == 1) {
		l1 = (l1 - 1) / 2;
		for (int i = 1; i <= l1; i++) {
			if (c[i] != c[l1 * 2 + 2 - i])
				t++;
		}
		cout << t;
	}
	return 0;
}
