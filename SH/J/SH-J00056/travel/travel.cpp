#include <bits/stdc++.h>
using namespace std;
bool side (char c1, char c2) {
	bool valid = false;
	if ((c1 == 'A' || c1 == 'B' || c1 == 'C') &&
		(c2 == 'A' || c2 == 'B' || c2 == 'C')) {
		valid = true;
	} else if ((c1 == 'D' || c1 == 'F') &&
			   (c2 == 'D' || c2 == 'F')) {
		valid = true;
	} 
	return valid;
}
bool lin (char c1, char c2) {
	if (c1 == 'E' || c1 == 'F') {
		return true;
	} else {
		if ((c1 == 'A' && c2 == 'B') ||
			(c1 == 'B' && c2 == 'C') ||
			(c2 == 'A' && c1 == 'B') ||
			(c1 == 'B' && c1 == 'C')) {
				return true;
		} else {
			return false;
		}
	}
}
int main () {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
	} else {
		cout << '1';
		//
		int t1 = s1[0] * 10 + s1[1];
		int t2 = s2[0] * 10 + s2[1];
		if (t1 != t2) {
			cout << "000";
		} else {
			cout << '1';
			//
			if (!side(s1[2], s2[2])) {
				cout << "00";
			} else {
				cout << '1';
				//
				if (!lin(s1[2], s2[2])) {
					cout << '0';
				} else {
					cout << '1';
				}
			}
		}
	}
	return 0;
} 
