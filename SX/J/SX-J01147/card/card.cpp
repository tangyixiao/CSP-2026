#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m;
int a[500005];
int ans[300005];
bool vis[300005];
int f[300005];
int s[300005];

void solve(int k) {
	int l = 0;
	for (int i = k; i <= n; i++) {
		if (vis[a[i]] && f[a[i]] < l) {
			l = f[a[i]];
			continue;
		}
		l++;
		vis[a[i]] = 1;
		f[a[i]] = l;
		s[l] = a[i];
	}
	for (int i = 1; i <= l; i++) {
		ans[s[i]]++;
	}
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//freopen("card.in", "r", stdin);
	//freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(vis, 0, sizeof(vis));
		solve(i);
	}
	cout << ans[1];
	for (int i = 2; i <= m; i++)
		cout << ' ' << ans[i];
	return 0;
}