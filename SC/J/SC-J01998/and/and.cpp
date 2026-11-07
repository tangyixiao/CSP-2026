#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 5;

int n, m, a[N], mx;
queue <int> Q, rev1, rev2;

signed main () {
	ios::sync_with_stdio (false);
	cin.tie (nullptr);
	cout.tie (nullptr);
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		int now = a[i], sum = 0;
		while (now) {
			now >>= 1;
			sum++;
		}
		mx = max (mx, sum);
		Q.push (i);
	}
	int ans = 0;
	for (int j = mx; j >= 0; j--) {
		while (!rev1.empty ()) rev1.pop ();
		while (!rev2.empty ()) rev2.pop ();
		int now = (1 << j), hv = 0;
		while (!Q.empty ()) {
			int u = Q.front ();
			Q.pop ();
			if (a[u] & now) hv++, rev1.push (u);
			rev2.push (u);
		}
		if (hv >= m) {
			ans |= now;
			while (!rev1.empty ()) { Q.push (rev1.front ()); rev1.pop (); }
		}
		else while (!rev2.empty ()) { Q.push (rev2.front ()); rev2.pop (); }
//		cout << now << " " << j << " " << hv << " " << ans << "\n";
	}
	cout << ans;
	return 0;
}