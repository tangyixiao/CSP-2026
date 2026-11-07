#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long u64;

u64 x_p = 0, x_n, b_p = 0, b_n, res = 0, tmpp, kkk = 0, kks = 0;

struct numss {
	u64 a;
	char b;
} xxx[200005], xxb[200005];

int main() {
#ifndef _DEBUG
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
#endif
	u64 n;
	scanf("%llu", &n);
	for (u64 i = 0; i < n; i++) {
		scanf("%llu %c", &xxx[i].a, &xxx[i].b);
		xxb[i] = xxx[i];
		kks += xxx[i].a;
	}
	reverse(xxb, xxb + n);
	///
//	for (u64 i = 0; i < n; i++) {
//		printf("%llu %c\n", xxb[i].a, xxb[i].b);
//		//xxb[i]=xxx[i];
//	}
	///
	x_n = xxx[0].a;
	b_n = xxb[0].a;
	while (kkk < kks / 2) {
		tmpp = min(x_n, b_n);
		x_n -= tmpp;
		b_n -= tmpp;
		kkk += tmpp;
		//printf("%llu\n", kkk);

		if (xxx[x_p].b != xxb[b_p].b)
			res += tmpp;

		if (x_n == 0) {
			x_p++;
			x_n = xxx[x_p].a;
		}
		if (b_n == 0) {
			b_p++;
			b_n = xxb[b_p].a;
		}
	}
	printf("%llu\n", res);
	return 0;
}