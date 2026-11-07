#include <bits/stdc++.h>
using namespace std;

long long n, m, a[1100000], l = INT_MIN, c;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m != n - 1) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				c = a[i] & a[j];
				l = max(l, c);
			}
		}
		cout << l;
		return 0;
	} else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (c == 0) {
					c = a[j];
				}
				if (j != i && c != a[j]) {
					c = c &a[j];
				}
			}
			l = max(l, c);
		}
		cout << l;
		return 0;
	}
	return 0;
}
