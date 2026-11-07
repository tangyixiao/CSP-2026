#include <bits/stdc++.h>
using namespace std;
string a1, b1, a2, b2;
int f, f1, f2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> b1 >> a2 >> b2;
	if (a1 == a2) {
		cout << 1;
		f2 = 1;
	} else {
		cout << 0;
	}
	if (f2 == 1) {
		if (b1[0] == b2[0] && b1[1] == b2[1]) {

			cout << 1;
			f1 = 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	if (f1 == 1 && f2 == 1) {
		if ((b1[2] == 'A' || b1[2] == 'B' || b1[2] == 'C') && (b2[2] == 'A' || b2[2] == 'B' || b2[2] == 'C')) {
			cout << 1;
			if ((b1[2] == 'C' && b2[2] == 'A') || (b1[2] == 'A' && b2[2] == 'C')) {
				f = 0;
			} else {
				f = 1;
			}
		} else if ((b1[2] == 'D' || b1[2] == 'F') && (b2[2] == 'D' || b2[2] == 'F' )) {
			f = 1;
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	if (f == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}