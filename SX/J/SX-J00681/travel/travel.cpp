#include <bits/stdc++.h>
using namespace std;
string s, sx, ss, sy;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s >> sx >> ss >> sy;
	if (sx[2] == 'F')
		sx[2] = 'E';
	if (sy[2] == 'F')
		sy[2] = 'E';
	if (s == ss) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}

	if (sx[0] == sy[0]  && sx[1] == sy[1]) {
		cout << 1;
	} else {
		cout << 0;
	}
	if (sx[0] == sy[0]  && sx[1] == sy[1]) {
		if (sx[2] == 'A' || sx[2] == 'B' || sx[2] == 'C') {
			if (sy[2] <= 'C') {
				cout << 1;
			} else {
				cout << 0;
			}
		} else {
			if (sy[2] >= 'D') {
				cout << 1;
			} else {
				cout << 0;
			}
		}
	} else {
		cout << 0;
	}

	if ((sx[2] == 'C' && sy[2] == 'D') || (sx[2] == 'D' && sy[2] == 'C')) {
		cout << 0;
	} else {
		int idx = abs(sx[0] - sy[0]);
		int idy = abs(sx[1] - sy[1]);
		int idz = abs(sx[2] - sy[2]);
		if (idx + idy + idz <= 1 && idz != 0) {
			cout << 1;
		} else {
			cout << 0;
		}
	}
	return 0;
}
