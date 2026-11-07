#include <bits/stdc++.h>
using namespace std;
long long a[1000000005], c[1000000005], x[1000000005];
int n, d = 0, w, z;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		d += a[i];
	}
	for (int i = 1; i <= d; i++) {
		for (int j = 1; j <= a[i]; j++) {
			w++;
			x[w] = c[w];
		}
	}
	for (int i = 1; i <= n / 2; i++) {
		if (x[i] != x[n / 2 - i]) {
			z++;
		}
	}
	cout << z;
	return 0;
}
