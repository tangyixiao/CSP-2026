#include <bits/stdc++.h>
using namespace std;

int n, m, a[200005], maxn = 0;

void dfs(int st, int xy, int an) { //st当前是第几个数，xy当前数的下标, an当前按位与的结果
	if (st > m) {
		maxn = max(maxn, an);
	} else {
		for (int i = xy + 1 ; i <= n ; i++) {
			dfs(st + 1, i, an &a[xy]);
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	for (int i = 1 ; i <= n ; i++) {
		cin >> a[i];
	}
	for (int i = 1 ; i <= n - m + 1 ; i++) {
		dfs(1, i, a[i]);
	}
	cout << maxn;
	return 0;
}