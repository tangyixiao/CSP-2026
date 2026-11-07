#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	cin >> c1 >> c2;
	char s1[3], s2[3];
	for (int i = 0; i < 3; i++) {
		cin >> s1 >> s2;
	}
	if (c1 == 07 || c1 == 16 || c2 == 07 || c2 == 16) {
		cout << 0000;
		return 0;
	} else if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0000;
		return 0;
	}
	if (s1[0] == s2[0]) {
		cout << 1;
	} else {
		cout << 000;
		return 0;
	}
	if (s1[1] == s2[1]) {
		cout << 1;
	} else {
		cout << 00;
		return 0;
	}
	if (s1[2] == s2[2]) {
		cout << 1;
	} else {
		cout << 1;
	}

	return 0;
}