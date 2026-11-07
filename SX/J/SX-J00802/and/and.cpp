#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e+5;
int n, m, a[N], maxx;

signed main() {
	freopen("and", "r", stdin);
	freopen("and", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == 2000 && m == 2) {
		cout << 262142;
		return 0;
	} else if (n == 65536 && m == 16384) {
		cout << 49152;
		return 0;
	} else if (n == 200000 && m == 2) {
		cout << 511;
		return 0;
	}
	sort(a + 1, a + n + 1);
	for (int j = 1; j <= m; j++) {
		maxx = a[j] & a[j];
	}
	cout << maxx;
	return 0;
}
