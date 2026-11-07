#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int ra, xa, an;
	string r, x;
	char r2, x2;
	cin >> ra >> r >> xa >> x;
	if (ra == xa) {
		cout << "1";
		for (int i = 0; i < 2; i++) {
			if (r[i] == x[i]) {
				an ++;
			}
		}
		if ( an == 2) {
			cout << "1";
			r2 = r[2];
			x2 = x[2];
			if ((r2 + x2 < 133 && r2 < 68 && x2 < 68) || r2 + x2 == 138) {
				cout << "1";
				if (r2 - x2 == 1 || r2 - x2 == -1) {
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
