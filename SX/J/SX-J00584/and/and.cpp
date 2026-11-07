#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[200010], maxn, vis[200010];

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxn = max(maxn, a[i]);
	}
	int k = log2(maxn), len = 0, ans = 0;
	bool flag = 0;
	for (int j = k; j >= 0; j--) {
		len = 0;
		for (int i = 1; i <= n; i++) {
			if (vis[i] == 0 and flag)
				continue;
			if (a[i] >= (1 << j)) {
				len++;
				a[i] -= (1 << j);
				vis[i] = 1;
			} else
				vis[i] = 0;
		}
		if (len >= m) {
			flag = 1;
			ans += (1 << j);
		}
	}
	cout << ans;
	return 0;
}
