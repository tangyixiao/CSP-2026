#include<bits/stdc++.h>
using namespace std;
long long  n;
const int maxn = 5e5+5;
long long  a[maxn], c[maxn], sum, ans;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%lld", &a[i]);
		char c1;
		cin >> c1;
		c[i] = c1 - 'a';
		sum += a[i];
	}
	long long  l = 0, r = sum;
	long long  i = 1, j = n;
	long long l1 = 0, r1 = 0;
	while (l < r) {
		if (l1 == 0) {
			l1 = a[i];
		}
		if (r1 == 0) {
			r1 = a[j];
		}
		if (c[i] != c[j]) {
			if (l1 < r1) {
				ans += l1;
				r1 -= l1;
				l += l1, r -= l1;
				l1 = 0;
				++i;
			} else if (l1 > r1) {
				ans += r1;
				l1 -= r1;
				l += r1, r -= r1;
				r1 = 0;
				--j;
			} else {
				ans += r1;
				l1 -= r1;
				l += r1, r -= r1;
				r1 = 0;
				--j, ++i;
			}
		} else {
			if (l1 < r1) {
				r1 -= l1;
				l += l1, r -= l1;
				l1 = 0;
				++i;
			} else if (l1 > r1) {
				l1 -= r1;
				l += r1, r -= r1;
				r1 = 0;
				--j;
			} else {
				l1 -= r1;
				l += r1, r -= r1;
				r1 = 0;
				--j, ++i;
			}
		}

	}
	printf("%lld", ans);
	return 0;
}

/*
5
4 a
4 b
3 c
7 a
2 b
*/