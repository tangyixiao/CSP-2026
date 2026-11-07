#include <bits/stdc++.h>
using namespace std;

string s1, c1, s2, c2;

int pd(char x) {
	if (x == 'A' || x == 'B' || x == 'C')
		return 1;
	else
		return 2;
}

int pd2(char y) {
	if (y == 'A')
		return 1;
	else if (y == 'B')
		return 2;
	else if (y == 'C')
		return 3;
	else if (y == 'D')
		return 4;
	else if (y == 'E')
		return 5;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> c1 >> s2 >> c2;
	if (s1 == s2) {
		cout << 1;
		if (c1[0] == c2[0] && c1[1] == c2[1]) {
			cout << 1;
			if (pd(c1[2]) == pd(c2[2])) {
				cout << 1;
				if (abs(pd2(c1[2]) - pd2(c2[2])) == 1) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}
