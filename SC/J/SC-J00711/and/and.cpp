#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int a[N];
int n, m, ans;
void dfs(int pos, int sum, int cnt) {
	if (cnt == m) {
		ans = max(ans, sum);
		return;
	}
	for (int i = pos + 1; i <= n; ++i) {
		dfs(i, (!sum ? a[i] : a[i] & sum), cnt + 1);
		dfs(i, sum, cnt);
	}
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	dfs(0, 0, 0);
	cout << ans;
	return 0;
}