#include <bits/stdc++.h>
using namespace std;

string X, R;
int x1, r1, x2, r2, d1, d2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> x1 >> X >> r1 >> R;
	x2 = int(X[0]) * 10 + int(X[1]);
	r2 = int(R[0]) * 10 + int(R[1]);
	if (int(X[2]) >= 65 && int(X[2]) <= 67) {
		d1 = 0;
	} else {
		d1 = 1;
	}
	if ( int(R[2]) >= 65 && int(R[2]) <= 67) {
		d2 = 0;
	} else {
		d2 = 1;
	}
//	cout << int(X[0]) << " " << int(X[1]) << " " << X[2];
	if (x1 != r1) {
		cout << "0000" << endl;
		return 0;
	} else {
		if (x2 != r2) {
			cout << "1000" << endl;
			return 0;
		} else {
			if (d1 != d2) {
				cout << "1100" << endl;
				return 0;
			} else {
				if (int(X[2]) - 1 == int(R[2]) || int(X[2]) + 1 == int(R[2])) {
					cout << "1111" << endl;
					return 0;
				} else {
					cout << "1110" << endl;
					return 0;
				}
			}
		}
	}
	return 0;
}
