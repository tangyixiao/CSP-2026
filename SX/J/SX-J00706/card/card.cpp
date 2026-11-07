#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e6 + 5;
int n, m, cnt, a[N], vis[N], znum[N];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> vis[i];
	for (int k = 1; k <= n; k++) {
		cnt = 0;
		for (int i = k; i <= n; i++) {
			int f = 0;
			for (int j = 1; j <= cnt; j++) {
				if (a[j] == vis[i]) {
					cnt = j;
					f = 1;
					break;
				}
			}
			if (f == 0)
				a[++cnt] = vis[i];
		}
		for (int i = 1; i <= cnt; i++) {
			znum[a[i]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << znum[i] << ' ';
	}
	return 0;

}
