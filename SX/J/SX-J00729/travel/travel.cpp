#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	string x1 = "", x2 = "";
	x1 += s1[0];
	x2 += s2[0];
	x1 += s1[1];
	x2 += s2[1];
	if (c1 != c2) {
		cout << 0 << 0 << 0 << 0;
		return 0;
	} else {
		cout << 1;
	}
	if (x1 != x2) {
		cout << 0 << 0 << 0;
		return 0;
	} else {
		cout << 1;
		if (((s1[2] == 'A') + (s1[2] == 'B') + (s1[2] == 'C') + (s2[2] == 'A') + (s2[2] == 'B') + (s2[2] == 'C')) == 2
		        || ((s1[2] == 'D') + (s1[2] == 'F') + (s2[2] == 'D') + (s2[2] == 'F') ) == 2) {
			cout << 1;
			if (abs(s1[2] - s2[2]) == 1 && ((s1[2] != 'C') + (s1[2] != 'D') + (s2[2] != 'C') + (s2[2] != 'D') > 2)
			        || ((s1[2] == 'D') && (s2[2] == 'F')) + ((s1[2] == 'F') && (s2[2] == 'D')) == 2) {
				cout << 1;
			} else {
				cout << 0;
			}
		} else {
			cout << 0 << 0;
		}
	}
	return 0;
}
