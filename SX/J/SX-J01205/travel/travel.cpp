#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int a[5];
char x, y;
bool f[5];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = 0; i <= 1; i++) {
		if (s1[i] == '1' && i == 0) {
			a[2] += (s1[i] - '0') * 10;
		} else {
			a[2] += s1[i] - '0';
		}
		if (s2[i] == '1' && i == 0) {
			a[4] += (s2[i] - '0') * 10;
		} else {
			a[4] += s2[i] - '0';
		}
	}
	x = s1[2];
	y = s2[2];
	for (int i = 0; i <= 1; i++) {
		if (c2[i] == '1' && i == 0) {
			a[3] += (c2[i] - '0') * 10;
		} else {
			a[3] += c2[i] - '0';
		}
		if (c1[i] == '1' && i == 0) {
			a[1] += (c1[i] - '0') * 10;
		} else {
			a[1] += c1[i] - '0';
		}
	}

	if (a[1] == a[3]) {
		cout << "1";
		if (a[2] == a[4]) {
			cout << "1";
			if ((x == 'A' || x == 'B' || x == 'C') && (y == 'A' || y == 'B' || y == 'C')) {
				cout << "1";
				if (x == 'B' || y == 'B') {
					cout << "1";
				} else {
					cout << "0";
				}
			} else if ((x == 'D' || x == 'F') && (y == 'D' || y == 'F')) {
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
