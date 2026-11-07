#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 200010
int n, a[N], b[N], ls[N], rs[N], ans, l, r, rp, rc;
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	l = 1, rp = n + 1;
	for(int i = 1; i <= n; i++) {
		char c;
		cin >> a[i] >> c;
		r += a[i], b[i] = c - 'a';
	}
	for(int i = 1; i <= n; i++)
		ls[i] = ls[i - 1] + a[i];
	for(int i = n; i >= 1; i--)
		rs[i] = rs[i + 1] + a[i];
	for(int lp = 1; lp <= n; lp++) {
		if(rp <= lp) break;
		int rg = rp;
		while(ls[lp] > rs[rg]) rg--;
		if(rg == rp) {
			rc -= a[lp];
			if(b[lp] != b[rp]) ans += a[lp];
			continue;
		}
		for(int i = rp - 1; i > rg; i--)
			if(b[lp] != b[i]) ans += a[i];
		if(b[lp] != b[rp]) ans += rc;
		rp = rg, rc = rs[rp] - ls[lp];
		if(b[lp] != b[rp]) ans += a[rp] - rc;
//		cout << ans << endl;
	}
	cout << ans << endl;
	return 0;
}

