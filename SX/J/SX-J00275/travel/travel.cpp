#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string s3 = s1.erase(2, 1);
	string s4 = s2.erase(2, 1);
	if (c1 == c2) {
		cout << "1" << endl;
	} else {
		for (int i = 1; i <= 4; i++) {
			cout << "0" << endl;
		}
		return 0;
	}
	if (s3 == s4) {
		cout << "1" << endl;
	} else {
		for (int i = 1; i <= 3; i++) {
			cout << "0" << endl;
		}
		return 0;
	}
	s3 = s1.erase(0, 2);
	s4 = s2.erase(0, 2);
	if ((s3 == "C"  && s4 == "A" ) || (s4 == "C" && s3 == "A")) {
		cout << "1" << endl << "0" << endl;
	} else if ((s3 == "B" && s4 == "A" ) || (s4 == "B" && s3 == "A") || (s3 == "C" && s4 == "B") || (s4 == "C"
	           && s3 == "B") || (s3 == "F" && s4 == "D") || (s4 == "F" && s3 == "D")) {
		cout << "1" << endl << "1" << endl;
	} else {
		cout << "0" << endl << "0" << endl;
	}
	return 0;
}