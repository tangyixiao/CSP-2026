#include <bits/stdc++.h>
using namespace std;
int c1, c2, c10, c20, s10, s20, s01, s02;
char s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> c2 >> s01 >> s1 >> s02 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	} else {
		c10 = 1;
		c20 = 1;
	}
	if (s01 == s02) {
		if (s1 - s2 == 1 || s1 - s2 == -1) {
			if (s1 == 3 && s2 == 4) {
				s10 = 1;
				s20 = 0;
			} else if (s1 == 4 && s2 == 3) {
				s10 = 1;
				s20 = 0;
			} else {
				s10 = 1;
				s20 = 1;
			}
		} else {
			s10 = 0;
			s20 = 0;
		}
	} else {
		s10 = 0;
		s20 = 0;
	}
	cout << c10 << c20 << s10 << s20;
	return 0;
}
