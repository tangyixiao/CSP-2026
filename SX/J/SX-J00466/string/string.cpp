#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<pair<int, char>> a(n);
	int ll = 0, rr = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
		rr += a[i].first;
	}
	int l = 0, r = n - 1, ans = 0;
	while (ll < rr && l < r) {
		if (a[l].second != a[r].second)
			ans += min(a[l].first, a[r].first);
		if (a[l].first < a[r].first) {
			a[r].first -= a[l].first;
			l++;
		} else if (a[l].first == a[r].first) {
			l++;
			r--;
		} else {
			a[l].first -= a[r].first;
			r--;
		}


		ll += min(a[l].first, a[r].first);
		rr -= min(a[l].first, a[r].first);
	}
	cout << ans;
}
