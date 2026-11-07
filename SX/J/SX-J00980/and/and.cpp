#include <bits/stdc++.h>
using namespace std;
const int E = 2e5+100;
int a[E], x[E], y[E];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m, mx = LLONG_MIN, o = 1, g = 1, sum = 0, pl = 1, k;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (m == 1) {
		for (int i = 1; i <= n; i++) {
			if (mx < a[i])
				mx = a[i];
		}
		cout << mx;
		return 0;
	} else {
		for (int i = 1; i <= n; i++) {
			k = a[i];
			while (k != 0) {
				x[o] = k % 2;
				k = k / 2;
				o++;
			}
			for (int j = i + 1; j <= n; j++) {
				k = a[j];
				while (k != 0) {
					y[g] = k % 2;
					k = k / 2;
					g++;
				}
				for (int i = o; i >= 1; i--) {
					for (int j = g; j >= 1; j--) {
						if (x[i] == y[j]) {
							for (int p = 1; p <= i; p++) {
								pl = pl * 10;
							}
							sum = sum + x[i] * pl;
						}
					}
				}
			}
		}
	}
	return 0;
}
//*-*这是什么构思题？