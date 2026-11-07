#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int a[200010];
bool f[200010];
int n, m;
int ans = -1;

void dfs(int l, int s) {
	if (l == m) {
		ans = max(ans, s);
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!f[i]) {
			f[i] = 1;
			if (l == 0)
				dfs(l + 1, a[i]);
			else
				dfs(l + 1, s & a[i]);
			f[i] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	int x1 = 1, x2 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		x1 &= a[i];
		x2 = max(x2, a[i]);
	}
	if (m == 1) {
		cout << x2;
		return 0;
	}
	if (m == n) {
		cout << x1;
		return 0;
	}
	dfs(0, 1);
	cout << ans;
	return 0;
}
