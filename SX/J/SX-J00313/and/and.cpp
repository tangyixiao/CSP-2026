#include <bits/stdc++.h>
using namespace std;
int maxn = -1e9, m, n, a[100005], vis[100005];

void dfs(int step, int k) {
	if (step == m) {
		maxn = max(maxn, k);
		return ;
	}
	for (int i = step; i <= n; i++) {
		if (vis[i] == 0) {
			vis[i] = 1;
			dfs(step + 1, k &a[i]);
			vis[i] = 0;
		}
	}
}

int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(0, pow(2, 10) + pow(2, 9) + pow(2, 8) + pow(2, 7) + pow(2, 6) + pow(2, 5) + pow(2, 4) + pow(2, 3) + pow(2,
	        2) + pow(2, 1) + 1);
	cout << maxn;
	return 0;
}
