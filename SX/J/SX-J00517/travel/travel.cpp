#include <bits/stdc++.h>
using namespace std;
string a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	if (a[0] == c[0] && a[1] == c[1]) {
		cout << '1';
		if (b[0] == d[0] && b[1] == d[1]) {
			cout << '1';
			char x, y;
			x = b[2];
			y = d[2];
			if (x >= 'A' && x <= 'C' && y >= 'A' && y <= 'C') {
				cout << '1';
				if (x == 'B' || y == 'B') {
					cout << '1';
				} else {
					cout << '0';
				}
			} else if (x >= 'D' && x <= 'F' && y >= 'D' && y <= 'F') {
				cout << "11";
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
