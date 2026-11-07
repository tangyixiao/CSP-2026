#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int a, b1, b2, c, d1, d2;
	a = (c1[0] - '0') * 10 + (c1[1] - '0');
	b1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	b2 = (s1[2] - 'A' + 1);
	c = (c2[0] - '0') * 10 + (c2[1] - '0');
	d1 = (s2[0] - '0') * 10 + (s2[1] - '0');
	d2 = (s2[2] - 'A' + 1);
	if (a == c) {
		cout << "1";
		if (b1 == d1) {
			cout << "1";
			if ((b2 <= 3 && d2 <= 3) || (b2 > 3 && d2 > 3)) {
				cout << "1";
				if ((b2 == 1 && d2 == 2) || (b2 == 2 && d2 == 3) || (b2 == 4 && d2 == 5)) {
					cout << "1";
					return 0;
				} else {
					cout << "0";
					return 0;
				}
			} else {
				cout << "00";
				return 0;
			}
		} else {
			cout << "000";
			return 0;
		}
	} else {
		cout << "0000";
		return 0;
	}
	return 0;
}
