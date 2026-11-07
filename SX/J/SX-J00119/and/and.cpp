#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
ll c, n, m, ma;
ll b[2000000], a[200010];

void dfs(int k, int st) {
	if (k == m + 1) {
		c = b[1];
		for (int i = 2; i <= m; i++) {
			c = c &b[i];
		}
		ma = max(ma, c);
	}
	for (int i = st; i <= n; i++) {
		b[k] = a[i];
		dfs(k + 1, i + 1);
		b[k] = 0;
	}
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
	return 0;
}
