#include <bits/stdc++.h>
using namespace std;
int a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n, na = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		na = max(na, a[i]);
	}
	if (m == 1) {
		int y = a[1];
		for (int i = 2; i <= n; i++) {
			y = max(y, a[i]);
		}
		printf("%d", y);
		return 0;
	}
	if (m == n) {
		int y = a[1];
		for (int i = 2; i <= n; i++) {
			y &= a[i];
		}
		printf("%d", y);
		return 0;
	}
	if (m == 2) {
		int y = a[1] & a[1];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				y = max(y, a[i] & a[j]);
			}
		}
		printf("%d", y);
		return 0;
	}
	if (na <= 4) {
		int y = a[1] & a[1];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				y = max(y, a[i] & a[j]);
			}
		}
		printf("%d", y);
		return 0;
	}
	return 0;
}
