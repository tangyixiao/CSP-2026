#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5, M = 3e5;
int n, m, ans[M], a[N], s[M];
int edge_cnt = 0, head[M];

struct noder {
	int nxt, to, w;
} edge[N];

void insert(int x, int yy) {
	edge[++edge_cnt] = {head[yy], x, edge[head[yy]].w + 1};
	head[yy] = edge_cnt;
	return;
}

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", a + i);
		insert(i, a[i]);
		s[a[i]] += i;
	}
//	for (int i = 1; i <= n; i++) {
//		for(int j=n;j>=i;j--){
//
//		}
//	}
	for (int i = 1; i <= m; i++) {
		printf("%d", s[i]);
	}
	return 0;
}//必然是规律题