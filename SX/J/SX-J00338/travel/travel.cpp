#include <bits/stdc++.h>
using namespace std;
string s1, s2, a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> s1 >> b >> s2;
	if (a != b) {
		cout << "0000";
		return 0;
	} else {
		cout << 1;
		if (s1[1] != s2[1]) {
			cout << "000";
			return 0;
		} else {
			cout << '1';
			if ((s1[2] <= 'C' and s2[2] <= 'C') or (s1[2] > 'C' and s2[2] > 'C')) {
				cout << 1;
				if (s1[2] == 'A' and s2[2] == 'B') {
					cout << '1';
					return 0;
				}
				if (s1[2] == 'B' and s2[2] == 'A') {
					cout << '1';
					return 0;
				}
				if (s1[2] == 'C' and s2[2] == 'B') {
					cout << '1';
					return 0;
				}
				if (s1[2] == 'B' and s2[2] == 'C') {
					cout << '1';
					return 0;
				}
				if (s1[2] == 'D' and s2[2] == 'F') {
					cout << '1';
					return 0;
				}
				if (s1[2] == 'F' and s2[2] == 'D') {
					cout << '1';
					return 0;
				}
			} else {
				cout << "00";
				return 0;
			}
		}
	}
	cout << '0';
	return 0;
}
