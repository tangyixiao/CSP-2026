#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int ans;
int a[200005];
char c[200005];

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	int l = 1, r = n;
	while (l <= r) {
		if (l == r) {
			cout << ans;
			return 0;
		}
		if (a[l] == 0)
			l++;
		if (c[l] == c[r]) {
			if (a[l] >= a[r]) {
				a[l] -= a[r];
				r--;
			} else {
				a[r] -= a[l];
				l++;
			}
		} else {
			if (a[l] >= a[r]) {
				a[l] -= a[r];
				ans += a[r];
				r--;
			} else {
				a[r] -= a[l];
				ans += a[l];
				l++;
			}
		}
	}
	return 0;
}
