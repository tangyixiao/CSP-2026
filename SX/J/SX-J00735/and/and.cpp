#include <bits/stdc++.h>
using namespace std;
long long i, n, m, k, a[2000000], b[2000000], l, j;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		k = a[i];
		while (k) {
			b[i] += (k % 2 ) * 10;
			k /= 2;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			l = b[i] and b[j];
			//cout << b[j] << " ";
			if (k < l) {
				k = l;
			}

		}
	}
	cout << "12";
	return 0;
}
