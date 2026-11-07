#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define endl '\n'
using namespace std;
ll n, m;
ll a[500010];
ll b[300010];
ll c[300010];
ll aa[500010];

int main() {
	fast;
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	ll u = 0;
	for (ll i = 1; i <= n; i++) {
		cin >> aa[i];
		if (aa[i] < aa[i - 1])
			u = 1;
	}
	if (u == 0) {
		for (int i = 1; i <= n; i++) {
			b[aa[i]] = i;
		}
		for (int i = 1; i <= m; i++) {
			cout << b[i] << " ";
		}
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		a[i] = aa[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int ii = 1; ii <= n; ii++) {
			a[ii] = aa[ii];
		}
		for (int j = i; j <= n; j++) {
			for (int k = i; k < j; k++) {
				if (a[j] == a[k]) {
					for (int l = k; l <= n; l++) {
						a[l] = a[l + j - k];
					}
				}
			}
		}
		memset(c, 0, sizeof(c));
		for (int i = 1; i <= n; i++) {
			if (c[a[i]] == 0) {
				b[a[i]]++;
				c[a[i]] = 1;
			}
		}
	}
	for (int i = 1; i <= m; i++)
		cout << b[i] << " ";
	return 0;
}