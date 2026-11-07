#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool n1, n2, n3, n4;
	if (c1 == c2) {
		n1 = 1;
	} else {
		n1 = 0;

	}
	if (s1[0] == s2[0] && s1[1] == s2[1]) {
		n2 = 1;
	} else {
		n2 = 0;

	}
	if (s1[2] - 'A' <= 2 && s2[2] - 'A' <= 2)  {
		n3 = 1;
	} else if (s1[2] - 'A' >= 3 && s1[2] - 'A' >= 3) {
		n3 = 1;
	} else {
		n3 = 0;

	}
	if (s1[2] - s2[2] == 1 || s1[2] - s2[2] == -1) {
		n4 = 1;
	} else {
		n4 = 0;
	}
	if (n1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (n2 && n1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (n3 && n2 && n1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (n4 && n3 && n2 && n1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}