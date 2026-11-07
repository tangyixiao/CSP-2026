#include <bits/stdc++.h>
using namespace std;
char s[200010];
long long a[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, ans = 0, b = 0, f = 0, m = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
		b += a[i];
	}
	for (int i = 1; i <= n / 2; i++) {
		if (n % 2 == 0) {
			if (s[i] != s[n - i + 1]) {
				ans += min(a[i], a[n - i + 1]);
			}
		} else {
			if (s[i] != s[n / 2 - i]) {
				ans += min(a[i], a[n / 2 - i]);
			}
			f += a[i];
			m += a[n / 2 - i];
		}
	}
	if (n % 2 != 0) {
		if (b % 2 == 0) {
			if (b / 2 <= f) {
				ans += a[n / 2 + 1];
			} else {
				ans += max(f, m) - min(f, m);
			}
		} else {
			if (b / 2 + 1 <= f) {
				ans += a[n / 2 + 1];
			} else {
				ans += max(f, m) - min(f, m);
			}
		}
	}
	cout << ans;
	return 0;
}