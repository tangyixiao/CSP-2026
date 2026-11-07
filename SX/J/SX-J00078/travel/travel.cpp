#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		int len1 = s1.size(), len2 = s2.size(), flag = 0;
		for (int i = 0; i < len1 - 1, i < len2 - 1; i++) {
			if (s1[i] != s2[i]) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			cout << "000";
		} else {
			cout << 1;
			if (s1[len1 - 1] <= 'C' && s2[len2 - 1] <= 'C') {
				cout << 1;
				if (((s1[len1 - 1] == 'A' && s2[len2 - 1] == 'B') || (s1[len1 - 1] == 'B' && s2[len2 - 1] == 'A'))
				        || ((s1[len1 - 1] == 'B' && s2[len2 - 1] == 'C') || (s1[len1 - 1] == 'C' && s2[len2 - 1] == 'B'))) {
					cout << 1;
				} else {
					cout << "0";
				}
			} else if (s1[len1 - 1] >= 'D' && s2[len2 - 1] >= 'D') {
				if ((s1[len1 - 1] == 'D' && s2[len2 - 1] == 'F') || (s1[len1 - 1] == 'F' && s2[len2 - 1] == 'D')) {
					cout << 1;
				} else {
					cout << "0";
				}
			} else {
				cout << "00";
			}
		}
	} else {
		cout << "0000";
	}
	return 0;
}
