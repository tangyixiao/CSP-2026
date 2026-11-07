#include <bits/stdc++.h>
using namespace std;
long long a[200099];
char b[200099];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long  n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i] >> b[i];
	}
	long long gz = 0;
	long long  aa = 0, bb = n - 1;
	long long  xy = n / 2 + 1;
	for (int i = 1; i <= xy; i++) {
		if (bb != aa) {
			if (b[aa] == b[bb]) {
				if (a[aa] > b[aa]) {
					bb -= 1;
				}
				if (a[aa] < b[aa]) {
					aa += 1;
				}
			}
			if (b[aa] != b[bb]) {
				if (a[aa] > a[bb]) {
					gz += a[aa];
					bb -= 1;
				}
				if (b[aa] < b[bb]) {
					gz += a[aa];
					aa += 1;
				}
			}
		} else {
			break;
		}
	}
	cout << gz;
	return 0;
}
