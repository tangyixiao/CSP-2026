#include <bits/stdc++.h>
using namespace std;
int maxx, n, m, a[1000005];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		maxx = max(maxx, a[i]);
	}
	for (int i = 1; i <= n; i++)
		cout << maxx;
	return 0;
}
