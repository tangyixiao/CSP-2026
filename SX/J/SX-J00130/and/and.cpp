#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[10000005];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	cout << a[n - 2];
	return 0;
}