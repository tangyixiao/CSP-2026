#include <bits/stdc++.h>
using namespace std;
string c1, c2, c3, c4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> c2 >> c3 >> c4;
	if (c1 == c3) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (c2[0] == c4[0] && c2[1] == c4[1]) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	if (c2[2] == 'A' && c4[2] == 'B') {
		cout << "1";
	} else if (c2[2] == 'A' && c4[2] == 'B') {
		cout << "1";
	} else if (c2[2] == 'B' && c4[2] == 'A') {
		cout << "1";
	} else if (c2[2] == 'B' && c4[2] == 'C') {
		cout << "1";
	} else if (c2[2] == 'C' && c4[2] == 'A') {
		cout << "1";
	} else if (c2[2] == 'C' && c4[2] == 'B') {
		cout << "1";
	} else if (c2[2] == 'D' && c4[2] == 'F') {
		cout << "1";
	} else if (c2[2] == 'F' && c4[2] == 'D') {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if (c2[2] - '0' + 1 == c4[2] - '0' || c2[2] - '0' - 1 == c4[2] - '0') {
		cout << "1";
	} else {
		cout << "0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}