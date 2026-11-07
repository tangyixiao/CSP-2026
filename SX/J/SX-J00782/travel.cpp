#include <bits/stdc++.h>
using namespace std;

int main() {
//	freopen("travel.in", "r", stdin);
//	freopen("travel.out", "w", stdout);
	int c1, c2, d1, d2;
	string s1, s2, b1, b2;
	cin >> c1 >> s1 >> c2 >> s2;
	b1 = s1[2];
	b2 = s2[2];
	d1 = s1[1];
	d2 = s2[1];
	if (c1 == c2) {
		cout << "1" << " ";
		if (d1 == d2) {
			cout << "1" << " " ;
			if (d1 == d2 && b1 <= "C" && b2 <= "C") {
				cout << "1" << " ";
				if ((d1 == d2 && b1 <= "C" && b2 <= "C" && b1 == "A" && b2 == "B") || (b1 == "C" && b2 == "D")) {
					cout << "1" << " " ;
				} else {
					cout << "0" << " ";
				}
			} else {
				cout << "0" << " " << "0" << " " ;
			}
		} else {
			cout << "0" << " " << "0" << " " << "0" << " " ;
		}
	} else {
		cout << "0" << " " << "0" << " " << "0" << " " << "0" << " ";
	}
}
