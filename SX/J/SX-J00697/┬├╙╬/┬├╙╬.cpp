#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int c1, c2;

int main() {
	freopen("ÂÃÓÎ.in", "r", stdin);
	freopen("ÂÃÓÎ.out", "w", stdout);
	cin >> c1;
	cin >> s1;
	cin >> c2;
	cin >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1[1] == s2[1]) {
			cout << 1;
			if (int(s1[2] + 1) == int(s2[2]) || int(s1[2] - 1) == int(s2[2])) {
				cout << 1 << 1;
			} else {
				cout << 0;
				if (int(s1[2]) + 2 != int(s2[2]) || int(s1[2]) - 2 != int(s2[2])) {
					cout << 0;
				} else {
					if (int(s1[2]) + 3 != int(s2[2]) || int(s1[2]) - 3 != int(s2[2])) {
						cout << 0;
					} else {
						if (int(s1[2]) + 4 != int(s2[2]) || int(s1[2]) - 4 != int(s2[2])) {
							cout << 0;
						} else
							cout << 1;
					}
				}
			}

		} else
			cout << 0;

	} else
		cout << 0;

	return 0;
}