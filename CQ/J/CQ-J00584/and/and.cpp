#include <bits/stdc++.h>
#define int long long int
using namespace std;

const int MAXN = 2e5 + 5;

int n, m, ls[MAXN];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> m;
	vector<int> g; g.clear();
	for (int i = 1; i <= n; i++) cin >> ls[i], g.push_back(ls[i]);
	int ans = 0;
	for (int i = 30; i >= 0; i--) {
		vector<int> t; t.clear();
		for (auto j : g) if ((j >> i) & 1) t.push_back(j);
		if (t.size() < m) continue;
		g = t, ans |= (1 << i); 
	}
	cout << ans;
	return 0;
}

