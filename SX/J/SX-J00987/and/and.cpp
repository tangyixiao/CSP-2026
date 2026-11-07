#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int a[MAXN + 5], cnt[40];
bool vis[MAXN + 5][40], vis1[MAXN + 5];

int main() {
	ios::sync_with_stdio();
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i], vis1[i] = 1;
	int ans = INT_MAX;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= 30; j++)
			cnt[j] += vis[i][j] = (a[i] & (1 << (j - 1)));
	for (int i = 30; i >= 1; i--) {
		if (cnt[i] >= m) {
//			cout << (1 << (i - 1)) << ":" << cnt[i] << endl << endl;
			for (int j = 1; j <= n; j++) {
				if (!vis1[j])
					continue;
				vis1[j] = vis[j][i];
//				cout << j << "," << a[j] << "," << vis1[j] << endl;
			}
			for (int k = 1; k <= 30; k++) {
				cnt[k] = 0;
				for (int j = 1; j <= n; j++) {
					if (!vis1[j])
						continue;
					cnt[k] += vis[j][k] = (a[j] & (1 << (k - 1)));
				}
			}
		}
	}
	for (int i = 1; i <= n; i++)
		if (vis1[i])
			ans &= a[i];
	cout << ans;
	return 0;
}
