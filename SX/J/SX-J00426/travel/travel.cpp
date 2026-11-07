#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

bool fun(char a, char b) {
	if (((a == 'A' || a == 'B' || a == 'C') && (b == 'A' || b == 'B' || b == 'C')) || ((a == 'D' || a == 'E') && (b == 'D'
	        || b == 'E'))) {
		return true;
	}
	return false;
}

bool f(char a, char b) {
	if ((a == 'A' && b == 'B') || (b == 'A' && a == 'B') || (a == 'B' && b == 'C') || (b == 'B' && a == 'C') || (a == 'D'
	        && b == 'E') || (b == 'D' && a == 'E')) {
		return true;
	}
	return false;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1]) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && fun(s1[2], s2[2])) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && fun(s1[2], s2[2]) && f(s1[2], s2[2])) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}