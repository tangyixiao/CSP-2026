#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200010], b[200010], sum, ma = INT_MIN;

void dfs(int x, int k) {
	b[x] = a[k];
	if (k > n) {
		if (x > m) {
			sum = b[1];
			for (int i = 2; i <= m; i++) {
				sum = (sum &b[i]);
			}
			ma = max(ma, sum);
		}

		return ;
	}
	if (x > m ) {
		sum = b[1];
		for (int i = 2; i <= m; i++) {
			sum = (sum &b[i]);
		}

		ma = max(ma, sum);
		return ;
	}
	dfs(x + 1, k + 1);
	dfs(x, k + 1);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(1, 1);
	cout << ma;
}