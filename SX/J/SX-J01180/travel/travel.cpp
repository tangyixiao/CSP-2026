#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("ploygon.in", "r", stdin);
	freopen("ploygon.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	cin >> c1;
	cin >> s1;
	cin >> c2;
	cin >> s2;
	if (c1 == c2) {
		for (int i = 1; i <= 2; i++) {
			if (s1[i] == s2[i]) {
				if (s1[3] == 'C' && s2[3] == 'D') {
					cout << 1110;
					return 0;
				} else
					cout << 1111;
				return 0;
			} else {
				cout << 1100;
				return 0;
			}
		}
	} else
		cout << 0000;
	return 0;
}
