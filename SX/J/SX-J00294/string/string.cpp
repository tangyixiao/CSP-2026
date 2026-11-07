#include <bits/stdc++.h>
using namespace std;

long long a[100010];
char c[100010];

int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	long long n, l = 0, r = -1, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
		r += a[i];
	}

	long long b = 0, d = n - 1;
	while (l < r) {
		if (c[b] == c[d]) {
			if (a[b] < a[d]) {
				b++;
				a[d] -= a[b - 1];
				l += a[b - 1];
				r -= a[b - 1];
			} else if (a[b] > a[d]) {
				d--;
				a[b] -= a[d + 1];
				l += a[d + 1];
				r -= a[d + 1];
			} else {
				b++;
				d--;
				l += a[b - 1];
				r -= a[d + 1];
			}
		} else {
			if (a[b] < a[d]) {
				b++;
				a[d] -= a[b - 1];
				l += a[b - 1];
				r -= a[b - 1];
				ans += a[d + 1];
			} else if (a[b] > a[d]) {
				d--;
				a[b] -= a[d + 1];
				l += a[d + 1];
				r -= a[d + 1];
				ans += a[d + 1];
			} else {
				b++;
				d--;
				l += a[b - 1];
				r -= a[d + 1];
				ans += a[b - 1];
			}
		}
	}
	cout << ans;
	return 0;
}