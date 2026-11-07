#include <bits/stdc++.h>
using namespace std;
string sss1, sss2, sss3, sss4;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> sss1 >> sss2 >> sss3 >> sss4;
	if (sss1 == sss3) {
		cout << 1;
		if (sss2.substr(0, 2) == sss4.substr(0, 2)) {
			cout << 1;
			if (sss2[2] <= 'C' && sss4[2] <= 'C') {
				cout << 1;
				if (abs(sss2[2] - sss4[2]) == 1) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else if (sss2[2] >= 'D' && sss4[2] >= 'D') {
				cout << 1;
				if (abs(sss2[2] - sss4[2]) == 1) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0 << 0;
			}
		} else {
			cout << 0 << 0 << 0;
		}
	} else {
		cout << 0 << 0 << 0 << 0;
	}
	return 0;
}
