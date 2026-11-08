#include <bits/stdc++.h>
#define int long long

using namespace std;

namespace Force {
	constexpr int N = 5e5 + 5;
	constexpr int M = 3e5 + 5;

	int n, m;
	int a[N];
	int pos[M];
	bool vis[M];
	int ans[M];

	void main() {
		cin >> n >> m;
		for (int i = 1; i <= n; ++ i) cin >> a[i];

		for (int i = 1; i <= n; ++ i) {
			for (int j = 1; j <= m; ++ j) pos[j] = 0;
			for (int j = 1; j <= m; ++ j) vis[j] = 0;
			for (int j = i; j <= n; ++ j) {
				if (pos[a[j]] > 0) {
					int start = pos[a[j]];
					for (int k = start; k < j; ++ k) pos[a[k]] = 0, vis[a[k]] = false;
				}
				pos[a[j]] = j, vis[a[j]] = true;
			}
			for (int j = 1; j <= m; ++ j) if (vis[j]) ans[j] ++;
		}

		for (int i = 1; i <= m; ++ i) cout << ans[i] << ' ';
	}
}

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Force::main();

	return 0;
}