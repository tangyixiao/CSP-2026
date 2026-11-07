#include <bits/stdc++.h>
using namespace std;

string a, b, c, d, s;
int f;

int main() {
	freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	s[0] = 'A';
	s[1] = 'B';
	s[2] = 'C';
	s[3] = 'D';
	s[4] = 'F';
	if (a[0] == c[0] && a[1] == c[1]) {
		cout << 1;
		if (b[1] == d[1] && b[0] == d[0]) {
			cout << 1;
			if (b[2] <= 'C' && d[2] <= 'C') {
				cout << 1;
				for (int i = 0; i < 4; i++) {
					if (b[2] == s[i]) {
						if (d[2] == s[i + 1] || d[2] == s[i - 1]) {
							cout << 1;
							f = 1;
						}
					}
				}
				if (f == 1) {
					return 0;
				}
				if (b[2] == s[4]) {
					if (d[2] == s[3]) {
						cout << 1;
						return 0;
					}
				}
				cout << 0;
			} else if (b[2] <= 'F' && d[2] <= 'F' && b[2] > 'C' && d[2] > 'C') {
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
