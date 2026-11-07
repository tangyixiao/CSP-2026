#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, m, a[N], sum, ans;
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d%d", &n, &m, &a[1]), sum = a[1];
	for (int i = 2; i <= n; i++) {
		scanf("%d", &a[i]), sum = sum & a[i];
	}
	sort(a + 1, a + n + 1);
	if (m == 1) {
		printf("%d\n", a[n]);
		return 0;
	}
	if (m == n) {
		printf("%d\n", sum);
		return 0;
	}
	if (m == 2 && n <= 2000) {
		int maxn = -1;
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				maxn = max(maxn, a[i] & a[j]);
			}
		}
		printf("%d\n", maxn);
		return 0;
	}
	ans = a[n];
	for (int i = n - 1; i >= n - m + 1; i--) {
		ans = ans & a[i];
	}
	printf("%d\n", ans);
	return 0;
}
