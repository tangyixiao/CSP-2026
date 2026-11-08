#include<bits/stdc++.h>
#define int long long
using namespace std;
namespace hz {
	int n, m;
	int a[500005], ans[500005];
	bool vis[500005];
	vector<int>c;
	signed main() {
		freopen("card.in", "r", stdin);
		freopen("card.out", "w", stdout);
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int k = 1; k <= n; k++) {
			memset(vis, 0, sizeof vis);
			c.clear();
			for (int i = k; i <= n; i++) {
				if (!vis[a[i]]) {
					c.push_back(a[i]);
					vis[a[i]] = 1;
				} else {
					int p;
					for (int j = 0; j < c.size(); j++) {
						if (c[j] == a[i]) {
							p = j;
							break;
						}
					}
					vector<int>tmp;
					for (int j = 0; j <= p; j++) {
						tmp.push_back(c[j]);
					}
					for (int j = p + 1; j < c.size(); j++) {
						vis[c[j]] = 0;
					}
					c = tmp;
					c.push_back(a[i]);
					vis[a[i]] = 1;
				}
			}
			for (int i = 1; i <= m; i++) {
				if (vis[i]) ans[i]++;
			}
		}
		for (int i = 1; i <= m; i++) {
			cout << ans[i] << " ";
		} cout << endl;
	}
}
signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	hz::main();
	return 0;
}
