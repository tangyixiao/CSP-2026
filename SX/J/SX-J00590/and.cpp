#include <bits/stdc++.h>
using namespace std;
long long a[2000010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, k, da = 0;
	cin >> n >> m;
	for (long long nn = 1; nn <= n; nn++) {
		cin >> a[nn];
		da = max(da, a[nn]);
	}
	if (m == 1) {
		cout << da;
		return 0;
	}
	sort(a + 1, a + n + 1);
	k = a[m];
	for (long long mm = 2; mm <= m; mm++) {
		k = k &a[m - mm + 1];
	}
	cout << k;
	return 0;
}