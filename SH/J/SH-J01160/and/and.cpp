#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MaxN = 2e5+5;
int a[MaxN], n, m, dp[MaxN], maxn;

void dfs(int u, int ans, vector<int> pos) {
	if (u < 0) {
		maxn = max(maxn, ans);
		return;
	}
	for (auto p : pos) {
		for (int i = 1; i <= n; i++) {
			if (i == p) continue;
			pos.push_back(i);
			dfs(u - 1, ans & a[i], pos);
		}
	}
}
signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	vector<int> p(20);
	p[0] = 1;
	dfs(m, a[1], p);
	cout << maxn;
}
