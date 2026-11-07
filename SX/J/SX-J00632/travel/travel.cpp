#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	long long f = 1, s = 0, x = 0;
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	for (int i = 0; i <= 1; i++) {
		if (a[i] != c[i]) {
			f = 0;
			break;
		}
	}
	if (f == 1) {
		for (int i = 0; i <= 1; i++) {
			if (b[i] != d[i]) {
				f = 0;
				break;
			}
		}
		if (f == 1) {
			if (b[2] > d[2]) {
				s = b[2] - d[2];
				if (s >= 3) {
					f = 0;
				}
				if (b[2] == 'D' && d[2] == 'C') {
					f = 0;
				}
			} else if (b[2] < d[2]) {
				s = d[2] - b[2];
				if (s >= 3) {
					f = 0;
				}
				if (b[2] == 'C' && d[2] == 'D'  ) {
					f = 0;
				}
			}
			if (f == 1) {
				if (b[2] > d[2]) {
					x = b[2] - d[2];
					if (x > 1) {
						f = 0;
					}
				} else if (b[2] < d[2]) {
					x = d[2] - b[2];
					if (x > 1) {
						f = 0;
					}
				}
				if (f == 0) {
					cout << "1110";
				} else if (f == 1) {
					cout << "1111";
				}
			} else {
				cout << "1100";
			}
		} else {
			cout << "1000";
		}
	} else {
		cout << "0000";
	}

























	return 0;
}