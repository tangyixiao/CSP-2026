#include <bits/stdc++.h>
using namespace std;

#define DEBUG
#define LOCAL

typedef long long int ll;
const int N = 2e5 + 10, M = 1e5 + 10;
int n, m, edge_cnt = 1;
int a[N], lst[N], nxt[N], head[N], sum[N];

struct Edge {
	int u, v, next;
	Edge(int _u = 0, int _v = 0, int _next = 0): u(_u), v(_v), next(_next) {}
} edge[N * 2];

inline void add(int u, int v) {
	edge[edge_cnt] = Edge(u, v, head[u]);
	head[u] = edge_cnt ++;
}

inline void dfs(int u, int fath) {
	sum[u] = 1;
	for (int i = head[u]; i; i = edge[i].next) {
		int v = edge[i].v;
		if (v == fath) continue;
		dfs(v, u);
		sum[u] += sum[v];
	}
}

inline void solve() {
	cin >> n >> m;

	vector<int> val(m + 1, -1);
	
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
		nxt[i] = i + 1;
		if (val[a[i]] == -1) {
			val[a[i]] = i;
		} else {
			nxt[val[a[i]]] = i;
			val[a[i]] = i;
		}
		
		lst[a[i]] = i;
	}
	
	for (int i = 1; i <= n; i ++) {
		add(i, nxt[i]);
		add(nxt[i], i);
	}
	
	dfs(n + 1, 0);
	for (int i = 1; i < m; i ++) {
		cout << sum[lst[i]] << " ";
	}
	
	cout << sum[lst[m]];
}

int main(int argc, const char* argv[]) {
#ifdef LOCAL
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t = 1;
//	cin >> t;

	while (t --) {
		solve();
	}

	return 0;
}
