#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, a1, b, b1;
	cin >> a >> a1 >> b >> b1;
	if (a[0] == b[0] && a[1] == b[1]) {
		cout << "1";
		if (a1[0] == b1[0] && a1[1] == b1[1]) {
			cout << "1";
			if (a1[2] > 'C' && b1[2] > 'C') {
				cout << "11";
			} else if (a1[2] < 'D' && b1[2] < 'D') {
				cout << "1";
				int s = a1[2] - b1[2];
				if (abs(s) == 1) {
					cout << "1";
				} else {
					cout << "0";
				}
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
