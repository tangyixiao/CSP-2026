#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 200005;
ll n, m;
ll a[N][32], vis[N];
inline void read(ll &x) {
	x = 0;
	char ch = getchar();
	while (!isdigit(ch)) ch = getchar();
	while (isdigit(ch)) x = (x << 1) + (x << 3) + ch - '0', ch = getchar();
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	read(n), read(m);
	ll x;
	for (ll i = 1; i <= n; i++) {
		read(x);
		for (ll j = 0; j < 31; j++) {
			bool k = x & (1 << j);
			a[i][j] = k;
		}
	}
	ll res = 0;
	for (ll i = 30; i >= 0; i--) {
		ll cnt = 0;
		for (ll j = 1; j <= n; j++) if (!vis[j] && a[j][i]) cnt++;
		if (cnt >= m) {
			res += (1 << i);
			for (ll j = 1; j <= n; j++) if (!a[j][i]) vis[j] = 1;
		}
	}
	printf("%lld\n", res);
	return 0;
}