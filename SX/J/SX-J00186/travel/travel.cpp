#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
		if ((s1[0] - '0') * 10 + (s1[1] - '0') == (s2[0] - '0') * 10 + (s2[1] - '0')) {
			cout << "1";
			if ((s1[2] <= 'c' and s2[2] <= 'c') or (s1[2] > 'c' and s2[2] > 'c')) {
				cout << "1";
				if (s1[2] - '0' + 1 == s2[2] - '0' or s1[2] - '0' == s2[2] - '0' + 1) {
					cout << "1";
				} else {
					cout << "0";
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
