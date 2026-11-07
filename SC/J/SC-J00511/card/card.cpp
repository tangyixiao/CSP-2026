#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, t, a[500005], b[500005], c[500005], d[500005] ;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> t;
		c[i] = t;
	}
	for (ll i = 1; i <= n; i++) {
		for (ll j = i; j <= n; j++) {
			a[c[j]]++;
			if (a[c[j]] > 1) {
				for (ll k = d[c[j]]; k <= j; k++) {
					a[c[k]] -= 1;
					if (a[c[k]] < 0) {
						a[c[k]] = 0;
					}
				}
				a[c[j]]++;
			} else {
				d[c[j]] = j;
			}
		}
		for (ll j = 1; j <= m; j++) {
			b[j] += a[j];
		}
		for (ll j = 1; j <= m; j++) {
			a[j] = 0;
			d[i] = 0;
		}
	}
	for (ll i = 1; i <= m; i++) {
		cout << b[i] << " ";
	}
	return 0;
}