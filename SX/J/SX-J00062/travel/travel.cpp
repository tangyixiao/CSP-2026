#include <bits/stdc++.h>
using namespace std;
int n;
string s1, c1, s2, c2, tt, t1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
		tt = s1.substr(0, 2);
		t1 = s2.substr(0, 2);
		if (tt == t1) {
			cout << "1";
			if (((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) || ((s1[2] == 'D'
			        || s1[2] == 'F') && (s2[2] == 'D' || s2[2] == 'F'))) {
				cout << "1";
				if ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'A') || (s1[2] == 'B' && s2[2] == 'C') || (s1[2] == 'C'
				        && s2[2] == 'B') || (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')) {
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}

	} else {
		cout << "0000";
	}
	return 0;
}
//reverse
