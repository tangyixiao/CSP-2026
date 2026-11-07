#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;

const int N = 2e5 + 10, M = 100;
ll n, m, a[N], st[M], s, ans;
ll k[N], k2[N], cnt, cnt2;

int main(){

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m; for (ll i = 1; i <= n; i ++) cin >> a[i];
	for (ll i = 1; i <= n; i ++){
		ll cur = a[i];
		for (ll i = 1; cur; i ++){
			if (cur & 1) st[i] ++; cur >>= 1;
		}
	}
	for (ll i = 100; i >= 1; i --)
		if (st[i] >= m){s = i; break;}
	for (ll i = 1; i <= n; i ++)
		if ((a[i] >> (s - 1)) & 1) k[++ cnt] = a[i];
	for (ll j = s; j >= 1; ans += (1 << (-- j))){
		ll x = 0;
		for (ll i = 1; i <= cnt; i ++){
			if ((k[i] >> (j - 1)) & 1) x ++, k2[++ cnt2] = k[i];
		}
		if (x < m) break;
		swap(k, k2); cnt = cnt2; cnt2 = 0;
	}
	cout << ans;

	return 0;
}
