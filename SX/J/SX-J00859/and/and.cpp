#include <bits/stdc++.h>
using namespace std;
int n, m, a[200010], b[200010], c[200010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
//		b[i] = a[i] % 2;
//		while (a[i] > 1 ) {
//			a[i] /= 2;
//			b[i] = b[i] * 10 + a[i] % 2;
//			if (b[i] == 0) {
//				b[i] = 1;
//				b[i] = b[i] * 10 + a[i] % 2;
//			}
//			b[i] *= 10;
//		}
	}
	cout << a[n];
	return 0;
}