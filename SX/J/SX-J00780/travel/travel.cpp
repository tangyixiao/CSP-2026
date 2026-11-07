#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2, a;
	bool b;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		a[0] = '1';
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			a[1] = '1';
			if ((s1[2] == 'A' || 'B' || 'C' && s2[2] == 'A' || 'B' || 'C' ) || (s1[2] == 'D' || 'E' && s2[2] == 'D' || 'E')) {
				a[2] = '1';
				if (s1[2] + 1 == s2[2]) {
					a[3] = '1';
				} else {
					a[3] = '0';
				}
			} else {
				a[2] = '0';
			}
		} else {
			a[1] = '0';
		}
		b = 1;
	} else {
		a = "0000";
		b = 0;
	}
	if (b == 1) {
		for (int i = 0; i < 4; i++) {
			cout << a[i];
		}
	} else {
		cout << a;
	}
	return 0;
}
