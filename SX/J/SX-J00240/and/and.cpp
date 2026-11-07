#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int a[N], b[N], c[N];
int n, m;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		a[i] /= 2;
		cin >> a[i];
		b[i] = a[i] % 2;
		c[i] = a[i] % 2;
		if (b[i] != c[i]) {
			if (b[i] == 0) {
				b[i] = 1;
			} else {
				b[i] = 0;
			}
		}
	}
	int x = 1, sum = 0;
	for (int i = 1; i <= n; i++) {
		while (b[i]) {
			int g = b[i] % 10;
			b[i] /= 10;
			sum += g * x;
			x *= 2;
		}
	}
	cout << sum;
	return 0;
}