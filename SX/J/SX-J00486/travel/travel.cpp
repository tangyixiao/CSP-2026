#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	char a[100];
	char b[100];
	int z = 0;
	int x = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++) {
		cin >> b[i];
	}
	if (a[0] == b[0] && a[1] == b[1]) {
		cout << "1";
		z = 1;
	} else {
		cout << "0000";
		return 0;
		z = 0;
	}
	if (a[2] == b[2] && a[3] == b[3]) {
		if (z == 1) {
			cout << "1";
			x = 1;
		} else {
			cout << "000";
			return 0;
			x = 0;
		}
	} else {
		cout << "000";
		return 0;
		x = 0;
	}
	int q = a[4];
	int w = b[4];
	if (q == 65) {
		if (w == q + 1) {
			if (z == 1 && x == 1) {
				cout << "11";
			} else {
				cout << "00";
			}
		}
		if (w == q + 2) {
			if (z == 1 && x == 1) {
				cout << "10";
			} else {
				cout << "00";
			}
		}
	}
	if (q == 66) {
		if (w == q + 1) {
			if (z == 1 && x == 1) {
				cout << "11";
			} else {
				cout << "00";
			}
		}
		if (w == q - 1) {
			if (z == 1 && x == 1) {
				cout << "11";
			} else {
				cout << "00";
			}
		}
	}
	if (q == 67) {
		if (w == q - 1) {
			if (z == 1 && x == 1) {
				cout << "11";
			} else {
				cout << "00";
			}
		}
		if (w == q - 2) {
			if (z == 1 && x == 1) {
				cout << "10";
			} else {
				cout << "00";
			}
		}
		if (w == q + 1) {
			cout << "00";
		}
	}
	if (q == 68) {
		if (w == q + 1) {
			if (z == 1 && x == 1) {
				cout << "11";
			} else {
				cout << "00";
			}
		}
	}
	if (q == 69) {
		if (w == q - 1) {
			if (z == 1 && x == 1) {
				cout << "11";
			} else {
				cout << "00";
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
