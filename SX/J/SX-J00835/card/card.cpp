#include <bits/stdc++.h>
using namespace std;
int a[500005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, b1, b2, b3, c1 = 1;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= m; i++) {
		int r;
		cin >> r;
		for (int j = 1; j <= i; j++) {
			if (a[j] == r) {
				for (int z = 1; z <= i; z++) {
					a[z] = 0;
				}
				c1 = 1;
				a[c1] = r;
			}
			a[c1] == r;
			c1++;
		}
		for (int z = 1; z <= i; z++) {
			if (a[c1] == 1)
				b1++;
			if (a[c1] == 2)
				b2++;
			if (a[c1] == 3)
				b3++;
		}
		cout << b1 << b2 << b3;
	}
	return 0;
}