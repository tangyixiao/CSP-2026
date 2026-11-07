#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
long long  a[N];

bool cmp(long long x, long long y) {
	return x > y;
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, cmp);
	cout << a[m];
	return 0;
}
