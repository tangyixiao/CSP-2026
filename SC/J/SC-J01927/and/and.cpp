#include<iostream>
#include<cstdio>
#include<limits.h>
using namespace std;
#define ll long long
const ll N = 1e5+5;
ll n, m;
ll ans = 0;
ll S = 0;
ll a[N];
ll bit1(ll num) {
	ll sum = 0;
	while (num) {
		if (num & 1)sum++;
		num >>= 1;
	}
	return sum;
}
ll bit(ll num) {
	ll sum = 0;
	while (num) {
		sum++;
		num >>= 1;
	}
	return sum;
}
bool is(ll s, ll x) {
	x--;
	while (x-->0) {
		s >>= 1;
	}
	return s & 1;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (; S <= (1 << (n)) - 1 ; S++) {
//		cout << bit1(S) << '\n';
		if (bit1(S) != m)continue;
		ll cnt = LONG_LONG_MAX;
		for (ll i = 1; i <= bit(S); i++) {
			if (is(S, i)) {
				cnt = cnt&a[i];
			}
		}
		ans = max(ans, cnt);
	}
	cout << ans;
	return 0;
	return 0;
}