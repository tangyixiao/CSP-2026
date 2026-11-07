#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
string c1, s1, c2, s2;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	}
	cout << "1";

	if (s1[0] != s2[0] || s1[1] != s2[1]) {
		cout << "000";
		return 0;
	}
	cout << "1";
	int s = s1[2], c = s2[2];
	char a = s1[2], b = s2[2];
	if ((a == 'F' && b == 'D') || (b == 'F' && a == 'D')) {
		cout << "1";
	} else if ((a == 'A' && b == 'B' ) || ( b == 'A' && a == 'B')) {
		cout << "1";
	} else if ((a == 'A' && b == 'C' ) || (b == 'A' && a == 'C')) {
		cout << "1";
	} else if ((a == 'B' && b == 'C' ) || (b == 'B' && a == 'C')) {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if (abs(s - c) != 1 || (s1[2] == 'C' && s2[2] == 'D') || (s1[2] == 'D' && s2[2] == 'C')) {
		cout << "0";
		return 0;
	}
	cout << "1";
	return 0;
}
