#include <bits/stdc++.h>
using namespace std;
int n, m, a[500005], f[500005], ans[500005], f1[500005];
int main() {
	freopen("card.in", "r", stdin);
	freopen("crad.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= m; k++) {
			f[k] = 0;
			f1[k] = 0;
		}
		for (int j = i; j <= n; j++) {
			if (f[a[j]] == 0) {
				f[a[j]]++;
				f1[a[j]] = j;
			}
			else {
				for (int z = f1[a[j]]; z <= j - 1; z++) {
					if (f[a[z]] != 0) f[a[z]]--;
					f1[a[z]] = 0;
				}
				f1[a[j]] = j;
				f[a[j]] = 1;
			}
		}
//		for (int p = 1; p <= m; p++) {
//			cout << f[p] << ' ';
//		}
//		cout << '\n';
		for (int p = 1; p <= m; p++) {
			if (f[p] != 0 && f[p] > 0) {
				ans[p]++;
			}
		}
//		cout << '\n';
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
}
