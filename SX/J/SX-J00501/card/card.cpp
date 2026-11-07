#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5+10;
int n, m;
int a[maxn], ans[maxn], vis[maxn];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin>>a[i];
	for (int i = 1; i <= n; i++) {
		if (n <= 5000) {
			for (int j = i; j <= n; j++) {
				if (!vis[a[j]])
					vis[a[j]] = j;
				else {
					for (int l = vis[a[j]] + 1; l <= j; l++)
						vis[a[l]] = 0;
					vis[a[j]] = j;
				}
			}
			for (int j = 1; j <= m; j++)
				if (vis[j] > 0)
					ans[j]++;
		} else {
			if (i == 1) {
				for (int j = i; j <= n; j++) {
					if (!vis[a[j]])
						vis[a[j]] = j;
					else {
						for (int l = vis[a[j]] + 1; l <= j; l++)
							vis[a[l]] = -vis[a[j]];
						vis[a[j]] = j;
					}
				}
				for (int j = 1; j <= m; j++)
					if (vis[j] > 0)
						ans[j]++;
			} else {
				for (int j = 1; j <= m; j++)
					if (vis[j] > 0 || abs(vis[j]) > i)
						ans[j]++;
			}
		}

	}
	for (int i = 1; i <= m; i++)
		cout << ans[i];
	return 0;
}