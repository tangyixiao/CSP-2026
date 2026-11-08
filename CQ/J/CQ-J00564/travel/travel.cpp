#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
		char ha1 = s1[0], ha2 = s2[0], hb1 = s1[1], hb2 = s2[1];
		char c1 = s1[2], c2 = s2[2];
		if (ha1 == ha2 && hb1 == hb2) {
			cout << "1";
			if (c1 >= 'A' && c1 <= 'C' && c2 >= 'A' && c2 <= 'C') {
				cout << "1";
				if (abs(c1 - c2) == 1) {
					cout << "1";
				}else {
					cout << "0";
				}
			}else if (c1 >= 'D' && c2 >= 'D') {
				cout << "1";
				if (abs(c1 - c2) == 1) {
					cout << "1";
				}else {
					cout << "0";
				}
			}else {
				cout << "00";
			}
		}else {
			cout << "000";
		}
	}else {
		cout << "0000";
	}
	return 0;
}
