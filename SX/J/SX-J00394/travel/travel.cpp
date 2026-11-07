#include <bits/stdc++.h>
using namespace std;
int r1, x1;
string r2, x2;


int main () {
	freopen("travel.in", "w", stdin);
	freopen("travel.out", "r", stdout);
	cin >> r1 >> r2 >> x1 >> x2;
	if (r1 != x1) {
		cout << "0000";
	} else {
		if (r1 == x1) {
			cout << "1";
		} else {
			cout << "0";
		}
		if (r1 == x1 and r2[0] == x2[0] and r2[1] == x2[1]) {
			cout << "1";
		} else {
			cout << "0";
		}
		if (r1 == x1 and r2[0] == x2[0] and r2[1] == x2[1]) {
			if (r2[2] > 'C' and x2[2] > 'C') {
				cout << "1";
			} else if (r2[2] < 'D' and x2[2] < 'D') {
				cout << "1";
			} else {
				cout << "0";
			}
		} else {
			cout << "0";
		}
		if (r1 == x1 and r2[0] == x2[0] and r2[1] == x2[1]) {
			if (r2[2] > 'C' and x2[2] > 'C') {
				cout << "1";
			} else if (r2[2] < 'D' and x2[2] < 'D') {
				if (r2[2] == 'B' or x2[2] == 'B') {
					cout << "1";
				} else {
					cout << "0";
				}
			} else {
				cout << "0";
			}
		} else {
			cout << "0";
		}
	}
}
