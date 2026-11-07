#include <bits/stdc++.h>
using namespace std;
string rc, rz, xc, xz, zm = "ABC DE";

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> rc >> rz >> xc >> xz;
	if (rc == xc) {
		cout << "1";
		if (rz[0] == xz[0] && rz[1] == xz[1]) {
			cout << "1";
			if (((rz[2] == 'A' || rz[2] == 'B' || rz[2] == 'C') && (xz[2] == 'D' || xz[2] == 'E')) || ((xz[2] == 'A'
			        || xz[2] == 'B' || xz[2] == 'C') && (rz[2] == 'D' || rz[2] == 'E'))) {
				cout << "00";
				return 0;
			} else {
				cout << "1";
				for (int i = 0; i <= zm.size() - 1; i++) {
					if (zm[i] == rz[2]) {
						if (zm[i + 1] == xz[2]) {
							cout << "1";
							return 0;
						}
					}
					if (zm[i] == xz[2]) {
						if (zm[i + 1] == rz[2]) {
							cout << "1";
							return 0;
						}
					}
				}
				cout << "0";
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
	return 0;
}
