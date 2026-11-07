#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n;
	int a[20500], x, s[20005][21] = {}, e, cs[21] = {}, num = 0, js = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		x = a[i];
		for (int j = 20; j >= 0; j--) {
			e = 1;
			for (int o = 1; o <= j; o++) {
				e *= 2;
			}
			s[i][j] = x / e;
			x %= e;
		}
	}
	sort(a, a + n);
	for (int i = n - 1; i >= m - 1; i--) {
		for (int j = i - m; j < i; j++) {
			for (int k = 20; k >= 0; k--) {
				if (s[j][k] == 0)
					cs[k] = 1;
			}
		}
		for (int j = 0; j <= 20; j++) {
			if (cs[j] == 0) {
				e = 1;
				for (int o = 1; o <= j; o++) {
					e *= 2;
				}
				js += e;
			}
			cs[j] = 0;
		}
		num = max(num, js);
		js = 0;
	}
	cout << a[n - m];
	return 0;
}