#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
string a1, b1, a2, b2, bol;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> a2 >> b1 >> b2;
	if (a1 == b1) {
		bol += '1';
	} else {
		bol += '0';
		bol += '0';
		bol += '0';
		bol += '0';
		cout << bol;
		return 0;

	}
	if (a2[0] == b2[0] && a2[1] == b2[1]) {
		bol += '1';
		if ((a2[2] == 'A' || a2[2] == 'B' || a2[2] == 'C') && (b2[2] == 'A' || b2[2] == 'B' || b2[2] == 'C')) {
			bol += '1';
		} else if ((a2[2] == 'D' || a2[2] == 'F') && (b2[2] == 'D' || b2[2] == 'F')) {
			bol += '1';
		} else {
			bol += '0';
		}
	} else {
		bol += '0';
		bol += '0';
		bol += '0';
		cout << bol;
		return 0;
	}
	if ((a2[2] == 'F' || a2[2] == 'D') && (b2[2] == 'F' || b2[2] == 'D')) {
		bol += '1';
	} else if ((a2[2] != 'D' && b2[2] != 'D') && (a2[2] - 1 == b2[2] || a2[2] + 1 == b2[2])) {
		bol += '1';
	} else {
		bol += '0';
	}
	cout << bol;
	return 0;
}