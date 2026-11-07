#include <bits/stdc++.h>
using namespace std;

int main() {
	int a1, b1;
	string c1, s1, c2, s2, zw = "ABC__DF";
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	char a = s1[2], b = s2[2];
	for (int i = 0; i < 6; i++) {
		if (a == zw[i]) {
			a1 = i;
		}
		if (b == zw[i]) {
			b1 = i;
		}
	}
	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if (max(a1 - b1, b1 - a1) <= 2 ) {
				cout << 1;
				if (max(a1 - b1, b1 - a1) > 1) {
					cout << '0' << endl;
					return 0;
				} else {
					cout << 1 << endl;
					return 0;
				}
			} else {
				cout << "00" << endl;
				return 0;
			}
		} else {
			cout << "000" << endl;
			return 0;
		}
	} else {
		cout << "0000" << endl;
		return 0;
	}
}