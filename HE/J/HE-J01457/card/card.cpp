#include<bits/stdc++.h>
using namespace std;
int n, m, a[500005], ans[300005];
int vis[300005], p[500005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(vis, 0, sizeof(vis));
		for (int j = i ; j <= n; j++) {
			if (vis[a[j]]) {
				for (int k = vis[a[j]]; k < j; k++) {
					vis[a[k]] = 0;
				}
			}
			vis[a[j]] = j;
		}
		for (int j = 1; j <= m; j++) {
			if (vis[j]) {
				ans[j]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
