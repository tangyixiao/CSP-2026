#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll n, m;
ll a[500010];
ll b[300010];
ll ans[300010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]] = i;
	}
	for (ll i = 1; i <= n; i++) {
		for (ll j = i; j <= n; j++) {
			j = b[a[j]];
			ans[a[j]]++;
		}
	}
	for (ll i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
