#include <bits/stdc++.h>
using namespace std;
long long p1, p2, s, m, p3, p4;
string a, b, c, d;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	s = b.size();
	m = d.size();
	if (a == c) {
		cout << 1;
		for (int i = 0; i <= b.size() - 1; i++) {
			if (m == 3) {
				p1 = b[1] - '0';
				p3 = b[2] - 'A';
			}
			if (m == 4) {
				p1 = (b[1] - '0') * 10 + b[2] - '0';
				p3 = b[3] - 'A';
			}
		}
		for (int i = 0; i <= d.size() - 1; i++) {
			if (m == 3) {
				p2 = d[1] - '0';
				p4 = d[2] - 'A';
			}
			if (m == 4) {
				p2 = (d[1] - '0') * 10 + d[2] - '0';
				p4 = d[3] - 'A';
			}
		}
		if (p1 == p2) {
			cout << 1;
			if ((p3 <= 2 && p4 <= 2) || (p3 > 2 && p4 > 2)) {
				cout << 1;
				if (p3 == p4 + 1 || p3 == p4 - 1) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << "00";
				return 0;
			}

		} else {
			cout << "000";
			return 0;
		}

	} else {
		cout << "0000" ;
		return 0;
	}

	return 0;
}
