#include <bits/stdc++.h>
using namespace std;
long long n, s[200010], ans = 0;
char c[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld %c", &s[i], &c[i]);
	}
	long long f = 1, e = n;
	for (; f < e;) {
		long long fi = s[f];
		long long en = s[e];
		char c1 = c[f], c2 = c[e];
		if (fi > en) {
			if (c1 != c2) {
				ans += en;
			}
			s[f] -= en;
			e--;
		} else if (fi == en) {
			if (c1 != c2) {
				ans += en;
			}
			e--;
			f++;
		} else {
			if (c1 != c2) {
				ans += fi;
			}
			s[e] -= fi;
			f++;
		}
	}
	printf("%lld", ans);
	return 0;
}
