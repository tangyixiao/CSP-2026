#include <bits/stdc++.h>
using namespace std;

int n, l1, r1, l2, r2, a[200001];
long long len = 0LL, ans = 0LL;
char s[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %c", &a[i], &s[i]);
		len += a[i];
	}
	l1 = 1, r1 = n, l2 = 1, r2 = a[n];
	while (!(l1 == r1 && l2 >= r2)) {
		if (s[l1] != s[r1]) {
			ans++;
		}
		if (l2 == a[l1]) {
			l1++, l2 = 1;
		} else {
			l2++;
		}
		if (r2 == 1) {
			r1--;
			r2 = a[r1];
		} else {
			r2--;
		}
	}
	printf("%lld", ans);
	return 0;
}