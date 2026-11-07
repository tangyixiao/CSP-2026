#include<bits/stdc++.h>
using namespace std;
string a1, a2, b1, b2;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> a2 >> b1 >> b2;
	bool ff = 0;
	if (a1 == b1) {
		cout << 1;
		ff = 1;
	} else {
		cout << 0;
	}
	bool f = 0;
	if (ff && a2[0] == b2[0] && a2[1] == b2[1]) {
		cout << 1;
		f = 1;
	} else {
		cout << 0;
	}
	bool f2 = 0;
	if (!f || (a2[2] == 'C' && b2[2] == 'D') || (a2[2] == 'D' && b2[2] == 'C')) {
		cout << 0;
	} else {
		cout << 1;
		f2 = 1;
	}
	if (f2 && f && (abs(a2[2] - b2[2]) == 1 || (a2[2] == 'D' && b2[2] == 'F') || (a2[2] == 'F' && b2[2] == 'D'))) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}