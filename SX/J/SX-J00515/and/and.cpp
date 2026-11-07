#include <bits/stdc++.h>
using namespace std;
#define ll int
const ll N = 2e5+5;
ll n, m, a[N], b[N], ans;
bool vis[N];

void dfs(ll step) {
	for (ll i = 1; i <= n; i++) {
		if (!vis[i]) {
			b[step] = i, vis[i] = 1;
			if (step == m) {
				ll tot = a[b[1]];
				for (ll i = 2; i <= m; i++)
					tot &= a[b[i]];
				ans = max(tot, ans);
			} else
				dfs(step + 1);
			vis[i] = 0;
		}
	}
}

int main() {//LEVEL UP!

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++)
		cin >> a[i];
	dfs(1);
	cout << ans;
	return 0;
}
