#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, a[200010], l, r, x, ans;
char c[200010];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++)
		scanf("%lld %c", &a[i], &c[i]);
	l = 1, r = n;
	while (l < r) {
		while (l < r && a[l] == 0)
			l++;
		while (l < r && a[r] == 0)
			r--;
		x = min(a[l], a[r]);
		if (c[l] != c[r])
			ans += x;
		a[l] -= x, a[r] -= x;
	}
	printf("%lld\n", ans);
	return 0;
}
