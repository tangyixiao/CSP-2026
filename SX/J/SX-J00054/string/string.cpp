#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 200005;
int l[N], len, ans, n;
char c[N];
string s1, s2;

signed main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> l[i] >> c[i];
		len += l[i];
	}
	len /= 2;
	if (n == 1) {
		cout << 0;
		return 0;
	}
	int le = 1, r = n, llen = l[1], rlen = l[n], lall = l[1], rall = l[n];
	while (le <= r ) {
		if (llen > rlen) {
			if (c[le] != c[r])
				ans += rlen;
			llen -= rlen;
			rlen = 0;
		} else if (rlen >= llen) {
			if (c[le] != c[r])
				ans += llen;
			rlen -= llen;
			llen = 0;
		}
		if (llen == 0) {
			le++;
			if (lall + l[le] > len) {
				llen += len - lall;
			} else
				llen += l[le];
			lall += l[le];
		}
		if (rlen == 0) {
			r--;
			if (rall + l[r] > len) {
				rlen += len - rall;
			} else
				rlen += l[r];
			rall += l[r];
		}
	}
	cout << ans;

	return 0;
}
