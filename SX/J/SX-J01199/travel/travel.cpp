#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	string a = "ABCDE";
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << "1";
			if ((s1[2] == a[0] && (s2[2] == a[1] || s2[2] == a[2])) || (s1[2] == a[1] && (s2[2] == a[0] || s2[2] == a[2]))
			        || (s1[2] == a[2] && (s2[2] == a[1] || s2[2] == a[0]))) {
				cout << "1";
				if (s1[2] - s2[2] == 1 || s1[2] - s2[2] == -1) {
					cout << "1";
				} else {
					cout << "0";
				}
			} else if ((s1[2] == a[3] && s2[2] == a[4]) || (s1[2] == a[4] && s2[2] == a[3])) {
				cout << "11";
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
