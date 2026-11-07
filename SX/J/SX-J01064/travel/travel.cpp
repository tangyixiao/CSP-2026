#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, seat1, seat2;
	cin >> c1 >> seat1 >> c2 >> seat2;
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (seat1.substr(0, 2) == seat2.substr(0, 2)) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	char s1 = seat1[seat1.size() - 1];
	char s2 = seat2[seat2.size() - 1];
	if ((s1 <= 'C' && s2 <= 'C') || (s1 >= 'D' && s2 >= 'D')) {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if (abs(s1 - s2) == 1) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}
