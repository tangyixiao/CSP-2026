#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long a[N];
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, f = 0, s = 0, kl = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		if (a[i] != 1)
			f = 1;
	}
	if (f == 0) {
		for (int i = 1; i <= n / 2; i++) {
			if (a[i] != a[n + 1 - i])
				s++;
		}
		cout << s;
		return 0;
	}
	f = 0;
	for (int i = 1; i <= n; i++) {
		if (c[i] != c[1]) {
			f = 1;
			break;
		}
	}
	if (f == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n / 2; i++) {
		if (c[i] != c[n + 1 - i] || a[i] != a[n + 1 - i]) {
			if (a[i] == a[n + 1 - i]) {
				c[n + 1 - i] = c[i];
				s = s + a[i];
			} else if (a[i] < a[n + 1 - i]) {
				n++;
				a[n + 1 - i] -= a[i];
				if (c[i] != c[n + 1 - i])
					s = s + a[i];
				c[n + 1 - i] = c[i];
			} else {
				s = s + a[i];
				kl = 0;
				for (int k = n; k > i; k--) {
					kl = kl + a[k];
					if (kl >= a[i]) {
						a[k] = a[k] - (kl - a[i]);
					}
				}
			}
		}
	}
	cout << s;
	return 0;
}
