#include <iostream>
using namespace std;

string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if ( c1 != c2 ) {
		cout << "0000";
		return 0;
	}
	cout << 1;
	string x1[2];
	x1[0] = x1[0] + s1[0] + s1[1];
	x1[1] = s1[2];
	string x2[2];
	x2[0] = x2[0] + s2[0] + s2[1];
	x2[1] = s2[2];
	if ( x1[0] != x2[0] ) {
		cout << "000";
		return 0;
	}
	cout << 1;
	if ( x1[1] != "D" && x1[1] != "F" && x2[1] != "D" && x2[1] != "F" )
		cout << 1;
	else if (( x1[1] == "D" && x2[1] == "F" ) || ( x2[1] == "D" && x1[1] == "F" ) ) {
		cout << 1 << 1;
		return 0;
	} else {
		cout << "00";
		return 0;
	}
	if ( x1[1][0] + 1 == x2[1][0] || x2[1][0] + 1 == x1[1][0] )
		cout << 1;
	else
		cout << 0;

	return 0;
}
