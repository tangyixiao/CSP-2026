#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string r1, r2, s1, s2;
	cin >> r1 >> r2 >> s1 >> s2;
	bool a = true, b = true, c = true, d = true;
	if (r1 == s1) {

	} else {
		a = false;

	}

	if (r2[0] == s2[0] && r2[1] == s2[1] && a == true) {

	} else {
		b = false;

	}
	//cout << endl << b << endl;
	if ((r2[2] == 'D' && s2[2] == 'F') || (s2[2] == 'F' && r2[2] == 'D') || (r2[2] == 'C' && s2[2] == 'B') || (s2[2] == 'C'
	        && r2[2] == 'B') || (r2[2] == 'C' && s2[2] == 'A') || (s2[2] == 'C' && r2[2] == 'A') || (r2[2] == 'B' && s2[2] == 'A')
	        || ((s2[2] == 'B' && r2[2] == 'A' ) &&  (b == 1) ) ) {

	} else  {
		c = false;

	}


	if (abs((s2[2] + '1') - (r2[2] + '1')) == 1 && c == true) {

	} else {
		d = false;

	}
	if (a == 0)
		b = 0;
	if (b == 0)
		c = 0;
	if (c == 0)
		d = 0;
	if (a == true) {
		cout << 1;
	} else {
		cout << 0;
	}

	if (b == true) {
		cout << 1;
	} else {
		cout << 0;
	}

	if (c == true) {
		cout << 1;
	} else {
		cout << 0;
	}

	if (d == true) {
		cout << 1;
	} else {
		cout << 0;
	}


	return 0;
}