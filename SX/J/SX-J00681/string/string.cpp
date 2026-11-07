#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[2000010];
char c[2000000];
int ans;
int l, r;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	l = 1;
	r = n;
	while (l <= r) {
		if (a[l] <= a[r]) {
			if (c[l] != c[r]) {
				ans += a[l];
			}
			a[r] -= a[l];
			l++;
		} else {
			if (c[l] != c[r]) {
				ans += a[r];
			}
			a[l] -= a[r];
			r--;
		}
	}
	cout << ans << endl;
	return 0;
}

