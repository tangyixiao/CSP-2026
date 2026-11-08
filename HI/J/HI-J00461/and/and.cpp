#include <iostream>
using namespace std;

int n, m, ans, a[200005];

void dfs(int x, int pos, int count) {
	if (count == m) {
		if (x > ans) ans = x;
		return;
	}
	if (pos == n) return;
	pos++;
	if (count == 0) dfs(a[pos], pos, count+1);
	else dfs(x & a[pos], pos, count+1);
	dfs(x, pos, count);
}

int main() {
	freopen("and.in",  "r", stdin);
	freopen("and.out", "w", stdout);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(0, 0, 0);
	cout << ans;
}
