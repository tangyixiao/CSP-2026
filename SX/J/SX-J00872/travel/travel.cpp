#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "r", stdout);
	int a, b;
	string c, d;
	cin >> a >> c >> b >> d;
	if (a == b) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	if (c[0] == d[0] && c[1] == d[1]) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if (c[2] == 'A' && d[2] == 'B') {
		cout << 11;
	}
	if (c[2] == 'B' && d[2] == 'A') {
		cout << 11;
	}
	if (c[2] == 'C' && d[2] == 'A') {
		cout << 10;
	}
	if (c[2] == 'A' && d[2] == 'C') {
		cout << 10;
	}
	if (c[2] == 'B' && d[2] == 'C') {
		cout << 11;
	}
	if (c[2] == 'C' && d[2] == 'B') {
		cout << 11;
	}
	if (c[2] == 'F' && d[2] == 'D') {
		cout << 11;
	}
	if (c[2] == 'D' && d[2] == 'F') {
		cout << 11;
	}
	if (c[2] == 'A' && d[2] == 'F') {
		cout << "00";
	}
	if (c[2] == 'F' && d[2] == 'A') {
		cout << "00";
	}
	if (c[2] == 'B' && d[2] == 'F') {
		cout << "00";
	}
	if (c[2] == 'F' && d[2] == 'B') {
		cout << "00";
	}
	if (c[2] == 'F' && d[2] == 'C') {
		cout << "00";
	}
	if (c[2] == 'C' && d[2] == 'F') {
		cout << "00";
	}
	if (c[2] == 'D' && d[2] == 'A') {
		cout << "00";
	}
	if (c[2] == 'A' && d[2] == 'D') {
		cout << "00";
	}
	if (c[2] == 'D' && d[2] == 'B') {
		cout << "00";
	}
	if (c[2] == 'B' && d[2] == 'D') {
		cout << "00";
	}
	if (c[2] == 'D' && d[2] == 'C') {
		cout << "00";
	}
	if (c[2] == 'C' && d[2] == 'D') {
		cout << "00";
	}

}
