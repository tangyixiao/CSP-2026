#include <bits/stdc++.h>
using namespace std;

string Cr, Sr, Cx, Sx;

bool Calc (string a, string b) {
	char x = a[2], y = b[2];

	if (x == 'A' && (y == 'B' || y == 'C')) {
		return true;
	}
	if (x == 'B' && (y == 'A' || y == 'C')) {
		return true;
	}
	if (x == 'C' && (y == 'B' || y == 'A')) {
		return true;
	}
	if (y == 'A' && (x == 'B' || x == 'C')) {
		return true;
	}
	if (y == 'B' && (x == 'A' || x == 'C')) {
		return true;
	}
	if (y == 'C' && (x == 'B' || x == 'A')) {
		return true;
	}
	if (x == 'D' && y == 'F' || x == 'F' && y == 'D') {
		return true;
	}

	return false;
}
int main () {

	freopen ("travel.in","r", stdin);
	freopen ("travel.out","w",stdout);

	ios::sync_with_stdio (0);
	cin.tie (0);
	cout.tie (0);

	cin >> Cr >> Sr >> Cx >> Sx;

	if (Cr == Cx) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}

	if (Sr[0] == Sx[0] && Sr[1] == Sx[1]) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}

	if (Calc (Sr, Sx)) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}

	if (abs (Sr[2]-Sx[2]) == 1) {
		cout << 1;
	} else {
		cout << 0;
	}

	return 0;
}
