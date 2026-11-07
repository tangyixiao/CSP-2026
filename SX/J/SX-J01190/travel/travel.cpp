#include <bits/stdc++.h>
using namespace std;
int rcar, xcar;
string rseat, xseat;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> rcar >> rseat >> xcar >> xseat;
	if (rcar == xcar)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	if (rseat[0] + rseat[1] == xseat[0] + xseat[1])
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if (rseat[2] == 'A' || rseat[2] == 'B' || rseat[2] == 'C') {
		if (xseat[2] == 'A' || xseat[2] == 'B' || xseat[2] == 'C')
			cout << 1;
		else {
			cout << "00";
			return 0;
		}
	} else {
		if (xseat[2] == 'D' || xseat[2] == 'F')
			cout << 1;
		else {
			cout << "00";
			return 0;
		}
	}
	if (abs(int(xseat[2]) - int(rseat[2])) == 1)
		cout << 1;
	else
		cout << 0;
	return 0;
}
