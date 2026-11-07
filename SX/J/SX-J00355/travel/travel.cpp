#include <bits/stdc++.h>
using namespace std;
string x, x2, y, y2;

bool check() {
	char a = x2[2], b = y2[2];
	if (a >= 'A' && a <= 'C' && b >= 'A' && b <= 'C') {
		return 1;
	} else if ((a == 'D' && b == 'F') || (a == 'F' && b == 'D')) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> x >> x2 >> y >> y2;
	bool f = 0;
	if (x == y) {
		f = 1;
		cout << 1;
	} else {
		cout << 0;
	}
	bool f2 = 0;
	if (f == 1) {
		if (x2[0] == y2[0] && x2[1] == y2[1]) {
			f2 = 1;
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}

	bool f3 = 0;
	if (f2 == 1) {
		if ((x2[0] == y2[0] && x2[1] == y2[1]) && check() == 1) {
			f3 = 1;
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	if (x2[2] == 'F') {
		x2[2] == 'E';
	}
	if (y2[2] == 'F') {
		y2[2] == 'E';
	}

	if (f3 == 1) {
		if (abs(x2[2] - y2[2]) == 1) {
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	return 0;
}
