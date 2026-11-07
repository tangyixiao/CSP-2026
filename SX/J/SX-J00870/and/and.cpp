#include <bits/stdc++.h>
using namespace std;

long long n, m, d;
long long a[200010], t[10000000];
bool f[200010];
long long b[200010];


void o(long long x, long long c) {
	if (c == 0) {
		d = max(d, x);
		return ;
	}
	for (int j = 1; j <= n; j++) {
		if (f[j] == 0) {
			f[j] = 1;
			long long mj = x &a[j];
			o(mj, c - 1);
			f[j] = 0;
		}
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%lld %lld", &n, & m);
	for (int i = 1; i <= n; i++) {
		scanf("%lld", & a[i]);
		t[a[i]]++;
		if (t[a[i]] >= m && a[i] > d) {
			d = a[i];
		}
	}
	for (int i = 1; i <= n; i++) {
		f[i] = 1;
		o(a[i], m - 1);
		f[i] = 0;
	}
	printf("%lld", d);
	return 0;
}

