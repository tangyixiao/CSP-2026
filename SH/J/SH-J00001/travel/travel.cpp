#include <bits/stdc++.h>
using namespace std;

string c1, c2;
char x11, x21, x12, x22, x13, x23;
int main() {
//	freopen("travel.in", "r", stdin);
	cin >> c1 >> x11 >> x12 >> x13 >> c2 >> x21 >> x22 >> x23;
	freopen("travel.out", "w", stdout);
	if (c1 == c2) {
		cout << 1;
		if (x12 == x22 && x11 == x21) {
			cout << 1;
			if (abs(x13 - x23) == 2 || x13 + x23 < 134) {
				cout << 1;
				if (abs(x13 - x23) == 2 && x13 + x23 == 138 || x13 + x23 < 134 && abs(x13 - x23) == 1) {
					cout << 1;
				} else {
					cout << 0;
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
