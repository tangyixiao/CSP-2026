#include <bits/stdc++.h>
using namespace std;
int t[200005];
int a[200005];
int vis[200005];
int sum[200005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(vis, 0, sizeof(vis));
		int tail = 0;
		for (int j = i; j <= n; j++) {
			if (vis[t[j]] != 0) {
				int X = vis[t[j]];
				for (int k = X; k <= tail; k++) {
					vis[t[k]] = 0;
				}
				tail = X - 1 ;
				t[++tail] = a[j];
				vis[t[j]] = tail;
			} else {
				t[++tail] = a[j];
				vis[t[j]] = tail;
			}
		}
		for (int j = 1; j <= m; j++) {
			if (vis[j] != 0) {
				sum[j]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << sum[i] << ' ';
	}
	return 0;
}
