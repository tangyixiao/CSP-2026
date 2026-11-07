#include <bits/stdc++.h>
using namespace std;
int a[500005], ans[300005], k[300005], b[500005];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		for (int j = i - 1; j <= n; j++)
			b[j] = 0;
		for (int j = 1; j <= m; j++)
			k[j] = 0;
		for (int j = i; j <= n; j++) {
			if (k[a[j]] == 0)
				k[a[j]] = j;
			else {
				for (int l = k[a[j]]; l < j; l++)
					b[l] = 1;
				for (int l = 1; l <= m; l++)
					if (k[l] != 0 && b[k[l]] == 1)
						k[l] = 0;
			}
		}
		for (int j = 1; j <= m; j++) {
			for (int l = i; l <= n; l++) {
				if (a[l] == j && b[l] == 0) {
					ans[j]++;
					break;
				}
			}
		}
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}