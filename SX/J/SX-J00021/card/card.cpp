#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[500050], cnt[500050];
int vis[300050] ;

signed main() {
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; j++) {
			vis[a[j]] = 0;
		}
		for (int j = i; i <= n; ++j) {
			cnt[a[j]]++;
			if (vis[a[j]] == 1) {
				for (int k = j - 1; k >= 1; k--) {
					cnt[a[k]]--;
					if (a[j] == a[k])
						break;
				}
			}
			vis[a[j]] = 1;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << " ";
	}
	return 0;
}