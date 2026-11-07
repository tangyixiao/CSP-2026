#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using db = double;
using ull = unsigned long long;
using cll = const long long;
cll N = 2e5 + 5;
ll n, m, a[N], ans[N];
ll t[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (ll i = 1; i <= n; i ++) {
		cin >> a[i];
		t[a[i]] = i;
	}
	for (ll i = 1; i <= n; i ++) {
		map<ll, ll> mp;
		vector<ll> vt;
		for (ll j = i; j <= n; j ++) {
			if (mp[a[j]] != 0) {
				bool fg = false;
				for (auto &vc : vt) {
					if (fg) {
						vc = 0;
						mp[vc] = 0;
					}
					if (vc == a[j]) {
						fg = true;
					}
				}
			}
			else {
				mp[a[j]] = j;
				vt.push_back(a[j]);
			}
		}
		for (auto vc : vt) {
			if (vc == 0) {
				break;
			}
			ans[vc] ++;
		}
	}
	ans[a[n]] = n;
	for (ll i = 1; i <= m; i ++) {
		cout << ans[i] << " ";
	}
	return 0; 
}