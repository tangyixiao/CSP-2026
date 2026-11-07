#include <bits/stdc++.h>
using namespace std;

int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, max = 0, max1 = 0, b, b1, b2;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 1; i <= n; ++i) {
			if (max < a[i]) {
				max = a[i];
			}
		}
		printf("%d", max);
		return 0;
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (j == i) {
				continue;
			}
			if (max < (a[i]&a[j])) {
				max = (a[i] & a[j]);
				b1 = i;
				b2 = j;
				max1 = max;
			}
		}
	}
	a[b1] = 0;
	a[b2] = 0;
	if (m > 2) {
		for (int i = 1; i <= m - 2; ++i) {
			max = 0;
			for (int j = 1; j <= n; ++j) {
				if (max < (max1 & a[j])) {
					max = (max1 &a[j]);
					b = j;
				}
			}
			a[b] = 0;
			max1 = max;
		}
	}
	max = max1;
	printf("%d", max);
	return 0;
}
