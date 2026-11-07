#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PIC pair<int,char>
#define fi first
#define se second
vector<PIC> a, b;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, L = 0, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int c;
		char d;
		cin >> c >> d;
		L += c;
		a.push_back({c, d});
	}
	b = a;
	reverse(b.begin(), b.end());
	for (int i = 0, j = 0, wi = a[0].fi, wj = b[0].fi; (wi < L / 2 && wj < L / 2) || (a[i].fi > 0 && b[j].fi > 0);) {
		//cout << i << " " << j << '\n';
		int u = min(a[i].fi, b[j].fi);
		if (a[i].se != b[j].se)
			ans += u;
		a[i].fi -= u;
		b[j].fi -= u;
		if (a[i].fi == 0) {
			i++;
			a[i].fi = min(a[i].fi, L / 2 - wi);
			wi += a[i].fi;
		}
		if (b[j].fi == 0) {
			j++;
			b[j].fi = min(b[j].fi, L / 2 - wj);
			wj += b[j].fi;
		}
	}
	cout << ans;
	return 0;
}