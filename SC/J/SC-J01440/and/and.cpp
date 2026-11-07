#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll N = 2e5 + 7;
ll n, m;
bool flag[N];
ll a[N], ans;

void dfs(ll t, ll tmp) {
	if (t == m) {
		ans = max(ans, tmp);
		return ;
	}
	for (ll i = 1; i <= n; ++i) {
		if (!flag[i]) {
			if (t == 0) {
				tmp = a[i];
			}
			flag[i] = true;
			dfs(t + 1, tmp & a[i]);
			flag[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	
	for (ll i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	
	if (m == 1) {
		ll maxa = 0;
		for (ll i = 1; i <= n; ++i) {
			maxa = max(maxa, a[i]);
		}
		cout << maxa << '\n';
		return 0;
	}
	
	if (m == n) {
		for (ll i = 1; i <= n; ++i) {
			ans = (ans & a[i]);
		}
		cout << ans << '\n';
		return 0;
	}
	
	if (m == 2) {
		for (ll i = 1; i <= n; ++i) {
			for (ll j = i + 1; j <= n; ++j) {
				ans = max(ans, a[i] & a[j]);
			}
		}
		cout << ans << '\n';
		return 0;
	}
	
	dfs(0, 0);
	
	cout << ans << '\n';
	
	return 0;
}