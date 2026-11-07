#include <bits/stdc++.h>
using namespace std;
int n, m, a[500010];
int maxx = 0;

void dfs(int x, int deep, int b ) {
	int sum = (a[x] & b ) ;
	if (deep == m) {
		maxx = max(maxx, sum);
		return;
	}
	for (int i = x + 1; i <= n - m + deep; i++) {
		dfs(i, deep + 1, sum);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n - m + 1; i++)
		dfs(i, 1, a[i]);
	cout << maxx;
	return 0;
}
