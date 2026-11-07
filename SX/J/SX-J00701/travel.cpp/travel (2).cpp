#include <bits/stdc++.h>
using namespace std;

int main() {
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
		int a = 0, b = 0;
		for (int i = 0; i <= 1; i++) {
			a += s1[i] - '0';
			b += s2[i] - '0';
		}
		if (a == b) {
			cout << '1';
			if ((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') || (s1[2] == 'D'
			        || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F')) {
				cout << '1';
				if ((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F')) {
					cout << '1';
				} else if ((s1[2] == 'A' || s1[2] == 'C' ) && (s2[2] == 'B')) {
					cout << '1';
				} else if ((s1[2] == 'B' ) && (s2[2] == 'A' || s2[2] == 'C')) {
					cout << '1';
				} else {
					cout << '0';
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
