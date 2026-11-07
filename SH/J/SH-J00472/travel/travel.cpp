#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, c2, s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string ans = "";
	if (c1 != c2) {
		cout << "0000" << endl;return 0;
	}
	string s1b = s1.substr(0, 2), s2b = s2.substr(0, 2);
	if (s1b != s2b) {
		cout << "1000" << endl;return 0;
	}
	char s1c = s1[2], s2c = s2[2];
	if
		( 
		(('A' <= s1c) && ('C' >= s1c)) && 
		(('A' <= s2c) && ('C' >= s2c)) 
		) {
			if ((s1c - s2c == 1) || (s2c - s1c == 1)){
				cout << "1111" << endl;return 0;
			} else {
				cout << "1110" << endl;return 0;
			}
		}
	if (
		((s1c == 'D') || (s1c == 'F')) &&
		((s2c == 'D') || (s2c == 'F'))
		) {
			cout << "1111" << endl; return 0;
		}
	cout << "1100" << endl; return 0;
	return 0;
} 
