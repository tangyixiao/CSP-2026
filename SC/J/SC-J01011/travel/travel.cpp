#include <bits/stdc++.h>
using namespace std;

bool chk(char a, char b) {
	if (a <= 'C' && b <= 'C') {
		return true;
	}
	if (a >= 'D' && b >= 'D') {
		return true;
	}
	return false;
}

bool chk2(char a, char b) {
	if (a == 'D' && b == 'F') {
		return true;
	}
	if (a == 'F' && b == 'D') {
		return true;
	}
	if (a <= 'C' && b <= 'C') {
		if (a - 1 == b || b - 1 == a) {
			return true;
		}
	}
	return false;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2)) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2) && chk(s1.back(), s2.back())) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (c1 == c2 && s1.substr(0, 2) == s2.substr(0, 2) && chk(s1.back(), s2.back()) && chk2(s1.back(), s2.back())) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0;
}