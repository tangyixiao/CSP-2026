#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+5;
ll n, a[N], m, ans;
bool b[N];

void dfs(ll x, ll s, ll ma) {
	if (x == m) {
		ans = max(s, ma);
		return ;
	}

	for (ll i = 1; i <= n; i++) {
		if (b[i] == 0) {
			ll l = (a[i] & s);
			b[i] = 1;
			dfs(x + 1, l, ma);
			b[i] = 0;
		}
	}
	return ;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	ll ma = -1, a2;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
		ma = max(a[i], ma);
	}
	if (m == 1) {
		cout << ma;
		return 0;
	}
	if (m == n) {
		a2 = a[1];
		for (ll i = 2; i <= n; i++) {
			a2 = a2 &a[i];
		}
		cout << a2;
		return 0;
	}
	ans = -1;
	for (ll i = 1; i <= n; i++) {
		b[i] = 1;
		dfs(1, a[i], ans);
		b[i] = 0;
	}
	cout << ans;
	return 0;
}
