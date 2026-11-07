#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 4e5 + 5;
int n, m, mx, a[N], b[N], p[N], vis[N];
int cal(int x) {
	int c = 0;
	while (x) c += (x % 2), x >>= 1;
	return c;
}
void dfs(int x, int y, int s) {
	if (s != -1 && s < mx) return;
	if (y == m + 1) {
		mx = max(mx, s);
		return ;
	}
	if (x == n + 1) return;
	
	if (s == -1) dfs(x + 1, y + 1, a[x]);
	else dfs(x + 1, y + 1, s & a[x]);
	
	dfs(x + 1, y, s);
}
bool cmp1(int x, int y) { return (b[x] == b[y] ? a[x] > a[y] : b[x] > b[y]); }
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	if (n <= 20) {
		dfs(1, 1, -1);
		cout << mx << endl;
		return 0;
	}
	if (m == 1) {
		int mx = 0;
		for (int i = 1; i <= n; ++i) mx = max(mx, a[i]);
		cout << mx << endl;
		return 0;
	}
	if (m == 2) {
		int mx = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (i == j) continue;
				mx = max(mx, (a[i] & a[j]));
			}
		} cout << mx << endl;
		return 0;
	}
	if (m == n) {
		int s = a[1];
		for (int i = 2; i <= n; ++i) s &= a[i];
		cout << s << endl;
		return 0;
	}
	for (int i = 1; i <= n; ++i) cin >> a[i], b[i] = cal(a[i]), p[i] = i;
	sort(p + 1, p + n + 1, cmp1);
	int ans = a[p[1]], cnt = 1; vis[p[1]] = 1;
	for (int i = 2; i <= n; ++i) {
		if (vis[p[i]]) continue;
		ans &= a[p[i]], ++cnt, vis[p[i]] = 1;
		for (int j = i + 1; j <= n && cnt <= m; ++j) if (a[p[j]] >= ans && !vis[p[j]] && (ans & a[p[j]]) >= ans) ++cnt, vis[p[j]] = 1;
		if (cnt >= m) break;
	}
	cout << ans;
	return 0;
}