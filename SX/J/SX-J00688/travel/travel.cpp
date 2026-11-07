#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	string f, g;
	f = b.substr(0, 2);
	g = d.substr(0, 2);
	if (a == c) {
		cout << '1';
		if (f == g) {
			cout << '1';
			char q = b[2], w = d[2];
			int y = int(q), i = int(w);
			if ((q != 'C' && w != 'D') && (q != 'D' || w != 'C')) {
				if ((y <= 68 && i <= 68) || (y >= 68 && i >= 68)) {
					cout << '1';
					if ((q == 'A' && w == 'B') || (q == 'B' && w == 'C')) {
						cout << '1';
					} else {
						if ((q == 'D' && w == 'F') || (q == 'F' && w == 'D')) {
							cout << '1';
						} else {
							if ((q == 'B' && w == 'A') || (q == 'C' && w == 'B')) {
								cout << '1';
							} else {
								cout << '0';
							}
						}
					}
				} else {
					cout << "00";
				}
			} else {
				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}
