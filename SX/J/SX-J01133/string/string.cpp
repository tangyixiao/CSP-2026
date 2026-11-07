#include <bits/stdc++.h>
using namespace std;
long long zfc[200100];
char zf[200100];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	long long sum = 0, cd = 0;
	for (long long i = 1; i <= n; i++) {
		cin >> zfc[i] >> zf[i];
		cd += zfc[i];
	}
	if (cd % 2 == 0) {
		int q = 1, h = n;
		int qsy = 1, hsy = 1;
		int x1 = zfc[q], x2 = zfc[h];
		while (1) {
			if (qsy > (cd / 2) && hsy > (cd / 2)) {
				cout << sum;
				break;
			}
			if (qsy > x1) {
				x1 += zfc[q + 1];
				q++;
			}
			if (hsy > x2) {
				x2 += zfc[h - 1];
				h--;
			}
			if (zf[q] != zf[h]) {
				sum++;
			}
			qsy++;
			hsy++;
		}
	} else {
		int q = 1, h = n;
		int qsy = 1, hsy = 1;
		int x1 = zfc[q], x2 = zfc[h];
		while (1) {
			if (qsy == ((cd + 1) / 2) && hsy == ((cd + 1) / 2)) {
				cout << sum;
				break;
			}
			if (qsy > x1) {
				x1 += zfc[q + 1];
				q++;
			}
			if (hsy > x2) {
				x2 += zfc[h - 1];
				h--;
			}
			if (zf[q] != zf[h]) {
				sum++;
			}
			qsy++;
			hsy++;
		}
	}
	return 0;
}
