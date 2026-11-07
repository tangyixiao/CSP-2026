#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	ios::sync_with_stdio(0), cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1), ans(m + 1), idx(m + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		idx[a[i]] = i;
	}
	for (int i = n; i >= 1; i--) {
		vector<int> b;
		for (int j = i; j <= n; j++) {
			j = idx[a[j]];
			b.push_back(a[j]);
		}
		for (int u : b)ans[u]++;
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i];
		if (i < m)cout << ' ';
	}
	cout << '\n';
	return 0;
}