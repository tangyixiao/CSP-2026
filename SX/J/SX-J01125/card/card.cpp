#include <bits/stdc++.h>
using namespace std ;
long long n, m, a[300010], l = 0, s = 0, b[500010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}
	for (int i = 1; i <= n; i++) {

		for (int j = i; j <= n; j++) {
			for (int k = 1; k <= l; k++)
				if (a[k] = b[j]) {
					l = k - 1;
					for (int h = k; h <= l; h++) {
						a[h] = 0;
					}
				}
			l++;
			a[l] = b[j];
		}
		if (l == i) {
			s++;
		}
	}
	cout << s;
	return 0;
}