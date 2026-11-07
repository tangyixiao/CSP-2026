#include <bits/stdc++.h>
using namespace std;
int a[100010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i != j)
					ans = max(ans, a[i] & a[j]);
			}
		}
	}
	if (m == 3)
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= m; j++) {
				for (int k = 1; k <= m; k++) {
					if (i != j && j != k && k != i)
						ans = max(ans, a[i] & a[j] & a[k]);
				}
			}
		}
	cout << ans;
	return 0;
}
