#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 5;
int n, m, k, a[N], b[N], fl1, fl2, ans[N], l[N], d[N], c[N];
struct Node { int f, i; } mp[N];
signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n >> m; fl1 = 1; fl2 = 0;
	for (int i = 1; i <= n; ++i) cin >> a[i], fl1 &= (a[i] >= a[i - 1]), fl2 += (a[i] != a[i - 1]);
	if (fl1) {
		for (int i = 1; i <= n + 1; ++i) if (a[i] != a[i - 1]) ans[a[i - 1]] = i - 1;
		for (int i = 1; i <= m; ++i) cout << ans[i] << " ";
		return 0;
	}
	for (int i = 1; i <= n; ++i) b[++k] = a[i];
	for (int i = 1; i <= k; ++i) {
		if (mp[b[i]].f) l[i] = mp[b[i]].i;
		mp[b[i]] = { 1, i };
	}
	for (int i = 1; i <= k; ++i) {
		int t = 0;
		for (int j = i; j <= k; ++j) {
			int w = -1;
			for (int p = t; p >= 1; --p) if (c[p] == b[j]) w = p;
			if (w != -1) c[w] = b[j], t = w;
			else c[++t] = b[j];
		}
		for (int j = 1; j <= t; ++j) ++ans[c[j]];
	}
	for (int i = 1; i <= m; ++i) cout << ans[i] << " ";
	return 0;
}