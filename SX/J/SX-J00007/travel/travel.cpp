#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	int p1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	int p2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	char cc1 = s1[2], cc2 = s2[2];
	if (p1 == p2) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if (cc1 == 'A' || cc1 == 'B' || cc1 == 'C') {
		if (cc2 == 'D' || cc2 == 'F') {
			cout << "00";
			return 0;
		} else
			cout << 1;
	} else if (cc1 == 'D' || cc1 == 'F') {
		if (cc2 == 'A' || cc2 == 'B' || cc2 == 'C') {
			cout << "00";
			return 0;
		} else
			cout << 1;
	}
	if (cc1 + 1 == cc2 || cc1 - 1 == cc2)
		cout << 1;
	else {
		if (cc1 == 'D' && cc2 == 'F' || cc1 == 'F' && cc2 == 'D') {
			cout << 1;
		} else
			cout << 0;
	}
	return 0;
}