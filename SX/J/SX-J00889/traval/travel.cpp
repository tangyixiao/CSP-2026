#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (s1[3] == s2[3] || s1[3] == 'A' || 'B' || 'C' || 'D' || 'F' && s2[3] == 'A' || 'B' || 'C' || 'D' || 'F') {
		if (s1[3] == s2[3] && s1[1] == s2[1] || s1[1] * 10 + s1[2] == s2[1] * 10 + s2[2]) {
			cout << "1";
		} else {
			cout << "000";
			return 0;
		}

	} else {
		cout << "000";
		return 0;
	}
	if (((s1[2] == 'A' || 'B' || 'C') && (s2[2] == 'A' || 'B' || 'C' ) ) || ((s1[2] == 'D' || 'F') && (s2[2] == 'D' || 'F'))
	        || ((s1[3] == 'A' || 'B' || 'C') && (s2[3] == 'A' || 'B' || 'C')) || ((s1[3] == 'D' || 'F') && (s2[3] == 'D' || 'F'))) {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'A') || (s1[2] == 'B' && s2[2] == 'C') || (s1[2] == 'C'
	        && s2[2] == 'B')
	        || (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D') || (s1[3] == 'A' && s2[3] == 'B') ||  (s1[3] == 'B'
	                && s2[3] == 'A') ||  (s1[3] == 'B' && s2[3] ==  'C')  ||  (s1[3] == 'C' && s2[3] == 'B')  ||  (s1[3] == 'D'
	                        && s2[3] == 'F') ||  (s1[3] == 'F'
	                                && s2[3] == 'D')    ) {
		cout << "1";
	} else {
		cout << "0";
		return 0;
	}
	return 0;
}
