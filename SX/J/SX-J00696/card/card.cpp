#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], vis[500005], q[500005], sum[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int per = 0;
		memset(vis, 0, sizeof vis);
		memset(q, 0, sizeof vis);
		for (int j = i; j <= n; j++) {
			if (vis[a[j]] == 0) {
				q[per + 1] = a[j];
				vis[a[j]] = per + 1;
				per++;
			} else {
				for (int k = vis[a[j]] + 1; k <= per; k++) {
					vis[q[k]] = 0;
					q[k] = 0;
				}
				per = vis[a[j]];
			}
		}
		for (int j = 1; j <= m; j++) {
			if (vis[j] == 0)
				continue;
			sum[j]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i] << ' ';
	}
	return 0;
}
