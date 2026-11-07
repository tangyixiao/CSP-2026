#include <bits/stdc++.h>
using namespace std;
int a = 0, b = 0, p = 1, ql, ml;
string q, m, x, y, c1, c2;
bool f = 1;

int h[10] = {-1, -1, -1, 0, 0, 1, 1, 1};
int l[10] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> x >> c2 >> y;
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	for (int i = 1; i < x.size(); i--) {
		a = a + x[i] * p;
		b = b + y[i] * p;
		p *= 10;
	}
	if (a == b && f == 1) {
		cout << "1";
	} else {
		cout << "0";
		f = 0;
	}
	q = x[2];
	m = y[2];
	if (q == "A") {
		ql = 1;
	}
	if (q == "B") {
		ql = 2;
	}
	if (q == "C") {
		ql = 3;
	}
	if (q == "D") {
		ql = 4;
	}
	if (q == "F") {
		ql = 5;
	}
	if (m == "A") {
		ml = 1;
	}
	if (m == "B") {
		ml = 2;
	}
	if (m == "C") {
		ml = 3;
	}
	if (m == "D") {
		ml = 4;
	}
	if (m == "F") {
		ml = 5;
	}
	if (f = 1 && ml <= 3 && ql <= 3 ) {
		cout << "1";
	} else if (f = 1 && ml > 3 && ql > 3 ) {
		cout << "1";
	} else {
		cout << "0";
		f = 0;
	}
	for (int k = 0; k < 8; k++) {
		int xh = a + h[k];
		int xl = ql + l[k];
		if (xh < 1 || xh > 5 || xl < 1 || xl > 18) {
			continue;
		}
		if (xh == b && xl == ml) {
			cout << "1";
			return 0;
		}
	}
	cout << "0";
	return 0;
}
