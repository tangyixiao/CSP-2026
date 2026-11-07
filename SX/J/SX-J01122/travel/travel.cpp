#include <bits/stdc++.h>
using namespace std;

char rc[5], rs[5], xc[5], xs[5];
bool z, y; //1wei abc  0wei df


int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> rc >> rs >> xc >> xs;
	if (rs[2] < 'D' && xs[2] < 'D') {
		z = 1;
	}
	if (rs[2] > 'C' && xs[2] > 'C') {
		y = 1;
	}
	if (rc[0] == xc[0] && rc[1] == xc[1]) {
		cout << "1";
		if (rs[0] == xs[0] && rs[1] == xs[1]) {
			cout << "1";
			if (z || y) {
				cout << "1";
				if (rs[2] + 1 == xs[2] || rs[2] - 1 == xs[2]) {
					cout << "1";
				} else {
					cout << "0";
					return 0;
				}
			} else {
				cout << "00";
				return 0;
			}
		} else {
			cout << "000";
			return 0;
		}
	} else {
		cout << "0000";
		return 0;
	}
}
