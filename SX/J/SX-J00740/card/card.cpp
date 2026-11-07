#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int a[500010], b[300010], c[500010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> k;
		a[i] = k;
	}
	for (int i = 1; i <= n; i++) {
		while (c[i]) {
			if (c[i] == a[i]) {
				for (int j = i;; j++) {
					if (c[j] == 0)
						break;
					c[j] = 0;
				}
			}
		}
		c[i] = a[i];
		b[c[i]]++;
	}
	int x = 0;
	while (b[x]) {
		cout << b[x];
		x++;
	}
	return 0;
}
