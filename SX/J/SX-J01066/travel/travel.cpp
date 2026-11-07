#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isXL(char a, char b) {
	if ((a == 'C' && b == 'D') || (a == 'D' && b == 'C'))
		return false;
	if ((abs((int)(a) - (int)(b)) == 1) || ((a == 'D' && b == 'F') || (a == 'F' && b == 'D')))
		return true;
	return false;
}

bool isTC(char a, char b) {
	if ((a == 'A' && b == 'B') || (a == 'B' && b == 'A'))
		return true;
	if ((a == 'A' && b == 'C') || (a == 'C' && b == 'A'))
		return true;
	if ((a == 'B' && b == 'C') || (a == 'C' && b == 'B'))
		return true;
	if ((a == 'D' && b == 'F') || (a == 'F' && b == 'D'))
		return true;
	return false;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string R_train;
	string R_seat;
	string X_train;
	string X_seat;
	cin >> R_train >> R_seat >> X_train >> X_seat;
	string R_pai = R_seat.substr(0, 2);
	string X_pai = X_seat.substr(0, 2);
	char R_ph = R_seat[2], X_ph = X_seat[2];
	if (R_train == X_train) {
		cout << '1';
	} else {
		cout << '0';
	}
	if (R_train == X_train && R_pai == X_pai) {
		cout << '1';
	} else {
		cout << '0';
	}
	if ((R_train == X_train && R_pai == X_pai) && isTC(R_ph, X_ph)) {
		cout << '1';
	} else {
		cout << '0';
	}
	if (((R_train == X_train && R_pai == X_pai) && isTC(R_ph, X_ph)) && isXL(R_ph, X_ph)) {
		cout << '1';
	} else {
		cout << '0';
	}
	return 0;
}
