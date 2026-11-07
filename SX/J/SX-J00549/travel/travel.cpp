
#include <iostream>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	string c[6], d[6], a[6], b[6];
	for (int i = 1; i <= 2; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= 3; i++) {
		cin >> c[i];
	}
	for (int i = 1; i <= 2; i++) {
		cin >> b[i];
	}
	for (int i = 1; i <= 3; i++) {
		cin >> d[i];
	}
	if (a == b) {
		cout << "1";
		if (c[1] == d[1]) {
			if (c[2] == d[2]) {
				cout << "1";
				if (c[3] == "A") {
					if (d[3] == "B") {
						cout << "11";
					} else if (d[3] == "C") {
						cout << "10";
					} else {
						cout << "00";
					}
				}
			} else {
				cout << "000";
			}
			if (c[3] == "B") {
				if (d[3] == "C" || d[3] == "A") {
					cout << "11";
				}
			}
			if (c[3] == "C" ) {
				if (d[3] == "B") {
					cout << "11";
				} else if (d[3] == "A") {
					cout << "10";
				} else {
					cout << "00";
				}
			}
			if (c[3] == "D") {
				if (d[3] == "F") {
					cout << "11";
				} else {
					cout << "00";
				}
			}
			if (c[3] == "F") {
				if (d[3] == "D") {
					cout << "11";
				} else {
					cout << "00";
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


