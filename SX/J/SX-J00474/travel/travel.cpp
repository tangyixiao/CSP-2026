#include <bits/stdc++.h>
using namespace std;
string s;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, x, y;
	cin >> a >> x >> b >> y;
	if (a == b) {
		string n, m;
		n += x[0];
		n += x[1];
		m += y[0];
		m += y[1];
		s += "1";
		if (n == m) {
			s += "1";
			if ((x[2] == 'A' || x[2] == 'B' || x[2] == 'C') && (y[2] == 'A' || y[2] == 'B' || y[2] == 'C')) {
				s += "1";
				if ((x[2] + 1 == y[2]) || (x[2] - 1 == y[2])) {
					s += "1";
				} else {
					s += "0";
				}
			} else if ((x[2] == 'D' || x[2] == 'F') && (y[2] == 'D' || y[2] == 'F')) {
				s += "1";
				if ((x[2] + 1 == y[2]) || (x[2] - 1 == y[2])) {
					s += "1";
				} else {
					s += "0";
				}
			} else {
				s += "00";
			}
		} else {
			s += "000";
		}
	} else {
		s += "0000";
	}
	cout << s;
	return 0;
}
