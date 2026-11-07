#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2;
int n1, n2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 0; i <= 1; i++) {
		n1 *= 10;
		n1 += s1[i] - '0';
	}
	for (int i = 0; i <= 1; i++) {
		n2 *= 10;
		n2 += s2[i] - '0';
	}
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (n1 == n2) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	if (((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F') ) || ((s1[2] == 'A' || s1[2] == 'B'
	        || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') ) ) {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if (s1[2] + 1 == s2[2] || s1[2] - 1 == s2[2]) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}
