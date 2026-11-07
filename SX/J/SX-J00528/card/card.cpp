#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500010], fi;
int la[300010];
int ans[300010];
int vis[300010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
//	memset(link, -1, sizeof(link));
	for (int i = n; i >= 1; i--) {
		if (la[a[i]] == 0) {
			la[a[i]] = i;
		}

	}
	for (int i = 1 ; i <= n; i++) {
		memset(vis, 0, sizeof(vis));
		for (int j = i; j <= n;) {
			if (vis[a[j]] != 1) {
				ans[a[j]]++;
				vis[a[j]] = 1;
			}

			if (la[a[j]] != 0 && la[a[j]] != j) {
				j = la[a[j]];

			} else {
				j++;
			}
//			cout << j << " " << endl;
		}

//		cout << endl;
//		for (int j = 1; j <= m ; j++) {
//			cout << ans[j] << " ";
//		}
//		cout << endl;
	}
//	fi = n;

//	for (int i = n; i >= 1; i--) {
//		a[fi--] = a[i];
//		if (link[a[i]] != -1) {
//			for (int j = fi + 2; j <= link[a[i]] - 1; j++) {
//				link[a[j]] = -1;
//			}
//			fi = link[a[i]] - 1;
//
//		} else {
//			link[a[i]] = fi + 1;
//		}
//
//		for (int j = fi + 1; j <= n; j++) {
//			ans[a[j]]++;
//			cout << a[j] << " ";
//		}
//		cout << "     " << link[a[i]] << endl;
//	}
	for (int i = 1; i <= m ; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
