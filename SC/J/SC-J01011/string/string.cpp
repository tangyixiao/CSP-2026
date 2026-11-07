#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 10;
char c[N];
int a[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	int l = 1, r = n;
	int ans = 0;
	while (l <= r) {
		if (a[l] > a[r]) {
			if (c[l] != c[r]) {
				ans += a[r];
			}
			a[l] -= a[r];
			a[r] = 0;
			r--;
		} else if (a[l] < a[r]) {
			if (c[l] != c[r]) {
				ans += a[l];
			}
			a[r] -= a[l];
			a[l] = 0;
			l++;
		} else {
			if (c[l] != c[r]) {
				ans += a[r];
			}
			l++, r--;
		}
	}
	cout << ans << "\n";
	return 0;
}