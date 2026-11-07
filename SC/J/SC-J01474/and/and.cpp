#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
using db = double;
using ull = unsigned long long;
using cll = const long long;
cll N = 2e5 + 5;
ll n, m, a[N];
void solve1() {
	ll sum = a[1];
	for (ll i = 1; i <= n; i ++) {
		sum = sum & a[i];
	}
	ll mxa = 0;
	for (ll i = 1; i <= n; i ++) {
		sum = sum & a[i];
		mxa = max(mxa, sum);
	}
	cout << mxa << '\n';
	return;
}
void solve2() {
	ll sum = a[1];
	for (ll i = 1; i <= n; i ++) {
		sum = sum & a[i];
	}
	cout << sum << '\n';
	return;
}
ll mx = 0;
void dfs(ll pos, ll sum, ll cnt, bool fg) {
	if (cnt == m) {
		mx = max(sum, mx);
		return;
	}
	if (pos > n) {
		return;
	}
	dfs(pos + 1, sum, cnt, false);
	if (cnt == 0) sum = a[pos];
	else sum &= a[pos];
	dfs(pos + 1, sum, cnt + 1, true);
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (ll i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	if (m == 1) {
		ll amx = 0;
		for (ll i = 1; i <= n; i ++) {
			amx = max(a[i], amx);
		}
		cout << amx << '\n';
		return 0;
	}
	if (m == n - 1) {
		solve1();
		return 0;
	}
	if (m == n) {
		solve2();
		return 0;
	}
	dfs(1, 0, 0, false);
	cout << mx << '\n';
	return 0;
}
