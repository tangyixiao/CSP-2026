#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1, c2;
	string s1[5], s2[5];
	cin >> c1 >> c2 ;
	cin >> s1[5] >> s2[5];
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0";
	}

	if (s1[0] == s2[0] || s1[1] == s2[1]) {
		cout << "1";
	} else if (s1[5] == s2[5]) {
		cout << "0";
	} else if (s1[0] != s2[0] || s1[1] != s2[1] && s1[0] == s2[0] || s1[1] != s2[1] && s1[0] != s2[0] || s1[1] == s2[1]) {
		cout << "0";
	}

	if (s1[2] == 'A' && 'B' && 'C' || s2[2] == 'A' && 'B' && 'C' ) {
		cout << "1";
	} else if (s1[2] == 'D' && 'F' || s2[2] == 'D' && 'F') {
		cout << "1";
	} else if (s1[2] == s2[2]) {
		cout << "0";
	} else if (s1[2] != 'A' && 'B' && 'C' || s2[2] != 'A' && 'B' && 'C' || s1[2] != 'D' && 'F' || s2[2] != 'D' && 'F') {
		cout << "0";
	}

	if (s1[2] == 'A' && 'B' && 'C' || s1[2] == s2[1] - 1 && +1) {
		cout << "1";
	} else if (s1[2] == 'D' && 'F' || s1[2] == s2[1] - 1 && +1) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}
