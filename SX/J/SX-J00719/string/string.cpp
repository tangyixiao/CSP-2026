#include <bits/stdc++.h>
using namespace std;

struct str {
	long long x;
	char c;
} a[200005];
long long lx1 = 0, lxn = 0;
char lc1, lcn;

long long cf(int i, int n) {
	long long sum = 0;
	if (a[i].c != a[n].c) {
		if (a[i].x == a[n].x)
			sum += a[i].x;
		else if (a[i].x > a[n].x) {
			sum += a[n].x;
			lx1 = a[i].x - a[n].x;
			lc1 = a[i].c;
		} else {
			sum += a[i].x;
			lxn = a[n].x - a[i].x;
			lcn = a[n].c;
		}
	} else {
		if (a[i].x == a[n].x)
			return 0;
		if (a[i].x > a[n].x) {
			lx1 = a[i].x - a[n].x;
			lc1 = a[i].c;
		} else {
			lxn = a[n].x - a[i].x;
			lcn = a[n].c;
		}
	}
	return sum;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld %c", &a[i].x, &a[i].c);
	}
	long long sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (lx1) {
			if (lc1 == a[i].c) {
				a[i].x += lx1;
				sum += cf(i, n - i + 1);
			} else {
				if (lc1 != a[n - i + 1].c)
					sum += lx1;
				a[n - i + 1].x -= lx1;
				sum += cf(i, n - i + 1);
			}
		} else if (lxn) {
			if (lcn == a[n - i + 1].c) {
				a[n - i + 1].x += lxn;
				sum += cf(i, n - i + 1);
			} else {
				if (lcn != a[i].c)
					sum += lxn;
				a[i].x -= lxn;
				sum += cf(i, n - i + 1);
			}
		} else {
			sum += cf(i, n - i + 1);
		}
	}

	if (n % 2) {
		sum += min(max(lx1, lxn), a[(n + 1) / 2].x);
	}

	printf("%lld", sum);
	return 0;
}
