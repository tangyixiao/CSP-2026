#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5+5;
int a[N];
int n, m, maxn = -1;

void dfs(int los, int id, int step) {
	if (step >= m) {
		maxn = max(maxn, los);
		return;
	}
	for (int i = id + 1; i <= n; i++) {
		dfs(los &a[i], i, step + 1);
	}
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n - m + 1; i++)
		dfs(a[i], i, 1);
	cout << maxn;
	return 0;
}
