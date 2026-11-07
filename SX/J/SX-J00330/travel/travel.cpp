#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2, s;
	cin >> c1 >> s1 >> c2 >> s2;
	char a, b;
	a = s1[2];
	b = s2[2];
	int c, d, f = 0;
	c = (s1[0] - '0') * 10;
	c += s1[1] - '0';
	d = (s2[0] - '0') * 10;
	d += s2[1] - '0';
	if (c1 != c2) {
		cout << "0000";
		return 0;
	} else {
		s += "1";
		if (c == d) {
			s += "1";
			if (a == 'A' || a == 'B' || a == 'C' ) {
				if (b == 'A' || b == 'B' || b == 'C') {
					s += '1';
					f = 1;
				}
			}
			if (a == 'D' || a == 'F') {
				if (b == 'D' || b == 'F') {
					s += '1';
					f = 1;
				}
			}
			if (f == 0) {
				cout << "1100";
				return 0;
			}
			if (abs(a - b) == 1 ) {
				cout << "1111";
			} else {
				cout << "1110";
			}
		} else {
			cout << "1000";
			return 0;
		}
	}

	return 0;
}
