#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define dl double
#define endl '\n'
using pi = pair<ll, ll>;
int T = 1;
int n, r;
map<int, pair<int, char>> mp;

void solve() {
	cin >> n;
	//cout << endl;
	for (int i = 1; i <= n; i++) {
		int x;
		char y;
		cin >> x >> y;
		mp[i] = {x, y};
		//cout << mp[i].first << ' ' << mp[i].second;
	}
	ll l = 1, r = n, ans = 0, lll = 0, rr = 0;
	lll = mp[l].first;
	rr = mp[r].first;
	while (l != r) {
		if (mp[l].second != mp[r].second) {
			ans += min(lll, rr);
			//	cout << l << ' ' << r << endl;
		}
		ll llll = lll;
		lll -= min(llll, rr);
		rr -= min(llll, rr);
		if (lll == 0) {
			l++;
			lll = mp[l].first;
		}

		if (rr == 0) {
			r--;
			rr = mp[r].first;
		}

	}
	cout << ans << endl;
	return;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//cin<<T;
	while (T--) {
		solve();
	}
	return 0;
}
