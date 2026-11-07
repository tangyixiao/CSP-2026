#include <bits/stdc++.h>
using namespace std;
long long n, m, ans, num, a[114514 * 2], s[114514 * 2];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%lld%lld", &n, &m);
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			ans = max(ans, a[i]);
		}
		printf("%lld", ans);
		return 0;
	}
	if (n == m) {
		for (int i = 1; i <= n; i++) {
			scanf("%lld", &a[i]);
			ans = ans &a[i];
		}
		printf("%lld", ans);
		return 0;
	}
	if (n == m + 1) {
		for (int i = 1; i <= n; i++) {
			scanf("%lld", &a[i]);
			num = num &a[i];
		}
		for (int i = 1; i <= n; i++) {
			ans = max(ans, a[i] ^ num);
		}
		printf("%lld", ans);
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			scanf("%lld", &a[i]);
			for (int j = 1; j < i ; j++)
				if (i != j)
					ans = max(ans, a[i] & a[j]);
		}
		printf("%lld", ans);
		return 0;
	}
	return 0;
}
