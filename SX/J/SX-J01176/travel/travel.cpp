#include <bits/stdc++.h>
using namespace std;
string s1, s2, a1, a2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> s2 >> a1 >> a2;
	if (s1 == a1) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (s2[0] == a2[0] && s2[1] == a2[1]) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	if (((s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') && (a2[2] == 'A' || a2[2] == 'B' || a2[2] == 'C'))
	        || ((s2[2] == 'D' || s2[2] == 'F') && (a2[2] == 'D' || a2[2] == 'F'))) {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if ((s2[2] == 'A' && a2[2] == 'B') || (s2[2] == 'B' && (a2[2] == 'A' || a2[2] == 'C')) || (s2[2] == 'c'
	        && a2[2] == 'B') || (s2[2] == 'D' && a2[2] == 'F') || (s2[2] == 'F' && a2[2] == 'D')) {
		cout << "1";
	} else {
		cout << "0";
		return 0;
	}
	return 0;
}
