#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n; 
	cin >> n;
	vector<pair<int, char>> a(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	int l = 1, r = n;
	int ans = 0;
	int u1 = a[l].first, u2 = a[r].first;
	char v1 = a[l].second, v2 = a[r].second;
	while (l != r) {
		if (u1 > u2) {
			if (v1 != v2)ans += u2;
			u1 = u1 - u2;
			r--;
			u2 = a[r].first;
			v2 = a[r].second;
		} else {
			if (v1 != v2)ans += u1;
			l++;
			u2 = u2 - u1;
			v1 = a[l].second;
			u1 = a[l].first;
		}
	}
	cout << ans;
	return 0;
}