#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[500005], vis[500005];
int tong[500005];
int dl[500005], t;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(dl, 0, sizeof(dl));
		t = 0;
		memset(vis, 0, sizeof(vis));
		for (int j = i; j <= n; j++) {
			if (vis[a[j]] == 0) {
				dl[++t] = a[j];
				vis[a[j]] = 1;
			} else {
				int p = 1;
				for (int k = 1; k <= t; k++) {
					if (dl[k] == a[j]) {
						p = k;
						break;
					}
				}
				for (int k = p + 1; k <= t; k++) {
					vis[dl[k]] = 0;
					dl[k] = 0;

				}
				t = p;
			}
			//cout << dl[t] << " " << vis[dl[j]] << endl;
		}
		for (int k = 1; k <= t; k++) {
			tong[dl[k]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << tong[i] << " ";
	}
	return 0;
}
