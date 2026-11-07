#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

bool e(string q, string w) {
	if (q[2] - '0' > w[2] - '0') {
		if (((q[2] - '0') - (w[2] - '0')) == 1) {
			return true;
		} else {
			return false;
		}
	} else {
		if (((w[2] - '0') - (q[2] - '0')) == 1) {
			return true;
		} else {
			return false;
		}
	}
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b;
	string a1, b1;
	cin >> a >> a1;
	cin >> b >> b1;
	if (a == b) {
		cout << 1;
		if ((a1[0] - '0') * 10 + (a1[1] - '0' ) == (b1[0] - '0') * 10 + (b1[1] - '0')) {
			cout << 1;
			if (((a1[2] - 'A' ) >= 0 && (a1[2] - 'A' ) <= 2) && ((b1[2] - 'A' ) >= 0 && (b1[2] - 'A' ) <= 2)) {
				cout << 1;
				if (e(a1, b1)) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else if (((a1[2] - 'A' ) >= 3 && (a1[2] - 'A') <= 4) && ((b1[2] - 'A' ) >= 3 && (b1[2] - 'A' ) <= 4)) {
				cout << 1;
				if (e(a1, b1)) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0;
				cout << 0;
			}
		} else {
			cout << 0;
			cout << 0;
			cout << 0;
		}
	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
	}
	return 0;
}