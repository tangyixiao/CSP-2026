#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll n, m;
ll k, a[1010000];
ll v[1010100];
ll ans;
ll s[1010010];

void dfs(ll x, ll tep) {

	if (tep > m) {
		ll r = 1;
		for (ll i = 1; i <= n; i++) {
			ll y = a[i];
			while (y) {
				if (k & y) {
					k += r;
					r *= 2;

				}
				y /= 2;
			}
			ans = max(k, ans);
		}
	}
	a[tep] = s[x];
	for (ll i = x + 1; i <= n; i++) {
		if (!v[i]) {
			v[i] = 1;
			dfs(i, tep + 1);
			v[i] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> s[i];
	}
	dfs(1, 1);
	cout << ans;
}
