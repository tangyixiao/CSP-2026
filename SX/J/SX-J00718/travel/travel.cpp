#include <bits/stdc++.h>
using namespace std;
char  a[1000], b[1000], c[1000], d[1000];
int x = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	for (int i = 1; i <= 2; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= 3; i++) {
		cin >> b[i];
	}
	for (int i = 1; i <= 2; i++) {
		cin >> c[i];
	}
	for (int i = 1; i <= 2; i++) {
		cin >> d[i];
	}
	for (int i = 1; i <= 3; i++) {
		if (a[i] == c[i]) {
			x = 1;
		}
	}
	cout << x;
	if (x == 0) {
		cout << "000";
		return 0;
	}
	for (int i = 1; i <= 2; i++) {
		if (b[i] == d[i]) {
			x = 1;
		} else {
			x = 0;
		}
	}
	cout << x;
	if (x == 0) {
		cout << "00";
		return 0;
	}
	if ((b[3] == 'D' && d[3] == 'F') || (b[3] == 'F' && d[3] == 'D')) {
		x = 1;
	} else if (b[3] <= 'C' && d[3] <= 'C') {
		x = 1;
	} else {
		x = 0;
	}
	cout << x;
	if (x == 0) {
		cout << "0";
		return 0;
	}
	if ((b[3] + 1 == d[3] && b[3] != 'C' && d[3] != 'D') || (d[3] + 1 == b[3] && d[3] != 'C' && b[3] != 'D')) {
		x = 1;
	} else {
		x = 0;
	}
	cout << x;
	return 0;
}