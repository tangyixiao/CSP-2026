#include <bits/stdc++.h>
using namespace std;
int c1, c2;
string s1, s2;

int main() {
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2 || c1 == 1 || c1 == 16) {
		cout << "0000";
		return 0;
	} else if (s1[1] != s2[1] || s1[0] != s2[0]) {
		cout << "1000";
		return 0;
	} else {
		if (s1[2] == 'A' && s2[2] != 'B' && s2[2] != 'C') {
			cout << "1100";
			return 0;
		} else if (s1[2] == 'B' && s2[2] != 'A' && s2[2] != 'C') {
			cout << "1100";
			return 0;

		} else if (s1[2] == 'C' && s2[2] != 'B' && s2[2] != 'A') {
			cout << "1100";
			return 0;
		} else if (s1[2] == 'D' && s2[2] != 'F') {
			cout << "1100";
			return 0;
		} else if (s1[2] == 'F' && s2[2] != 'D') {
			cout << "1100";
			return 0;
		} else {
			if (s1[2] == 'A' && s2[2] != 'B') {
				cout << "1110";
				return 0;
			} else if (s1[2] == 'B') {
				if (s2[2] != 'A' || s2[2] != 'C') {
					cout << "1110";
					return 0;
				}
			} else if (s1[2] == 'C' && s2[2] != 'B') {
				cout << "1110";
				return 0;
			} else if (s1[2] == 'D' && s2[2] != 'F') {
				cout << "1110";
				return 0;
			} else if (s1[2] == 'F' && s2[2] != 'D') {
				cout << "1110";
				return 0;
			} else {
				cout << "1111";
			}
		}
	}

	return 0;
}