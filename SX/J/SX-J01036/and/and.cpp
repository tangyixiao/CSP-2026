#include <bits/stdc++.h>
using namespace std;
long long m, n, maxx;
long long ans;
long long a[200005];

void dfs(int t, long long cnt, int j) {
	if (t == n + 1) {
		ans = max(ans, cnt);
		return ;
	}
	for (int i = j; i <= m; i++) {
		dfs(t + 1, cnt &a[i], i + 1);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> m >> n;
	cin >> a[1];
	ans = a[1];
	maxx = a[1];
	for (int i = 2; i <= m; i++) {
		cin >> a[i];
		ans &= a[i];
		maxx = max(maxx, a[i]);
	}
	if (n == m) {
		cout << ans;
		return 0;
	}
	if (m == 1) {
		cout << maxx;
		return 0;
	}
	ans = 0;
	dfs(1, pow(2, 31) - 1, 1);
	cout << ans;
	return 0;
}
