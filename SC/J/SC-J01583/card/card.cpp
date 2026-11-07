#include <iostream>
using namespace std;

const int MAXN = 5e5 + 5, MAXM = 3e5 + 5;
int n, m, a[MAXN], ans[MAXM], root[MAXM], fa[MAXN], dp[MAXN];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (int i = 1; i <= n; i++) {
		if (!root[a[i]]) root[a[i]] = i, fa[i] = i;
		else fa[root[a[i]]] = i, fa[i] = i, root[a[i]] = i;
	}
	
	for (int i = 1; i <= n; i++) {
		dp[i] += 1, ans[a[i]] += dp[i];
		int j = i;
		while (fa[j] != j) j = fa[j];
		dp[j+1] += dp[i];
	}
	
	for (int i = 1; i <= m; i++) printf("%d ", ans[i]);
	
	return 0;
}