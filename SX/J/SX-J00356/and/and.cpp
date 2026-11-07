#include <bits/stdc++.h>
using namespace std;
int a[200000];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, qaz = 0, wsx;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == n) {
		qaz = 1;
		for (int i = 1; i <= n; i++) {
			qaz &= a[i];
		}
		cout << qaz;
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			qaz = max(a[i], a[i + 1]);
		}
		cout << qaz;
	} else if (m == n - 1) {
		for (int i = 1; i <= n; i++) {
			wsx = 1;
			for (int j = 1; j < i; i++) {
				wsx &= j;
			}
			for (int s = i + 1; s < n; s++) {
				wsx &= s;
			}
			if (wsx > qaz)
				qaz = wsx;
		}
		cout << wsx;
	} else if (m == 2) {
		for (int  i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				if (i & j > qaz) {
					qaz == i &j;
				}
			}
		}
		cout << qaz;
	}
	return 0;
}