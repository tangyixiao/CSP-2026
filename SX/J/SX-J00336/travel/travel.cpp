#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
char a = 'A', b = 'B', c = 'C', d = 'D', f = 'F';

int main() {
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	}
	cout << "1";
	for (int i = 1; i <= 2; i++) {
		if (s1[1] != s2[1]) {
			cout << "000";
			return 0;
		}
	}
	cout << "1";
	for (int i = 1; i <= 2; i++) {
		if (s1[2] == a && s2[2] == b || s1[2] == a && s2[2] == c || s1[2] == b && s2[2] == a || s1[2] == b && s2[2] == c
		        || s1[2] == c && s2[2] == a || s1[2] == c && s2[2] == b || s1[2] == d && s2[2] == f || s1[2] == f && s2[2] == d) {
			cout << "1";
			break;
		} else {
			cout << "00";
			return 0;
		}

	}
	for (int i = 1; i <= 2; i++) {
		if (s1[2] == a && s2[2] == b || s1[2] == b && s2[2] == a || s1[2] == b && s2[2] == c || s1[2] == c && s2[2] == b
		        || s1[2] == d && s2[2] == f || s1[2] == f && s2[2] == d) {
			cout << "1";
			break;
		} else {
			cout << "0";
			return 0;
		}
	}
	return 0;
}
