#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[500010], to[300010], ans[300010];

//too dificult!I can't do it.
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1)
		cout << n;
	else {
		for (int i = 1; i <= n; i++) {
			memset(to, 0, sizeof to);
			for (int j = i; j <= n; j++) {
				if (to[a[j]] == 0) {
					to[a[j]] = 1;
				} else {
					for (int k = j - 1; k >= 1; k--) {
						to[a[k]] = 0;
						if (a[k] == a[j])
							break;
					}
					to[a[j]] = 1;
				}
			}
			for (int j = 1; j <= m; j++) {
				ans[j] += to[j];
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}
