#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2, a;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		a = a + "1";
		if (s1[1] == s2[1]) {
			a = a + "1";
			if ((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C' && s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') || (s1[2] == 'D'
			        || s1[2] == 'F' && s2[2] == 'D' || s2[2] == 'F')) {
				a = a + "1";
				if (s1[2] + 1 == s2[2] || s2[2] + 1 == s1[2]) {
					a = a + "1";
				} else {
					a = "1110";
				}
			} else {
				a = "1100";
			}
		} else {
			a = "1000";
		}
	} else {
		a = "0000";
	}
	cout << a;
	return 0;
}
