#include <bits/stdc++.h>
using namespace std;

char substr1(string x) {
	return x[0];
}

char substr2(string x) {
	return x[1];
}

char substr3(string x) {
	return x[2];
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		int cnt = 1;
		cnt *= 10;
		if (substr1(s1) == substr1(s2) && substr2(s1) == substr2(s2)) {
			if (substr3(s1) < 'D' && substr3(s2) < 'D') {
				if (substr3(s1) - substr3(s2) == 1 || substr3(s2) - substr3(s1) == 1) {
					cout << "1111";
					return 0;
				} else {
					cout << "1110";
					return 0;
				}
			} else if (substr3(s1) > 'C' && substr3(s2) > 'C') {
				cout << "1111";
				return 0;
			} else {
				cout << "1100";
				return 0;
			}
		} else {
			cout << "1000";
			return 0;
		}
	} else {
		cout << "0000";
	}
	return 0;
}