#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;
long long cs1, cs2, cs3, cs4, cs5, cs6;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	cs1 = s1[0] - '0';
	cs2 = s1[1] - '0';
	cs3 = s2[0] - '0';
	cs4 = s2[1] - '0';
	cs5 = s1[2];
	cs6 = s2[2];
	if (cs1 == cs3 && cs2 == cs4) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if (cs5 != cs6) {
		if (cs5 == 65 || cs5 == 66 || cs5 == 67) {
			if (cs6 == 65 || cs6 == 67 || cs6 == 66) {
				cout << 1;
			} else {
				cout << "00";
				return 0;
			}
		} else if (cs5 == 68 || cs5 == 69) {
			if (cs6 == 68 || cs6 == 69) {
				cout << 1;
			} else {
				cout << "00";
				return 0;
			}
		} else {
			cout << "00";
			return 0;
		}
	} else {
		cout << "00";
		return 0;
	}
	if (cs5 + 1 == cs6 || cs5 - 1 == cs6) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
