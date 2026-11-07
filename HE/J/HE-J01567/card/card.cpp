#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 10;
int n, m, a[N], vis[N], ans[N];
int main () {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;i ++) cin >> a[i];
	for (int i = 1;i <= n;i ++) {
		memset(vis, 0, sizeof vis);
		for (int j = i;j <= n;j ++) {
			if (!vis[a[j]]) vis[a[j]] = j; 
			else {
				for (int k = vis[a[j]];k <= j;k ++) {
//					cout << a[k] << "\n";
					vis[a[k]] = 0;
				}
				vis[a[j]] = j;
			}
		}
		for (int j = 1;j <= m;j ++) {
//			cout << vis[j] << " ";
			if (vis[j]) ans[j] ++;
		}
//		cout << "\n";
	}
	for (int i = 1;i <= m;i ++) cout << ans[i] << " ";
	return 0;
}
