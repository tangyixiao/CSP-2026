#include <bits/stdc++.h>
using namespace std;
string c;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	getline(cin, c);
	if (c[1] == c[8] && c[0] == c[7]) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (c[3] == c[10] && c[4] == c[11]) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	if (c[5] >= 'D' && c[12] <= 'C' || c[12] >= 'D' && c[5] <= 'C') {
		cout << "00";
		return 0;
	} else {
		cout << "1";
	}
	if (c[5] == c[12] + 1 || c[12] == c[5] + 1) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}
