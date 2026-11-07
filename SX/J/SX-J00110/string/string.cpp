#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N = 2 * 1e5 + 10;
int a[N];
char c[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i] >> c[i];
	}
	int cnt = n;
	int ans = 0;
	int l = 1, r = n;
	while (!(cnt <= 1)) {
		if (c[l] == c[r]) {
			int k = min(a[l], a[r]);
			a[l] -= k;
			a[r] -= k;
			if (a[l] == 0) {
				l ++;
				cnt --;
			}
			if (a[r] == 0) {
				r --;
				cnt --;
			}
		} else if (c[l] != c[r]) {
			int k = min(a[l], a[r]);
			a[l] -= k;
			a[r] -= k;
			ans += k;
			if (a[l] == 0) {
				l ++;
				cnt --;
			}
			if (a[r] == 0) {
				r --;
				cnt --;
			}
		}
	}
	cout << ans;

	return 0;
}
