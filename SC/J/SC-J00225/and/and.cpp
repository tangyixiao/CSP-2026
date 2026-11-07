#include<bits/stdc++.h>
using namespace std;

int ans;
int n, m;
int a[200010];

void dfs(int now, int used, int num) {
	if (used == m) {
		ans = max(ans, num);
		return;
	}

	if (used + n - now + 1 < m) return;

	if (used == 0) dfs(now + 1, used + 1, a[now]);
	else dfs(now + 1, used + 1, num & a[now]);
	dfs(now + 1, used, num);
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	if (n <= 2000) {
		dfs(1, 0, 0);
		cout << ans;
	} else {
		if (n == m) {
			ans = a[1];
			for (int i = 2; i <= n; ++i) ans = (ans & a[i]);
			cout << ans;
		} else {
			cout << "0";
		}
	}


	return 0;
}