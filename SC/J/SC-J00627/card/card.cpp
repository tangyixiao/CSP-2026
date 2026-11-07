#include <bits/stdc++.h>
#define rep(a, b, c) for (int i = a; i <= b; i += c)
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
const int MAXN = 5e5 + 5;
int n, m, a[MAXN], ans[MAXN], last[MAXN];
bool vis[MAXN];
int main() {
	IOS;
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	rep(1, n, 1) cin >> a[i];
	rep(1, n, 1) {
		for (int j = 1; j <= m; j++) last[j] = 0;
		for (int j = i; j <= n; j++) {
			if (last[a[j]] && vis[a[j]]) {
				for (int k = last[a[j]]; k < j; k++) vis[a[k]] = 0;
			}
			last[a[j]] = j, vis[a[j]] = 1;
		}
		for (int j = i; j <= n; j++) if (vis[a[j]]) { ans[a[j]]++; vis[a[j]] = 0; }
	}
	rep(1, m, 1) cout << ans[i] << ' ';
	return 0;
}