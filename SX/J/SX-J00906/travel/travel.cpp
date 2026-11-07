#include <bits/stdc++.h>
using namespace std;
int c[3], d[3];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int a, b, e = 0, f = 0, g = 0, h = 0;
	cin >> a ;
	for (int i = 0; i < 3; i++) {
		cin >> c[i];
	}
	cin >> b;
	for (int i = 0; i < 3; i++) {
		cin >> d[i];
	}
	if (a == b) {
		e = 1;
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	for (int i = 1; i < 3; i++) {
		if (c[1] == d[1] && c[2] == d[2] && e == 1) {
			f = 1;
			cout << "1";
		} else {
			cout << "0";
		}
	}
	for (int i = 1; i < 3; i++) {
		if (c[3] != 'A' && c[3] != 'B' && c[3] != 'C' && d[3] != 'A' && d[3] != 'B' && d[3] != 'C' && e == 1 && f == 1
		        || c[3] != 'D'
		        && c[3] != 'F' && d[3] != 'D' && d[3] != 'F'
		        && c[3] != 'F' && d[3] != 'D' && d[3] != 'F' && e == 1 && f == 1) {
			g = 1;
			cout << "1";
		} else {
			cout << "0";
		}
	}
	for (int i = 1; i < 3; i++) {
		if (c[3] + 1 == d[3] && e == 1 && f == 1 & g == 1 || c[3] - 1 == d[3] && e == 1 && f == 1 & g == 1) {
			cout << "1";
		} else {
			cout << "0";
		}
	}
	return 0;
}
