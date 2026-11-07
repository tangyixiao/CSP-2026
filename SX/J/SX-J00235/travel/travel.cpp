#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s1, s2, n1, n2;
	cin >> s1 >> n1 >> s2 >> n2;
	if (s1 == s2) {
		cout << 1;
		if (n1[0] == n2[0] && n1[1] == n2[1]) {
			cout << 1;
			if ((n1[2] == 'D' || n2[2] == 'F') && (n2[2] == 'D' || n1[2] == 'F')) {
				cout << "11";
			} else if ((n1[2] == 'A' || n1[2] == 'B' || n1[2] == 'C') && (n2[2] == 'A' || n2[2] == 'B' || n2[2] == 'C')) {
				cout << 1;
				if (n1[2] == 'B' || n2[2] == 'B') {
					cout << 1;
				} else {
					cout << 0;
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
