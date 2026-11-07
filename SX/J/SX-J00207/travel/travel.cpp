#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> c >> b >> d;
	int aa = a[0] * 10 + a[1], bb = b[0] * 10 + b[1], cc = c[0] * 10 + c[1], dd = d[0] * 10 + d[1], e = c[2] - 'C',
	    f = d[2] - 'C';
	if (aa == bb) {
		cout << 1;
		if (cc == dd) {
			cout << 1;
			if ((e <= 0 && f <= 0) || (e > 0 && f > 0)) {
				cout << 1;
				if (e - f == 1 || e - f == -1) {
					cout << 1;
				} else {
					cout << "0";
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
