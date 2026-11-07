#include <bits/stdc++.h>
using namespace std;
int n, m, sum;
long long a[1000010];
int maxn = -1;

void dfs(int u, int sum, int last) {
	if (u == m ) {
		maxn = max(maxn, sum);
	}
	for (int i = last + 1; i <= n; i++) {
		dfs(u + 1, sum &a[i], i);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;

	if (m == 1) {
		int maxx = -1, x = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
			maxx = max(maxx, x);
		}
		cout << maxx;
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	if (m == n) {
		int uu = a[1];
		for (int i = 2; i <= n; i++) {
			uu &= a[i];
		}
		cout << uu;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		dfs(1, a[i], i);
	}
	cout << maxn;
	return 0;
}