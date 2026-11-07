#include <bits/stdc++.h>
using namespace std;
int n, m, a[200005];
bool used[200005];
int ans;

void dfs(int s, int cnt) {
	if (cnt == m) {
		ans = max(ans, s);
		//cout << s << ' ';
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (used[i])
			continue;
		used[i] = 1;
		auto x = s &a[i];

		dfs(x, cnt + 1);
		used[i] = 0;
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (n == m) {
		for (int i = 1; i <= n; i++)
			ans = ans & a[i];
		cout << ans;
		return 0;
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++)
			ans = max(ans, a[i]);
		cout << ans;
		return 0;
	}
	if (m == 2) {
		for (int i = 2; i <= n; i++)
			ans = max(ans, a[i] & a[i - 1]);
		cout << ans;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		used[i] = 1;
		dfs(a[i], 1);
		used[i] = 0;
		//	cout << '\n';
	}
	cout << ans;
	return 0;
}
