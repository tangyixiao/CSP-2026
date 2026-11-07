#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	if (a1 == b1) {
		cout << "1";
		if (a2.substr(0, 2) == b2.substr(0, 2)) {
			cout << "1";
			if ((a2[2] == 'C' && b2[2] == 'D') || (a2[2] == 'D' && b2[2] == 'C')) {
				cout << "00";
			} else {
				cout << "1";
				if (abs(a2[2] - b2[2]) == 1) {
					cout << "1";
				} else {
					cout << "0";
				}
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}






	return 0;
}
