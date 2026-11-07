#include <bits/stdc++.h>

using namespace std;

constexpr int LOG = 32;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1);
	vector<vector<bool> > B(n + 1, vector<bool>(32));
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		int t = a[i];
		for (int k = 0; t; t >>= 1, ++k)
			if (t & 1) B[i][k] = true;
		reverse(B[i].begin(), B[i].end());
	}
	
	vector<bool> aviliable(n + 1, true);
	int tot = 0;
	for (int k = 0; k < LOG; ++k) {
		vector<bool> tmp = aviliable;
		int cnt = 0;
		for (int i = 1; i <= n; ++i) {
			tmp[i] = tmp[i] && B[i][k];
			if (tmp[i]) ++cnt;
		}
		tot = max(tot,cnt);
		if (cnt >= m) aviliable = tmp;
	}
	int ans = (1 << 30) - 1;
	for (int i = 1; i <= n; ++i) if (aviliable[i]) ans = ans & a[i];
	if (tot < m) cout << "0";
	else cout << ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	solve();
	return 0;
}