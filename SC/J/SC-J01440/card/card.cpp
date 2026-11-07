#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll N = 5e5 + 7;
ll n, m;
ll a[N];
ll st[N];
ll ans[N];
bool flag[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	cin >> n >> m;
	
	bool ok = true;
	for (ll i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i] < a[i - 1]) {
			ok = false;
		}
	}
	
	if (ok) {
		for (ll i = 1; i <= m; ++i) {
			cout << i << ' ';
		}
		cout << '\n';
		return 0;
	}
	
	for (ll i = 1; i <= n; ++i) {
		memset(st, 0, sizeof(st));
		memset(flag, false, sizeof(flag));
		for (ll j = i; j <= n; ++j) {
			if (!flag[a[j]]) {
				flag[a[j]] = true;
				st[a[j]] = j;
			} else {
				for (ll k = st[a[j]]; k < j; ++k) {
					flag[a[k]] = false;
				}
				flag[a[j]] = true;
			}
		}
		for (ll j = 1; j <= m; ++j) {
			if (flag[j]) {
				++ans[j];
			}
		}
	}
	
	for (ll i = 1; i <= m; ++i) {
		cout << ans[i] << ' ';
	}
	
	cout << '\n';
	
	return 0;
}
/*

*/