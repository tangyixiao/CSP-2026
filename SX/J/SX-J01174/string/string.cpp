#include <bits/stdc++.h>
using namespace std;
long long n, ans, a[200005];
char s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
	}
	int  l = 1, r = n;
	while (l < r) {
		if (s[l] == s[r]) {
			if (a[l] > a[r]) {
				a[l] -= a[r];
				r--;
			} else if (a[l] < a[r]) {
				a[r] -= a[l];
				l++;
			} else {
				r--;
				l++;
			}
		}
		if (s[l] != s[r]) {
			if (a[l] > a[r]) {
				a[l] -= a[r];
				ans += a[r];
				r--;
			} else if (a[l] < a[r]) {
				a[r] -= a[l];
				ans += a[l];
				l++;
			} else {
				ans += a[r];
				l++;
				r--;
			}
		}
	}
	cout << ans;
	return 0;
}