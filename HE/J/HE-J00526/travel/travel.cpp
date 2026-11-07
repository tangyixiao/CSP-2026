#include <bits/stdc++.h>
using namespace std;
int c1, c2;
string s1, s2;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			char z1 = s1[2], z2 = s2[2];
			if ((z1 <= 'C' && z2 <= 'C') || (z1 > 'C' && z2 > 'C')) {
				 if (z1 - z2 == 1 || z1 - z2 == -1) {
				 	cout << "1111";
					return 0;
				 }
				 else {
				 	cout << "1110";
					return 0;
				 }
			}
			else {
				cout << "1100";
				return 0;
			}
		}
		else {
			cout << "1000";
			return 0;
		}
	}
	else {
		cout << "0000";
		return 0;
	}
}
