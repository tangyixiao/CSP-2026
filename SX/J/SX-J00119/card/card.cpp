#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
ll  n, m, ci, w;
ll b[2000000], a[2000000], c[2000000];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int k = 1; k <= n; k++) {
		ci = 0;
		for (int i = k; i <= n; i++) {
			bool f = 0;
			for (int j = 1; j <= ci; j++) {
				if (c[i] == a[i]) {
					f = 1;
					w = j;
					break;
				}
			}
			if (f == 0) {
				ci++;
				c[ci] = a[i];
			} else {
				ci = w;
				c[ci] = a[i];
			}
		}
		for (int i = 1; i <= ci; i++) {
			b[c[i]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		if (b[i] > n) {
			cout << n << " ";
			continue;
		}
		cout << b[i] << " ";
	}
	return 0;
}
