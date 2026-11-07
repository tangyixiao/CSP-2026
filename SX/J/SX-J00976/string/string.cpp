#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+10;
int n, a[N], ans, poi;
char b[N];
string q;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		for (int j = 1; j <= a[i]; j++) {
			q += b[i];
		}
	}
	int longg = q.size();
	if (longg % 2 == 1) {
		for (int i = 0; i <= longg / 2 - 1; i++) {
			if (q[i] != q[longg - i - 1]) {
				ans += 1;
				q[i] = q[longg - i - 1];
			}
		}
	} else {
		for (int i = 1; i <= longg / 2; i++) {
			if (q[i] != q[longg - i - 1]) {
				ans += 1;
			}
		}
		for (int i = longg; i >= longg / 2 + 1; i++) {
			if (q[i] != q[longg - i - 1]) {
				poi += 1;
				q[i] = q[longg - i - 1];
			}
		}
		ans = min(ans, poi);
	}
	cout << ans;
	return 0;
}
