#include <bits/stdc++.h>
using namespace std;
string c1, c2;
char s1[5], s2[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> c1;
	for (int i = 0; i < 3; i++) {
		cin >> s1[i];
	}
	cin >> c2;
	for (int i = 0; i < 3; i++) {
		cin >> s2[i];
	}
	if (c1 != c2) {
		cout << "0000";
		return 0;
	} else {
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			if (((s1[2] == 'D' || s1[2] == 'F') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) || ((s2[2] == 'D'
			        || s2[2] == 'F') && (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C'))) {
				cout << "1100";
				return 0;
			} else {
				if ((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')) {
					cout << "1111";
					return 0;
				} else if ((s1[2] == 'A' && s2[2] == 'C') || (s1[2] == 'C' && s2[2] == 'A')) {
					cout << "1110";
					return 0;
				} else {
					cout << "1111";
					return 0;
				}
			}
		} else {
			cout << "1000";
			return 0;
		}
	}
	return 0;
}
