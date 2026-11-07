#include <bits/stdc++.h>
using namespace std;
int a[500005], s[300005];
int vis[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int k = 1; k <= n; k++) {
		memset(vis, 0, sizeof(vis));
		for (int i = k; i <= n; i++) {
			vis[a[i]] = 1;
		}
		for (int i = 1; i <= m; i++) {
			if (vis[i])
				s[i]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << s[i] << ' ';
	}
	return 0;
}
