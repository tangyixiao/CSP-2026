#include <bits/stdc++.h>
#define int long long
using namespace std;
const int k = 2e5+5;
int n, m;
int a[k];

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	cout << a[m];

	return 0;
}