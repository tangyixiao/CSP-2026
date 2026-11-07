#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5e5+5;
ll n, m, a[N], ans[N], q[N], vis[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(q, 0, sizeof(q));
		memset(vis, 0, sizeof(vis));
		for (int j = i, l = 1; j <= n; j++, l++) {
			if (vis[a[j]]) {
				for (int k = vis[a[j]]; k <= l; k++) {
					vis[q[k]] = 0;
					q[k] = 0;
					l--;
				}
			}
			q[l] = a[j];
			vis[a[j]] = l;
		}
		for (int j = 1; j <= m; j++) {
			if (vis[j])
				ans[j]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
