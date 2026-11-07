#include <bits/stdc++.h>
using namespace std;

int n, m, a[201010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a + 1, a + n + 1);
	for (long long i = n; i > n - m; i--) {
		if (i > n - m + 1) {
			a[i] = a[i] & a[i - 1];
		}
	}
	printf("%d\n", a[n - m + 1]);
	return 0;
}
