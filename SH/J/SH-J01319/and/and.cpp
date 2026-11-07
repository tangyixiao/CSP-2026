#include <bits/stdc++.h>
using namespace std;

int ans, n, m;
int a[200005];

int dfs(int x, int step, int cnt) {
	if(step == m) return cnt;
	int k = cnt, num = 0;
	for(int i = x + 1; i <= n; i++) {
		k = cnt;
		k = k & a[i];
		num = max(num, dfs(i, step + 1, k));
	}
	return num;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n - m + 1; i++) {
		ans = max(ans, dfs(i, 1, a[i]));
	}
	cout << ans;
	return 0;
}
