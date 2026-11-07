#include <bits/stdc++.h>
#define int long long
using namespace std;

int t[200010], s[200010], cnt;

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		char c;
		cin >> t[i] >> c;
		s[i] = c - '0';
		cnt += t[i];
	}
	int l = 1, r = n, ca = 0, cb = 0, ans = 0;
	do {
		if (ca < cb) {
			ans += s[l] == s[r + 1] ? 0 : min(cb - ca, t[l]);
			ca += t[l];
			l++;
		} else {
			ans += s[l - 1] == s[r] ? 0 : min(ca - cb, t[r]);
			cb += t[r];
			r--;
		}
//		cout << ca << ' ' << cb << ' ' << l << ' ' << r  << ' ' << ans << '\n';
	} while (l <= r) ;
	cout << ans;
	return 0;
}

/*
5
2 a
3 b
2 c
1 d
3 a
aabbb ccdaaa

6
3 a
2 b
3 c
4 b
3 c
1 c
aaabbcccbbbbcccc
*/
