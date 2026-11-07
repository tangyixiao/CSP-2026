#include <bits/stdc++.h>
using namespace std;
string r2, x2;
int r1, x1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> r1 >> r2 >> x1 >> x2;
	if (r1 == x1) {
		cout << "1";
		if (r2[0] == x2[0] && r2[1] == x2[1]) {
			cout << "1";
			if ((r2[2] == 'C' && x2[2] == 'D') || (r2[2] == 'D' && x2[2] == 'C')) {
				cout << "00";
				return 0;
			} else {
				cout << "1";
				int a = r2[2] - '0', b = x2[2] - '0';
				if (a + 1 == b || a - 1 == b) {
					cout << "1";
				} else
					cout << "0";
			}
		} else {
			cout << "000";
			return 0;
		}
	} else
		cout << "0000";

	return 0;
}