#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e5+100;
ll n, m, a[N], ans;

void dfs(ll x, ll h, ll gs) {
	if (x == n + 1)
		return ;
	if (gs == m ) {
		ans = max(ans, h);
		return ;
	}
	dfs(x + 1, h, gs);
	if (gs == 0) {
		dfs(x + 1, a[x], gs + 1);
	} else {
		ll hh = h &a[x + 1];
		dfs(x + 1, hh, gs + 1);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++)
		cin >> a[i];
	dfs(1, 0, 0);
	cout << ans;
	return 0;
}
