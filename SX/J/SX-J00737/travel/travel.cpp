#include <bits/stdc++.h>
using namespace std;
string c1, c2, s1, s2, a1, a2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (s1[0] == s2[0] && s1[1] == s2[1] && c1 == c2) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') {
		a1 = 1;
	} else {
		a1 = 2;
	}
	if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') {
		a2 = 1;
	} else {
		a2 = 2;
	}
	if (s1[0] == s2[0] && s1[1] == s2[1] && c1 == c2 && a1 == a2) {
		cout << "1";
	} else {
		cout << "0";
	}
	if ((s1[2] - s2[2] == 1 || s1[2] - s2[2] == -1) && s1[0] == s2[0] && s1[1] == s2[1] && c1 == c2 && a1 == a2) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}
