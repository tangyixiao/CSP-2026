#include <bits/stdc++.h>
using namespace std;
string s1, s2, s3, s4;
string a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> s1 >> s2 >> s3 >> s4;
	if (s1 == s3) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}

	if (s2[0] == s4[0] && s2[1] == s4[1]) {
		cout << "1";
	} else {
		cout << "000" ;
		return 0;
	}
	a = s2[2];
	b = s4[2];


	if ((a == "A" && b == "B") || ( a == "B" && b == "A") || ( a == "A" && b == "C") || (a == "C" && b == "A") || (a == "B"
	        && b == "C" ) | (a == "C" && b == "B" ) || ( a == "F" && b == "D" ) || ( a == "D" && b == "F") ) {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if ((a == "A" && b == "B") || ( a == "B" && b == "A" ) || ( a == "B" && b == "C") || (a == "C" && b == "B" )
	        || ( a == "F" && b == "D") || (a == "D" && b == "F")) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}
