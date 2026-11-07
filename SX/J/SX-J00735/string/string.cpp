#include <bits/stdc++.h>
using namespace std;
long long i, n, m, k, a[200000];
char c1, c2, b[200000];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	for (i = n - 1; i >= n / 2; i--) {
		if ((b[m] == b[i])) {
			if (a[m] != a[i]) {
				k += a[m] - a[i];
			}
		} else {
			k += a[m];
		}
		m++;
	}
	cout << k;
	return 0;
}
