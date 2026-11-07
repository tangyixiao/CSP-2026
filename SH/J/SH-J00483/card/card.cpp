#include <bits/stdc++.h>
// I AK!
using namespace std;

const int N = (int)5e5 + 11;
int n, m, a[N], cnt[N], lst[N], ans[N], sz[N];
vector<int> edges[N];

inline void dfs(int x) {
	sz[x] = cnt[x];
	int len = (int)edges[x].size();
	for (int i = 0; i < len; i++) {
		dfs(edges[x][i]);
		sz[x] += sz[edges[x][i]];
	}
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	bool ok = true;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		++cnt[a[i]];
		lst[a[i]] = i;
		ok &= (a[i] >= a[i - 1]);
	}
	if (ok) {
		for (int i = 1; i <= m; i++)
			printf("%d ", lst[i]);
		return 0;
	}
	sort(lst + 1, lst + m + 1);
	for (int i = 1; i < m; i++)
		edges[a[lst[i] + 1]].push_back(a[lst[i]]);
	dfs(a[n]);
	for (int i = 1; i <= m; i++)
		printf("%d ", sz[i]);
/*	int res = n;
	for (int i = m; i; i--) {
		if (b[a[lst[i]]])
			res += cnt[a[lst[i]]];
		b[a[lst[i]]] = 0;
		for (int j = i - 1; j; j--) {
			if (b[a[lst[j]]])
				res += cnt[a[lst[j]]];
			b[a[lst[j]]] = b[a[lst[j] + 1]];
			if (b[a[lst[j]]])
				res -= cnt[a[lst[j]]];
		}
		ans[a[lst[i]]] = res;
		b[a[lst[i]]] = 1;
		res -= cnt[a[lst[i]]];
	}
	for (int i = 1; i <= m; i++)
		printf("%d ", ans[i]);*/
	return 0;
}
