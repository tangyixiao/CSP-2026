#include <bits/stdc++.h>
using namespace std;
string c, c1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, a1, b1;
	cin >> a >> b >> a1 >> b1;
	if (a == a1) {
		cout << 1;
		for (int i = 0; i < b.size() - 1; i++) {
			c += b[i];
			c1 += b1[i];
		}
		if (c == c1) {
			cout << 1;
			if (b[2] == 'A' || b[2] == 'B' || b[2] == 'C') {
				if (b1[2] == 'A' || b1[2] == 'B' || b1[2] == 'C') {
					cout << 1;
					if (b[2] == 'A' || b1[2] == 'A') {
						if (b1[2] == 'B' || b[2] == 'B') {
							cout << 1;
							return 0;
						}
					}
					if (b[2] == 'B' || b1[2] == 'B') {
						if (b1[2] == 'C' || b[2] == 'C') {
							cout << 1;
							return 0;
						}
					}
					if (b[2] == 'A' || b1[2] == 'A') {
						if (b1[2] == 'C' || b[2] == 'C') {
							cout << 0;
							return 0;
						}
					}
				} else if (b1[2] == 'D' || b1[2] == 'F') {
					cout << "00";
					return 0;
				}
			} else if (b[2] == 'D' || b[2] == 'F') {
				if (b1[2] == 'D' || b1[2] == 'F') {
					cout << 11;
				} else if (b1[2] == 'A' || b1[2] == 'B' || b1[2] == 'C') {
					cout << "00";
					return 0;
				}
			}
		} else {
			cout << "000";
			return 0;
		}
	} else
		cout << "0000";
	return 0;
}