#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string q, w, e, r;
	cin >> q >> w >> e >> r;
	char a = w[0], s = w[1], z = w[2], d = r[0], f = r[1], x = r[2];
	if (q == e) {
		cout << '1';
	} else {
		cout << "0000";
		return 0;
	}
	if (f == s && d == a) {
		cout << '1';
	} else {
		cout << "000";
		return 0;
	}
	if (z == 'A' && x == 'B') {
		cout << '1';
	} else if (z == 'A' && z == 'C') {
		cout << '1';
	} else if (z == 'B' && z == 'C') {
		cout << '1';
	} else if (z == 'D' && z == 'F') {
		cout << '1';
	} else {
		cout << "00";
		return 0;
	}
	if (z + 1 == x) {
		if (z != 'C') {
			cout << '1';
		} else {
			cout << '0';
		}

	} else if (z - 1 == x) {
		if (z != 'D') {
			cout << '1';
		} else {
			cout << '0';
		}
	} else {
		cout << '0';
	}

	return 0;
}
