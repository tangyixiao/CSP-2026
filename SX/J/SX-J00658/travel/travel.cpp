#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2, sb;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;

	if (c1 == c2) {
		sb += '1';
	} else {
		sb += '0';
	}


	if (sb[0] == '1') {
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			sb += '1';
		} else {
			sb += '0';
		}
	} else {
		sb += '0';
	}


	if (sb[0] == '1' && sb[1] == '1') {
		if (((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C'))
		        || ((s1[2] == 'F' || s1[2] == 'D') && (s2[2] == 'F' || s2[2] == 'D'))) {
			sb += '1';
		} else {
			sb += '0';
		}
	} else {
		sb += '0';
	}


	if (sb[0] == '1' && sb[1] == '1' && sb[2] == '1') {
		int a = s1[2];
		int b = s2[2];
		if (abs(a - b) == 1) {
			sb += '1';
		} else {
			sb += '0';
		}
	} else {
		sb += '0';
	}


	cout << sb;
	return 0;
}