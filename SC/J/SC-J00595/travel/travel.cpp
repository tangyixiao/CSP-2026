#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2;
	string s1, s2;
	string z1, z2;
	string f1, f2;
	bool b1, b2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		for (int i = 0; i < 2; i++) {
			z1 += s1[i];
			z2 += s2[i];
		}
		if (z1 == z2) {
			cout << 1;
			f1 = s1[2];
			f2 = s2[2];
			if (f1 <= "C" && f1 >= "A") {
				b1 = true;
			} else {
				b1 = false;
			}
			if (f2 <= "C" && f2 >= "A") {
				b2 = true;
			} else {
				b2 = false;
			}
			if (b1 == b2) {
				cout << 1;
				if ((f2 == "A" && f1 == "B") || (f2 == "B" && f1 == "A") || (f2 == "C" && f1 == "B") || (f2 == "B" && f1 == "C")) {
					cout << 1;
				} else if ((f2 == "D" && f1 == "F") || (f2 == "F" && f1 == "D")) {
					cout << 1;
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