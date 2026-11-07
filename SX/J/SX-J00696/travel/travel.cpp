#include <bits/stdc++.h>
using namespace std;
string ca, cb, sa, sb;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> ca >> sa >> cb >> sb;
	if (ca != cb) {
		cout << "0000" << endl;
		return 0;
	} else {
		cout << 1;
		if (sa[0] != sb[0] || sa[1] != sb[1]) {
			cout << "000" << endl;
			return 0;
		} else {
			cout << 1;
			int a, b;
			if (sa[2] == 'A' || sa[2] == 'B' || sa[2] == 'C') {
				a = 1;
			} else {
				a = 2;
			}
			if (sb[2] == 'A' || sb[2] == 'B' || sb[2] == 'C') {
				b = 1;
			} else {
				b = 2;
			}
			if (a != b) {
				cout << "00" << endl;
				return 0;
			} else {
				cout << 1;
				if (a == 2) {
					cout << 1 << endl;
					return 0;
				} else {
					if (sa[2] != 'B' && sb[2] != 'B') {
						cout << 0 << endl;
						return 0;
					} else {
						cout << 1 << endl;
						return 0;
					}
				}
			}
		}
	}
	return 0;
}
