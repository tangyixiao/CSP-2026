// 8:51 ???zhe me ban??? chai wei jiu mei le?
// 9:06 shen le, xian zai cai xiang dao zheng jie
// 9:17 mei mei da wan
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e5+10;
ll n, m;
ll a[N];
bool is[N];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	cin >> n >> m;
	for (ll i = 1; i <= n; i++) cin >> a[i];
	for (ll i = 1; i <= n; i++) is[i] = 1;
	for (ll j = 31; j >= 0; j--) {
		ll cnt = 0;
		for (ll i = 1; i <= n; i++) {
			if (!is[i]) continue;
			if (a[i] & (1 << j)) cnt++;
		}
		if (cnt < m) continue;
		for (ll i = 1; i <= n; i++) {
			if (!is[i]) continue;
			if ((a[i] & (1 << j)) == 0) is[i] = 0;
		}
	}
	ll ans = 0;
	for (ll j = 31; j >= 0; j--) {
		ll cnt = 0;
		for (ll i = 1; i <= n; i++) {
			if (!is[i]) continue;
			if (a[i] & (1 << j)) cnt++;
		}
		if (cnt < m) continue;
		ans += (1 << j);
	}
	cout << ans;
	return 0;
}