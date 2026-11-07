#include <bits/stdc++.h>
using namespace std;
string ca, cb;
char sa[13], sb[13], x, y;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> ca >> sa >> cb >> sb;
	if (ca == cb)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	if (sa[0] == sb[0] && sa[1] == sb[1])
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if (sa[2] < sb[2]) {
		x = sa[2];
		y = sb[2];
	} else {
		x = sb[2];
		y = sa[2];
	}
	if ((x == 'A' && y == 'B') || (x == 'B' && y == 'C') || (x == 'D' && y == 'F'))
		cout << 11;
	else {
		if (x == 'A' && y == 'C')
			cout << 10;
		else
			cout << "00";
	}
	return 0;
}