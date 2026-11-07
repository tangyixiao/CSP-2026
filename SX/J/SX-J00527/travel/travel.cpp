#include <bits/stdc++.h>
using namespace std;
string num;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	bool a = true;
	string r1, r2, x1, x2;
	cin >> r1 >> r2 >> x1 >> x2;
	char r3 = r2[2], x3 = x2[2];
	int r = 0, x = 0;
	if ((r3 == 'A' || r3 == 'B' || r3 == 'C') && (x3 == 'A' || x3 == 'B' || x3 == 'C')) {
		r = 1;
		x = 1;
	} else if ((r3 == 'A' || r3 == 'B' || r3 == 'C') && (x3 == 'D' || x3 == 'F')) {
		r = 1;
		x = 2;
	} else if ((x3 == 'A' || x3 == 'B' || x3 == 'C') && (r3 == 'D' || r3 == 'F')) {
		r = 2;
		x = 1;
	} else {
		x = 2;
		r = 2;
	}
	//同一个车厢
	if (r1 == x1) {
		num += "1";
	} else {
		num += "0";
		a = 0;
	}
	//同一排
	if (a == 1 && r2[0] == x2[0] && r2[1] == x2[1]) {
		num += "1";
	} else {
		num += "0";
		a = 0;
	}
	//相邻座位
	if (a == 1 && ((r == 1 && x == 1) || (r == 2 && x == 2))) {
		num += "1";
	} else if ((r3 == 'C' && x3 == 'D') || (r3 == 'D' && x3 == 'C')) {
		num += "0";
		a = 0;
	} else {
		num += "0";
		a = 0;
	}
	if (a == 1 && x == 2 && r == 2) {
		num += "1";
	} else if (a == 1 && (r == 1 && x == 1) && (r3 == 'B' || x3 == 'B')) {
		num += "1";
	} else if (r == 1 && x == 1 && (r3 == 'A' || r3 == 'C') && (x3 == 'A' || x3 == 'C')) {
		num += "0";
	} else {
		num += "0";
	}
	cout << num;
	return 0;
}