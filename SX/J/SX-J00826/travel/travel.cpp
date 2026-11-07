#include <bits/stdc++.h>
using namespace std;
string r1, r2, x1, x2;
bool f = false;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> r1 >> r2 >> x1 >> x2;
	if (r1 == x1) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (r1 == x1 && r2[1] == x2[1]) {
		cout << 1;
	} else {
		cout << 0;
	}
	if ((r2[2] == 'C' && x2[2] == 'D') || (r2[2] == 'D' && x2[2] == 'C')) {
		cout << 0;
	} else {
		if (r1 == x1 && r2[1] == x2[1] && r2[2] <= 'c' && x2[2] <= 'c' ) {
			cout << 1;
			f = true;
		} else {
			if (r1 == x1 && r2[1] == x2[1] && ((r2[2] == 'D' && r2[2] == 'F') || (r2[2] == 'D' && x2[2] == 'F'))) {
				cout << 1;
				f = true;
			} else {
				cout << 0;
			}
		}
	}

	if ((r2[2] + 1 == x2[2] || x2[2] + 1 == r2[2]) && f == true) {
		if ((r2[2] == 'C' && x2[2] == 'D') || (r2[2] == 'D' && x2[2] == 'C')) {
			cout << 0;
		} else {
			cout << 1;
		}

	} else {
		cout << 0;
	}


	return 0;
}
