#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b, c, d;
	char x, y;
	cin >> a >> b >> x >> c >> d >> y;
	int e = x - 'A' + 1, f = y - 'A' + 1;
	if (a != c) {
		cout << "0000";
	} else {
		cout << "1";
		if (b != d) {
			cout << "000";
		} else {
			cout << "1";
			if (e <= 3 && f > 3 || e > 3 && f <= 3) {
				cout << "00";
			} else {
				cout << "1";
				if (abs(e - f) != 1) {
					cout << "0";
				} else {
					cout << "1";
				}
			}
		}
	}
	return (0 - 0);
}
