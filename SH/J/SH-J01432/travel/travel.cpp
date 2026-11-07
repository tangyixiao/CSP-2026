#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == c) cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	if (b.substr(0, 2) == d.substr(0, 2)) {
		cout << 1;
		char b1 = b[2], d1 = d[2];
		if ((b1 <= 'C' && d1 <= 'C') || (b1 >= 'D' && d1 >= 'E')) {
			cout << 1;
			if ((b1 == 'A' && d1 == 'C') || (b1 == 'C' && d1 == 'A')) {
				cout << 0;
			} else {
				cout << 1;
			}
		} else {
			cout << "00";
			return 0;
		}
	} else {
		cout << "000";
		return 0;
	}
	return 0;
}
