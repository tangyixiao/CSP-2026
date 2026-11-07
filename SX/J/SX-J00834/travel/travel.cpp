#include <bits/stdc++.h>
using namespace std;
string c, d, e, f;

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c >> d >> e >> f;
	if (c == e) {
		cout << 1;
		char n1 = d[0];
		char n2 = d[1];
		char m1 = f[0];
		char m2 = f[1];
		if (n1 == m1 and n2 == m2) {
			cout << 1;
			if (d[2] >= 'D' and d[2] >= 'D') {
				cout << 11;
			} else if (d[2] < 'D' and f[2] < 'D') {
				cout << 1;
				if (int(abs(d[2] - f[2])) == 1) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}
