#include <bits/stdc++.h>
using namespace std;
int n, m, b = 1;
int a[1666660], c[1666660], d[1666666];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		c[i] = a[i];
	}
	for (int l = 1; l <= n; l++) {
		for (int i = 1; i < b; i++) {
			c[i] = 0;
		}
		for (int i = b; i <= n; i++) {
			for (int j = b; j < i; j++) {
				if (c[i] == c[j]) {
					for (int k = j; k < i; k++) {
						c[k] = 0;
					}
				}
			}
		}
		for (int i = 1; i <= n; i++) {
			d[c[i]]++;
			c[i] = a[i];
		}
		b++;
	}
	for (int i = 1; i <= m; i++) {
		cout << d[i] << " ";
	}
	return 0;
}
