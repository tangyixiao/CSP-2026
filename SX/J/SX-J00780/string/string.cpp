#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, q = 0, w = 0;
	long long a[1000];
	cin >> n;
	char b[1000];
	string c;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		q += a[i];
	}
	for (int i = 0; i < n; i++) {
		w = 0;
		if (q % 2 == 0) {
			for (int j = 0; j < q / 2; j++) {
				c += b[j];
			}
			for (int j = 0; j < q / 2; j++) {
				if (c[j] != b[i + q / 2]) {
					w++;
				} else {

				}
			}

		} else {
			for (int j = 0; j < (q - 1) / 2; j++) {
				c += b[j];
			}
			for (int j = 0; j < (q - 1) / 2; j++) {
				if (c[j] != b[i + (q - 1) / 2 + 1]) {
					w++;
				} else {

				}
			}
		}
	}
	cout << w ;
	return 0;
}