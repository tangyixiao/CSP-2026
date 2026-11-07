#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c, s, c2, s2;
	cin >> c >> s >> c2 >> s2;
	if (c != c2) {
		cout << "0000";
		return 0;
	} else {
		cout << 1;
		if (s.substr(0, 2) != s2.substr(0, 2)) {
			cout << "000";
			return 0;
		} else {
			cout << 1;
			if ((s[2] >= 'A' && s[2] <= 'C' && s2[2] >= 'A' && s2[2] <= 'C') || (s[2] >= 'D' && s[2] <= 'F' && s2[2] >= 'D'
			        && s2[2] <= 'F')) {
				cout << 1;
				if (s[2] >= 'A' && s[2] <= 'C') {
					if (abs(int(s[2] - s2[2])) == 1) {
						cout << 1;
					} else {
						cout << 0;
					}
				} else {
					if (abs(int(s2[2] - s[2])) == 2) {
						cout << 1;
					} else {
						cout << 0;
					}
				}

			} else {
				cout << "00";
			}
		}

	}

	return 0;
}
