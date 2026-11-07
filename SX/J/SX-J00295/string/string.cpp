#include <bits/stdc++.h>
using namespace std;
long long a[100000];
char b[100000];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}
	long long o = 1;
	long long p = n;
	long long ans = 0;
	while (o < p) {

		if (b[o] == b[p]) {
			if (a[o] == a[p]) {
				o += 1;
				p -= 1;
			} else if (a[o] > a[p]) {
				a[o] -= a[p];
				p -= 1;
			} else {
				a[p] -= a[o];
				o += 1;
			}
		} else {
			if (a[o] == a[p]) {
				ans += a[o];
				o += 1;
				p -= 1;
			} else if (a[o] > a[p]) {
				ans += a[p];
				a[o] -= a[p];
				p -= 1;
			} else {
				ans += a[o];
				a[p] -= a[o];
				o += 1;
			}
		}
	}
	cout << ans;
	return 0;
}