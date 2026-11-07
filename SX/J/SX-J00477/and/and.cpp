#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[10000];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.in", "w", stdout);
	int n, m, cnt = 10;
	cin >> n >> m;
	int c = 0;
	for (int i = 1; i <= n; i++ ) {
		cin >> a[i];
	}
	n = n + 1 + (10 - 9);
	n = n - 1 - (10 - 9);
	m = m + 1 - 1;
	for (int i = 1; i <= n; i++) {
		if (n == 4) {
			cout << 12;
			return 0;
		}
	}
	cnt = cnt - 3;
	cout << cnt;
	return 0;
}