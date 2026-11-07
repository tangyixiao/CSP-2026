#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[300005];

int cmp(int a, int b) {
	return a > b;
}

signed main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] % 2 == 1) {
			sort(a + 1, a + n + 1, cmp);
			cout << a[m];
			return 0;
		} else if (a[i] % 2 == 0) {
			cout << 0;
			return 0;
		} else {
			cout << a[m];
			return 0;
		}
	}
	return 0;
}
