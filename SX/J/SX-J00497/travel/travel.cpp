#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	int s11, s22;
	char s[5] = {'A', 'B', 'C', 'D', 'F'};
	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 0; i <= 4; i++) {
		if (s1[2] == s[i]) {
			s11 = i;
		}
	}
	for (int i = 0; i <= 4; i++) {
		if (s2[2] == s[i]) {
			s22 = i;
		}
	}
	if (c1 == c2) {
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			if ((s11 <= 2 && s22 <= 2) || (s11 >= 3 && s22 >= 3)) {
				if (s11 + 1 == s22 || s11 - 1 == s22) {
					cout << "1111";
				} else {
					cout << "1110";
				}
			} else {
				cout << "1100";
			}
		} else {
			cout << "1000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}
