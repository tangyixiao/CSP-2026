#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c, s, c2, s2;
	cin >> c >> s >> c2 >> s2;
	if (c != c2) {
		cout << 0 << 0 << 0 << 0;
		return 0;
	} else {
		cout << 1;
		if (s[0] == s2[0] && s[1] == s2[1]) {
			cout << 1;
			if (s[2] <= 'C' && s2[2] <= 'C' || s[2] > 'C' && s2[2] > 'C') {
				cout << 1;
				if (s[2] == 'F' && s2[2] == 'D' || s2[2] == 'F' && s[2] == 'D' || s2[2] == 'A' && s[2] == 'B' || s2[2] == 'B'
				        && s[2] == 'A' || s2[2] == 'B' && s[2] == 'C' || s2[2] == 'C' && s[2] == 'B') {
					cout << 1;
				} else
					cout << 0;
			} else {
				cout << 0 << 0;
				return 0;
			}

		} else {
			cout << 0 << 0 << 0;
			return 0;
		}
	}


}
