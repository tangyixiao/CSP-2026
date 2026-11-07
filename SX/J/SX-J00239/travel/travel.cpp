#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b;
	char a1, a2, a3;
	char b1, b2, b3;
	cin >> a >> a1 >> a2 >> a3 >> b >> b1 >> b2 >> b3;
	if (a == b) {
		cout << 1;
		if (a1 == b1 && a2 == b2) {
			cout << 1;
			if (a3 <= 'C' && b3 <= 'C' ) {
				cout << 1;

				if (a3 == 'A') {
					if (b3 == 'B') {
						cout << 1;
					} else {
						cout << 0;
					}
				}
				if (a3 == 'B') {
					if (b3 == 'A' || b3 == 'C') {
						cout << 1;
					} else {
						cout << 0;
					}
				}
				if (a3 == 'C') {
					if (b3 == 'B') {
						cout << 1;
					} else {
						cout << 0;
					}
				} else if (a3 > 'C' && b3 > 'C') {
					if (a3 == 'D') {
						if (b3 == 'F') {
							cout << 1;
						} else {
							cout << 0;
						}
					}
					if (a3 == 'F') {
						if (b3 == 'D') {
							cout << 1;
						} else {
							cout << 0;
						}
					}
				}
			} else {
				cout << 0 << 0;
			}
		} else {
			cout << 0 << 0 << 0;
		}
	} else {
		cout << 0 << 0 << 0 << 0;
	}


	return 0;
}
