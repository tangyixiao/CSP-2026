#include <bits/stdc++.h>
using namespace std;
int s[4];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << s[0] << s[1] << s[2] << s[3];
	} else {
		if (s1[2] == s2[2]) {
			s[1] = 1;
		}
		s[0] = 1;

		if (s1[0] == s2[0] && s1[1] == s2[1])
			s[2] = 1;
		if ((s1[2] == ('A' || 'B' || 'C') && s1[2] == ('A' || 'B' || 'C')) || (s1[2] == ('D' || 'F') && s1[2] == ('D' || 'F')))
			s[2] = 1;
		if (s[1] == 1 && ((s2[2] == s1[2] && s1[1] == s2[1] && abs(s1[0] - s2[0]) == 1) ) || ((abs(s2[2] - s1[2]) == 1)
		        && (s2[1] == s1[1]) && (s2[0] == s1[0])))
			s[3] = 1;
		cout << s[0] << s[1] << s[2] << s[3];
	}
	return 0;
}
