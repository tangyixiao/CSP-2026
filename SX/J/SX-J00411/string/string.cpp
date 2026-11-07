#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100110], b[100110], m, n, l;
string c, d;

main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	m = n;
	for (int i = 1; i <= n; i++) {
		cin >> c[i] >> d[i];
	}
	if (n == 1) {
		cout << 0;
	} else if (n == 2) {
		if (d[1] == d[2]) {
			cout << 0;
		} else if (c[1] == c[2]) {
			cout << 0;
		} else if (c[1] > c[2]) {
			cout << c[2];
		} else if (c[2] > c[1]) {
			cout << c[1];
		}
	} else if (n <= 10) {
		for (int i = 1; i <= n / 2; i++) {
			if (d[i] != d[m]) {
				l++;
			}
			m--;
		}
		cout << l;
	} else if (n <= 2000) {
		for (int i = 1; i <= n / 2; i++) {
			if (d[i] != d[m]) {
				l++;
			}
			m--;
		}
		cout << l;
	} else if (n <= 2 * 100000) {
		for (int i = 1; i <= n / 2; i++) {
			if (d[i] != d[m]) {
				l++;
			}
			m--;
		}
		cout << l;
	} else {
		for (int i = 1; i <= n / 2; i++) {
			if (d[i] != d[m]) {
				l++;
			}
			m--;
		}
		cout << l;
	}




}
