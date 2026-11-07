#include <bits/stdc++.h>
using namespace std;
char c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if ((int)c1 == (int)c2) {
		cout << 1;
	} else {
		cout << 0000;
		return 0;
	}
	if ((int)s1 == (int)s2) {
		cout << 1;
	} else {
		cout << 000;
		return 0;
	}
	if ((char)s1 == (char)s2) {
		cout << 1;
	} else {
		cout << 00;
		return 0;
	}
	if ((char)s1 + 1 == (char)s2 || (char)s1 + 1 == (char)s2) {
		cout << 1;
	} else {
		cout << 0;
		return 0;
	}
	return 0;
}
