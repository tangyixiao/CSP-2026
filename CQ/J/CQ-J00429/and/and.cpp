#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
constexpr ll N = 2e5 + 5;
ll n, m;
bool s[35][N];
bool vis[N];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		ll x;
		cin >> x;
		ll idx = 0;
		while (x != 0) {
			s[idx][i] = x % 2;
			x /= 2;
			idx++;
		}
	}
	ll ans = 0;
	for (ll i = 30; i >= 0; i--) {
		ll sum = 0;
		for (ll j = 1; j <= n; j++) {
			if (vis[j]) continue;
			sum += s[i][j]; 
		}
		if (sum >= m) {
			for (ll j = 1; j <= n; j++) {
				if (s[i][j] == 0) vis[j] = 1;
			}
			ans += (1 << i);
		}
	}
	cout << ans;
	return 0;
}

