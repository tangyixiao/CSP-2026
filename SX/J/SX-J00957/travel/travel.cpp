#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
long long f = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
	} else {
		cout << "1";
		for (int i = 0; i <= s1.size() - 2; i++) {
			if (s1[i] == s2[i]) {
				f = 1;
			} else {
				f = 0;
				cout << "000";
				return 0;
			}
		}
		if (f == 1) {
			cout << "1";
			if (s1[2] <= 'C' && s2[2] <= 'C') {
				f = 1;
			} else if (s1[2] >= 'D' && s2[2] >= 'D') {
				f = 1;
			} else {
				f = 0;
				cout << "00";
				return 0;
			}
			if (f == 1) {
				cout << "1";
				if (s1[2] + 1 == s2[2]) {
					cout << "1";
				} else if (s2[2] + 1 == s1[2]) {
					cout << "1";
				} else if (s1[2] == 'D' && s2[2] == 'F') {
					cout << "1";
				} else if (s1[2] == 'F' && s2[2] == 'D') {
					cout << "1";
				} else {
					cout << "0";
				}
			}
		}
	}
	return 0;
}
