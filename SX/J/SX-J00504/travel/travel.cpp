#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s[4], c = "ABCDF";
	for (int i = 0; i < 4; i++) {
		cin >> s[i];
	}
	if (s[0] == s[2]) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (s[1][0] + s[1][1] == s[3][0] + s[3][1]) {
		cout << "1";
	} else {
		cout << "0";
	}
	char a = s[1][2], b = s[3][2];
	if ((('A' <= a && a <= 'C') && (b == 'D' || b == 'F')) || ((a == 'D' || a == 'F') && ('A' <= b && b <= 'C'))) {
		cout << "0";
	} else {
		cout << "1";
	}
	int n1, n2;
	for (int i = 0; i < 5; i++) {
		if (c[i] == a) {
			n1 = i;
		}
		if (c[i] == b) {
			n2 = i;
		}
	}
	if (abs(n1 - n2) != 1) {
		cout << "0";
	} else {
		if ((a == 'C' && b == 'D') || (a == 'D' && b == 'C')) {
			cout << "0";
		} else {
			cout << "1";
		}
	}
	return 0;
}