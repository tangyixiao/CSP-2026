#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	for (int i = 0; i < 2; i++) {
		if (a == c) {
			cout << "1";
			if ((b[0] + b[1]) == (d[0] + d[1])) {
				cout << "1";
				if ((('A' <= b[2] <= 'C') && ('A' <= d[2] <= 'C')) || (('D' <= b[2] <= 'E') && ('D' <= d[2] <= 'E'))) {
					cout << "1";
					if (((b[2] - '0') - (d[2] - '0' )) == 1) {
						cout << "1";
					} else {
						cout << "0";
						break;
					}
				} else {
					cout << "00";
					break;
				}
			} else if ((b[0] + b[1]) != (d[0] + d[1])) {
				cout << "000";
				break;
			}
		} else if (a != c) {
			cout << "0000";
			break;
		}
	}
	return 0;
}
