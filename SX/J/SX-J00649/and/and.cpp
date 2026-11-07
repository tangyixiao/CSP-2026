#include <bits/stdc++.h>
using namespace std;
int m, n;
int a[200010], ans, maxn = -1, maxx = -1;
bool v[200010];

int dfs(int x, int k) {
	if (k == m + 1) {
		return x;
	}
	maxn = -1;
	for (int i = 1; i <= n; i++) {
		if (v[i]) {
			continue;
		}
		v[i] = 1;
		if (k == 1) {
			maxn = max(maxn, dfs(a[i], k + 1));
		} else {
			maxn = max(maxn, x &dfs(a[i], k + 1));
		}
		v[i] = 0;
	}
	return maxn;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		maxx = max(maxx, a[i]);
	}
	if (m == 1) {
		cout << maxx;
		return 0;
	}
	cout << dfs(0, 1);
	return 0;
}

