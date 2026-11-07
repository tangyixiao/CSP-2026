#include <stdio.h>

#define MAXN 200005

long long n, ans = 0;
long long a[MAXN];
char c[MAXN];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	scanf("%lld", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lld %c", &a[i], &c[i]);

		/* printf("i = %d, a = %d, c = %c - %d\n", i, a[i], c[i], c[i]); */
	}

	int l = 0, r = n - 1;
	long long la, ra;
	char lc, rc;

	la = a[l];
	ra = a[r];
	lc = c[l];
	rc = c[r];

	while (l < r) {
		/* printf("l = %d, r = %d, la = %d, ra = %d, lc = %c - %d, rc = %c - %d\n", l, r, la, ra, lc, lc, rc, rc); */

		if (lc != rc) {
			if (la > ra) {
				ans += ra;
				la -= ra;
				r--;
				ra = a[r];
				rc = c[r];
			} else if (la < ra) {
				ans += la;
				ra -= la;
				l++;
				la = a[l];
				lc = c[l];
			} else {
				ans += la;
				l++;
				r--;
				la = a[l];
				ra = a[r];
				lc = c[l];
				rc = c[r];
			}
		} else {
			if (la > ra) {
				la -= ra;
				r--;
				ra = a[r];
				rc = c[r];
			} else if (la < ra) {
				ra -= la;
				l++;
				la = a[l];
				lc = c[l];
			} else {
				l++;
				r--;
				la = a[l];
				ra = a[r];
				lc = c[l];
				rc = c[r];
			}
		}
	}

	printf("%lld\n", ans);

	return 0;
}
