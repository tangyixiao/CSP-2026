#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
int n, m;
int a[N], cnt[N], last[N], vis[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int beg = i, en = 0;
		memset(last, -1, sizeof last);
		for (int j = i; j <= n; j++) {
			if (last[a[j]] == -1) {
				last[a[j]] = j;
				en = j;
			}else {
				beg = last[a[j]] - 1;
				en = j;
				for (int k = i; k < j; k++) {
					if (k >= last[a[j]]) {
						last[a[k]] = -1;
					}
				}
				last[a[j]] = j;
			}
		}
		memset(vis, 0, sizeof vis);
		for (int j = n; j >= i; j--) {
			if (!vis[a[j]] && last[a[j]] != -1) {
				vis[a[j]] = 1;
				cnt[a[j]]++;
//				cout << a[j] << ' ';
			}
		}
//		cout << endl;
	}
	for (int i = 1; i <= m; i++) cout << cnt[i] << ' ';
	return 0;
}
