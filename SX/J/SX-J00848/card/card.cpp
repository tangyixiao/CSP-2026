#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, a[500010], f;
int pos[300010];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1]) {
			f = 1;
		}
	}
	if (f == 0) {
		for (int i = 1; i <= n; i++) {
			if (a[i] != a[i + 1]) {
				pos[a[i]] = i;
			}
		}
		for (int i = 1; i <= m; i++) {
			cout << pos[i] << ' ';
		}
	}
	return 0;
}
