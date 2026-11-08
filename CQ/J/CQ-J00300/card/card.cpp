#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], nxt[500005], vis[300005], ans[300005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0); 
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = n; i >= 1; i--) {
		nxt[i] = vis[a[i]];
		if (vis[a[i]] == 0) {
			vis[a[i]] = i;
		}
	}
	for (int i = 1; i <= n; i++) {
		int now = i;
		string s;
		while (now <= n) {
			if (nxt[now] != 0) {
				now = nxt[now];
			} else {
				ans[a[now]]++;
				now++;
			}
			if (now == n + 1) {
				break;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		if (i == m) {
			cout << ans[i];
		} else {
			cout << ans[i] << " ";
		}
	}
	return 0;
}
