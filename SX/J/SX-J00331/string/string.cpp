#include <bits/stdc++.h>
using namespace std;
#define int long long

struct xxx {
	int x;
	char c;
} a[1000005];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	string s = "";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].x >> a[i].c;
	}
	int l = 1, r = n, ans = 0;
	while (n--) {
		if (a[l].c != a[r].c) {
			if (a[l].x > a[r].x) {
				ans += a[r].x;
				a[l].x -= a[r].x;
				r--;
			} else {
				ans += a[l].x;
				a[r].x -= a[l].x;
				l++;
			}
		}
	}
	cout << ans;
	return 0;
}
