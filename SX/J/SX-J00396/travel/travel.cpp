#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	int s = (b[0] - '0') * 10 + b[1] - '0';
	int z = (d[0] - '0') * 10 + d[1] - '0';
	if (s == z) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	int x = b[2] - 'A';
	int y = d[2] - 'A';
	if ((x == 3 && y == 5) || (x == 5 && y == 3)) {
		cout << "11";
		return 0;
	}
	if ((x < y && x >= 0 && y <= 2) || (x > y && x <= 2 && y >= 0)) {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if ((x == 0 && y == 1) || (x == 1 && y == 2) || (y == 0 && x == 1) || (y == 1 && x == 2)) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}