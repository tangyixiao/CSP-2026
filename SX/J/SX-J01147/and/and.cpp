#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxN = 2147483647;
int n, m;
int ans = -1;
int a[200005];

void dfs(int v, int s, int k) {
	if (k == m) {
		ans = max(s, ans);
		return;
	}
	if (s <= ans)
		return;
	for (int i = v; i >= 1; i--) {
		if (a[i] <= ans)
			return;
		dfs(i - 1, s &a[i], k + 1);
	}
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	if (m == 1) {
		cout << a[n];
		return 0;
	}
	if (m == n) {
		ans = a[1];
		for (int i = 2; i <= n; i++) {
			ans = ans &a[i];
		}
		cout << ans;
		return 0;
	}
	if (m == (n - 1)) {
		vector<int>k(n + 5);
		vector<int>p(n + 5);
		k[1] = a[1];
		for (int i = 2; i <= n; i++) {
			k[i] = k[i - 1] & a[i];
		}
		p[n] = a[n];
		for (int i = n - 1; i >= 1; i--) {
			p[i] = p[i + 1] & a[i];
		}
		ans = max(k[n - 1], p[2]);
		for (int i = 2; i <= n - 1; i++) {
			ans = max(ans, k[i - 1] & p[i + 1]);
		}
		cout << ans;
		return 0;
	}
	dfs(n, maxN, 0);
	cout << ans;
	return 0;
}