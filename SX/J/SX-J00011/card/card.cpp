#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000005], b[100005], tong[100005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ll n, m;
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (ll i = 1; i <= n; i++) {
		for (ll j = i; j <= n; j++) {
			ll c = a[i];
			if (b[c] == 1) {
				for (ll l = c + 1; l <= j - 1; i++) {
					b[l] = 0;
				}
			} else {
				b[c] = 1;
			}

		}
		for (ll j = 1; j <= m; j++) {
			ll d = b[i];
			if (b[i] == 1) {
				tong[d]++;
			}
		}
	}
	for (ll i = 1; i <= m; i++) {
		if (tong[i] > 0) {
			cout << tong[i] << " ";
		}
	}
	return 0;
}