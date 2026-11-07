#include <bits/stdc++.h>

using namespace std;
int n, m, a[100005], maxx = 0;

signed main() {

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i]&a[i - 1] >= maxx) {
			maxx = a[i] & a[i - 1];
		}
	}
	cout << maxx;


	return 0;
}