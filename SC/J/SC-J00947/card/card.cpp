#include <bits/stdc++.h>

using namespace std;

int n, m;
int a[500005];
int nxt[300005];
vector<int> g[500005];
vector<pair<int, int>> v[300005];

void dfs(int cur) {
	static int t = 0;
	int l = ++t;
	for (const auto& i : g[cur])
		dfs(i);
	v[a[cur]].emplace_back(l, t);
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = n; i >= 1; i--) {
		if (nxt[a[i]] == 0)
			g[i + 1].push_back(i);
		else
			g[nxt[a[i]]].push_back(i);
		nxt[a[i]] = i;
	}
	dfs(n);
	for (int i = 1; i <= m; i++) {
		sort(begin(v[i]), end(v[i]));
		int res = 0, last = 0;
		for (const auto& [l, r] : v[i]) {
			res += r - max(l - 1, last);
			last = max(last, r);
		}
		cout << res << "\n "[i + 1 <= m];
	}
	return 0;
}
