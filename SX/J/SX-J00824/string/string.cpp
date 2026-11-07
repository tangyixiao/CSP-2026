#include <bits/stdc++.h>
using namespace std;
long long n, k, kii, ans;

struct Node {
	long long k;
	char c;
} a[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	kii = n;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i].k);
		cin >> a[i].c;
		k += a[i].c;
	}
	if (n <= 2) {
		printf("0\n");
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i].k == 0)
			continue;
		while (a[i].k > 0) {
			if (a[kii].c == a[i].c) {
				if (a[i].k >= a[kii].k) {
					a[i].k -= a[kii].k;
					a[kii].k = 0;
				} else {
					a[kii].k -= a[i].k;
					a[i].k = 0;
				}
			} else {
				if (a[i].k >= a[kii].k) {
					a[i].k -= a[kii].k;
					ans += a[kii].k;
					a[kii].k = 0;
				} else {
					a[kii].k -= a[i].k;
					ans += a[i].k;
					a[i].k = 0;
				}
			}
			if (a[kii].k == 0)
				kii--;
		}
	}
	printf("%lld\n", ans);
	return 0;
}
