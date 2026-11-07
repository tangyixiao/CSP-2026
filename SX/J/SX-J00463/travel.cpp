#include <bits/stdc++.h>
using namespace std;
string s ;
string r2, x2;

int main() {
	int r1, x1;
	cin >> r1 >> r2 >> x1 >> x2;
	if (r1 == x1) {
		cout << 1;

		if (r2[0] == x2[0] && r2[1] == x2[1]) {
			cout << 1;
		} else {
			cout << 0;
		}
		if (r2[2] == 'A' || r2[2] == 'B' || r2[2] == 'C') {
			if (x2[2] == 'A' || x2[2] == 'B' || x2[2] == 'C') {
				cout << 1;
			} else {
				cout << 0;
			}
		}
		if (r2[0] == x2[0] && r2[1] == x2[1]) {
			if (r2[2] == 'D' || r2[2] == 'F') {
				if (x2[2] == 'D' || x2[2] == 'F') {
					cout << 1;
					cout << 1;
				} else {
					cout << 0;
					cout << 0;
				}
			}
		} else {
			cout << 0;
		}
		if (r2[0] == x2[0] && r2[1] == x2[1]) {
			if (r2[2] == 'A' && x2[2] == 'B') {
				cout << 1;
			}
			if (r2[2] == 'B') {
				if (x2[2] == 'A' || x2[2] == 'C') {
					cout << 1;
				}
			}
			if (r2[2] == 'C') {
				if (x2[2] == 'B') {
					cout << 1;
				}
			}
			cout << 0;
		}
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
	}
	return 0;
}