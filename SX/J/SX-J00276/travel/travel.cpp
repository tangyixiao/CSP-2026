#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b;
	string x, r;
	bool flag = 0;
	cin >> a >> x >> b >> r;
	if (a == b) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	int xp1, rp1, xp2, rp2;
	xp1 = x[0];
	rp1 = r[0];
	if (xp1 == rp1) {
		flag = 1;
	}
	xp2 = x[1];
	rp2 = r[1];
	if (xp2 == rp2 && flag == 1) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	int y, z;
	y = x[2];
	z = r[2];

	if (x[2] == 'A' || x[2] == 'B' || x[2] == 'C') {
		if (r[2] == 'D' || r[2] == 'E') {
			cout << "00";
			return 0;
		}
	}
	if (x[2] == 'D' || x[2] == 'E') {
		if (r[2] == 'A' || r[2] == 'B' || r[2] == 'C') {
			cout << "00";
			return 0;
		}
	} else {
		cout << "1";
	}
	if ((x[2] == 'A' && r[2] == 'C') || (x[2] == 'C' && r[2] == 'A')) {
		cout << "0";
		return 0;
	}
	if ((z - y) == 1 || (z - y) == -1) {
		cout << "1";
	}
	return 0;
}
