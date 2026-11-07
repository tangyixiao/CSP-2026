#include <bits/stdc++.h>
#define int long long
using namespace std;

inline bool cmp(int x, int y) {
	return x > y;
}
const int N = 2e5+5;
int a[N], n, m, minn = INT_MAX;

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	stable_sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= m; i++) {
		minn = min(a[i], minn);
	}
	cout << minn << "\n";
	return 0;
}
