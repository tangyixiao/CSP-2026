#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 - 1;
int n, m, a[200005], ans = 0;

void bfs(int c, int b) {
	if (c >= m) {
		ans = max(ans, b);
		return ;
	}
	for (int i = 1; i <= n; i++) {
		bfs(c + 1, b &a[i]);
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	if (n == m) {
		int a1, a2;
		ans = a1 &a2;
		for (int i = 3; i <= n; i++) {
			int u;
			cin >> u;
			ans = ans % u;
		}
		cout << ans;
		return 0;
	}
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	if (m == 1) {
		cout << a[n];
		return 0;
	}
	if (m == 2) {
		ans = -10;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				if (a[i]&a[j] > ans)
					ans = a[i] & a[j];
			}
		}
		cout << ans;
		return 0;
	}
	if (n <= 20) {
		bfs(0, MAXN);
		cout << ans;
		return 0;
	}
	if (m == n - 1) {
		for (int i = 1; i <= n; i++) {
			int u = MAXN;
			for (int j = 1; j <= n; j++) {
				if (i == j)
					continue;
				u = u &a[j];
			}
			ans = max(ans, u);
		}
		return 0;
	}
	return 0;
}