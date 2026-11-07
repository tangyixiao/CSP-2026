#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, cnt;
ll a[300005], t[300005], b[300005];
map<ll, ll> ma, p, ap;

signed main(void) {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; ++i) {
		cin >> a[i];
		p[a[i]] = 1;
	}

	for (ll k = 1; k <= n; ++k) {
		ma.clear();
		for (ll i = k; i <= n; ++i) {
			if (ma[a[i]] != 0)
				for (ll j = ma[a[i]]; j < i; ++j)
					ma[a[j]] = 0;
			ma[a[i]] = i;
			ap[a[i]] = 1;
		}
		for (ll i = k; i <= n; ++i)
			if (ma[a[i]] && ap[a[i]] == 1) {
				++t[a[i]];
				ap[a[i]] = 0;
			}
	}
	for (ll i = 1; i <= m; ++i)
		cout << t[i] << " ";
	return 0;
}