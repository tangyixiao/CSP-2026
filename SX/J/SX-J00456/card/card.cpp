#include <bits/stdc++.h>
using namespace std;
int a[500001];
int b[500001];
int c[500001];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (c[a[j]] + 1 > 1) {
				for (int x = 1; x <= m; x++) {
					c[x] = 0;
				}
				c[a[j]]++;
			} else {
				c[a[j]]++;
			}
		}
		for (int x = 1; x <= m; x++) {
			if (c[x] > 0) {
				b[x]++;
			}
			c[x] = 0;
		}
	}
	for (int x = 1; x <= m; x++) {
		cout << b[x] << " ";
	}
	return 0;
}
