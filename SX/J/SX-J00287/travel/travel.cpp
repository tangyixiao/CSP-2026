#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		for (int i = 1; i <= 2; i++) {
			for (int j = 1; j <= 2; j++) {
				if (s1[i] == s2[i] ) {
					cout << "1";
					if ((s1[3] == 'A' && s2[3] == 'B') || (s1[3] == 'B' && s2[3] == 'A') || (s1[3] == 'A' && s2[3] == 'c') || (s1[3] == 'C'
					        && s2[3] == 'A') || (s1[3] == 'c' && s2[3] == 'B') || (s1[3] == 'B' && s2[3] == 'C') || (s1[3] == 'D' && s2[3] == 'F')
					        || (s1[3] == 'F' && s2[3] == 'D')) {
						cout << 1;
						if ((s1[3] == 'A' && s2[3] == 'C') || (s1[3] == 'C' && s2[3] == 'A')) {
							cout << 0;
						} else {
							cout << 1;
						}
					} else {
						cout << "00";
						return 0;
					}
				} else {
					cout << "000";
					return 0;
				}
			}
		}
	} else {
		cout << "0000";
		return 0;
	}
}

