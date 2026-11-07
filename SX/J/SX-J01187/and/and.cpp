#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200003];

int f(int x, int y, int i) {
	int ma = 0, x1;
	if (y == 0) {
		return x;
	}
	for (i; i < n; i++) {
		x1 = (x &a[i]);
		ma = max(ma, f(x1, (y - 1), i + 1));
	}
	return ma;
}

int main() {
	freopen ("and.in", "r", stdin);
	freopen ("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	if (m == 1) {
		cout << a[n - 1];
		return 0;
	} else if (m == n) {
		int ans = (2 << 29) - 1;
		for (int i = 0; i < n; i++) {
			ans = (ans &a[i]);
		}
		cout << ans;
		return 0;
	}
	printf("%d", f((2 << 29) - 1, m, 0));
}
