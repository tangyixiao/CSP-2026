#include <bits/stdc++.h>
using namespace std;

int a[20010];
char c[20010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, t, d = 0;
	cin >> n;
	t = n;
	if (n == 1) {
		cout << d;
		return 0;
	}
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> c[i];
	for (int i = 1; i <= n / 2; i++) {
		while (a[i] > 0) {
			if (c[i] != c[t]) {
				if (a[i] > a[t]) {
					d += a[t];
					a[i] = a[i] - a[t];
					t = t - 1;
				} else {
					a[t] = a[t] - a[i];
					d += a[i];
					a[i] = 0;
				}
			}
			if (c[i] == c[t]) {
				if (a[i] > a[t]) {
					a[i] = a[i] - a[t];
					t = t - 1;
				} else {
					a[t] = a[t] - a[i];
					a[i] = 0;
				}
			}
		}
	}
	cout << d;
	return 0;
}