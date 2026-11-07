#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define endl '\n'
using namespace std;
ll n, m;
ll a[200010];

int main() {
	fast;
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	ll u = 0;
	for (ll i = 1; i <= n; i++) {
		if (a[i] != i - 1)
			u = 1;
	}
	if (u == 0) {
		cout << n - m;
		return 0;
	}
	if (m == 1) {
		ll maxx = 0;
		for (ll i = 1; i <= n; i++) {
			maxx = max(maxx, a[i]);
		}
		cout << maxx;
		return 0;
	}
	if (m == n) {
		ll ans = a[1];
		for (ll i = 2; i <= n; i++) {
			ans = a[i] & ans;
		}
		cout << ans;
		return 0;
	}
	if (m == 2) {
		ll maxx = 0;
		for (ll i = 1; i <= n; i++) {
			for (ll j = 1; j <= n; j++) {
				if (i == j)
					continue;
				maxx = max(maxx, a[i] & a[j]);
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == 3) {
		ll maxx = 0;
		for (ll i = 1; i <= n; i++) {
			for (ll j = 1; j <= n; j++) {
				for (ll k = 1; k <= n; k++) {
					if (i == j || j == k || i == k)
						continue;
					maxx = max(maxx, a[i] & a[j] & a[k]);
				}
			}
		}
		cout << maxx;
		return 0;
	}
	if (m == n - 1) {
		ll maxx = 0;
		for (ll i = 1; i <= n; i++) {
			ll ans = 0;
			for (int j = 1; j <= n; j++) {
				if (j == i)
					continue;
				ans = ans &a[j];
			}
			maxx = max(ans, maxx);
		}
		cout << maxx;
		return 0;
	}
	sort(a + 1, a + 1 + n);
	ll ans = a[n];
	for (ll i = 1; i < m; i++) {
		ans = ans &a[n - i];
	}
	cout << ans;
	return 0;
}