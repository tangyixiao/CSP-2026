#include <bits/stdc++.h>
using namespace std;
char r[5], x[5];
int rn, xn;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> rn;
	for (int i = 1; i <= 3; i++) {
		cin >> r[i];
	}
	cin >> xn;
	for (int i = 1; i <= 3; i++) {
		cin >> x[i];
	}
	if (rn != xn) {
		cout << "0000";
		return 0;
	} else {
		cout << "1";
		if (r[1] == x[1] && r[2] == x[2]) {
			cout << "1";
		} else {
			cout << "000";
			return 0;
		}
		if ((r[3] <= 'C' && x[3] <= 'C' && r[3] != x[3]) || ( r[3] == 'D' && x[3] == 'F' ) || (x[3] == 'D' && r[3] == 'F')) {
			cout << "1";
		} else {
			cout << "00";
			return 0;
		}
		if ((r[3] == 'A' && x[3] == 'B') || (r[3] == 'B' && x[3] == 'C') || (r[3] == 'D' && x[3] == 'F')) {
			cout << "1";
		} else {
			cout << "0";
		}
	}
	return 0;
}
