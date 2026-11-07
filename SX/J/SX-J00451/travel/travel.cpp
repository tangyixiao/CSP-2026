#include <bits/stdc++.h>
using namespace std;
string cr, sr, cx, sx;
bool a = 1;

int main() {
	cin >> cr >> sr >> cx >> sx;
	if (cr == cx) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (sr[0] == sx[0] && sr[1] == sx[1]) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (sr[2] <= 'C' && sx[2] <= 'C') {
		cout << "1";
	} else {
		cout << "0";
	}
	if (sr[2] >= 'E' && sr[2] <= 'F') {
		a = 1;
	} else {
		a = 0;
	}
	if (sx[2] >= 'E' && sx[2] <= 'F') {
		a = 1;
	} else {
		a = 0;
	}
	if (a == 1) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (sr[2] - sx[2] == 1 || sx[2] - sr[2] == 1) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}