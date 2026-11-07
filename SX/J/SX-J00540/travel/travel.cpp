#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
string s1, s2, c1, c2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 1; i <= 1; i++) {
		if (c1 != c2) {
			cout << "0000";
			break;
		} else if (c1 == c2) {
			cout << "1";
		}
		if (s1[1] == s2[1]) {
			cout << "1";
		} else {
			cout << "000";
			break;
		}
		if (((s1[2] == 'A' && (s2[2] == 'B' || s2[2] == 'C')) || (s1[2] == 'B' && (s2[2] == 'A' || s2[2] == 'C'))
		        || (s1[2] == 'C' && (s2[2] == 'B' || s2[2] == 'A')) || (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F'
		                && s2[2] == 'D'))) {
			cout << "1";
		} else {
			cout << "00";
			break;
		}
		if ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'A') || (s1[2] == 'B' && s2[2] == 'C') || (s1[2] == 'C'
		        && s2[2] == 'B') || (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')) {
			cout << "1";
		} else {
			cout << "0";
		}
	}
	return 0;
}
