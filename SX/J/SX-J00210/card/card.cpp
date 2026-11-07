#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
long long n, m, a[N], vis[N], cnt, t[N], ans[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cnt = 0;
		memset(vis, 0, sizeof(vis));
		memset(t, 0, sizeof(t));
		for (int j = i; j <= n; j++) {
			if (vis[a[j]] == 0) {
				cnt++;
				t[cnt] = a[j];
				vis[a[j]] = cnt;
			} else {
				long long t1 = vis[a[j]];
				for (int k = t1; k <= cnt; k++) {
					t[k] = 0;
					vis[t[k]] = 0;
				}
				cnt = t1;
				t[cnt] = a[j];
				vis[a[j]] = cnt;
			}
		}
		for (int j = 1; j <= cnt; j++) {
			ans[t[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}