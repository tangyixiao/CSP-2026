#include <bits/stdc++.h>
using namespace std;
using ll = long long;

namespace code {
	const int N = 5e5 + 5;
	int n, m, a[N], ct[N], nxt[N], ans[N], rt[N], sz[N];
	vector<int> g[N];
	
	int dfs(int u) {
		if(sz[u])
			return sz[u];
		sz[u] = 1;
		for(auto v : g[u])
			sz[u] += dfs(v);
		return sz[u];
	}
	
	void niam() {
		cin >> n >> m;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		for(int i = n; i >= 1; i--) {
			nxt[i] = ct[a[i]];
			ct[a[i]] = i;
			if(nxt[i] != 0)
				g[nxt[i]].push_back(i);
			else {
				rt[a[i]] = i;
				if(i + 1 <= n)
					g[i + 1].push_back(i);
			}
		}
		for(int i = 1; i <= m; i++)
			cout << dfs(rt[i]) << ' ';
	}
}

int main() {
#ifndef _NO_FREOPEN_
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	code::niam();
	
	return 0;
}

/*
210min
*/
