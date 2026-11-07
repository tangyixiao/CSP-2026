#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int n, m, res = INT_MAX;
int a[N];

void dfs(int t, int p, int r) {
	if (t == m + 1) {
		r = max(r, res);
		return ;
	}
	for (int i = p + 1; i <= n - t; i++) {
		dfs(t + 1, i, r &a[i]);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", a + i);
	}
	sort(a + 1, a + n + 1);
	if (n <= 20) {
		dfs(0, -1, res);
	} else if (m == 1) {
		res = a[n];
	} else if (m == n) {
		for (int i = 1; i <= n; i++) {
			res = res &a[i];
		}
	}
	printf("%d", res);
	return 0;
}
