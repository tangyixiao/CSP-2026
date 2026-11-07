#include <bits/stdc++.h>
using namespace std;
#define N 500010
#define M 300010
int n, m, a[N], cnt[M], pos[M], ans[M];
vector<int> g[M];
void dfs(int u) {
	for(auto v : g[u]) {
		dfs(v);
		ans[u] += ans[v];
	}
}
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		pos[a[i]] = i;
		ans[a[i]]++;
	}
	for(int v = 1; v <= m; v++) {
		if(a[n] == v) continue;
		int u = a[pos[v] + 1];
		g[u].push_back(v);
	}
	dfs(a[n]);
	for(int i = 1; i <= m; i++) {
		cout << ans[i];
		if(i < m) cout << " ";
	}
	cout << endl;
	return 0;
}

